
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int len; char* data; } ;
struct TYPE_7__ {int line_buf_valid; int line_buf_converted; scalar_t__ copy_dest; int eol_type; TYPE_2__ line_buf; int file_encoding; scalar_t__ need_transcoding; int raw_buf_len; int raw_buf_index; } ;
typedef TYPE_1__* CopyState ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;




 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,size_t,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static bool
FUNC_8(CopyState VAR_1)
{
 bool VAR_2;

 FUNC_6(&VAR_1->line_buf);
 VAR_1->line_buf_valid = 1;


 VAR_1->line_buf_converted = 0;


 VAR_2 = FUNC_2(VAR_1);

 if (VAR_2)
 {





  if (VAR_1->copy_dest == VAR_0)
  {
   do
   {
    VAR_1->raw_buf_index = VAR_1->raw_buf_len;
   } while (FUNC_1(VAR_1));
  }
 }
 else
 {




  switch (VAR_1->eol_type)
  {
   case 129:
    FUNC_0(VAR_1->line_buf.len >= 1);
    FUNC_0(VAR_1->line_buf.data[VAR_1->line_buf.len - 1] == '\n');
    VAR_1->line_buf.len--;
    VAR_1->line_buf.data[VAR_1->line_buf.len] = '\0';
    break;
   case 131:
    FUNC_0(VAR_1->line_buf.len >= 1);
    FUNC_0(VAR_1->line_buf.data[VAR_1->line_buf.len - 1] == '\r');
    VAR_1->line_buf.len--;
    VAR_1->line_buf.data[VAR_1->line_buf.len] = '\0';
    break;
   case 130:
    FUNC_0(VAR_1->line_buf.len >= 2);
    FUNC_0(VAR_1->line_buf.data[VAR_1->line_buf.len - 2] == '\r');
    FUNC_0(VAR_1->line_buf.data[VAR_1->line_buf.len - 1] == '\n');
    VAR_1->line_buf.len -= 2;
    VAR_1->line_buf.data[VAR_1->line_buf.len] = '\0';
    break;
   case 128:

    FUNC_0(0);
    break;
  }
 }


 if (VAR_1->need_transcoding)
 {
  char *VAR_3;

  VAR_3 = FUNC_5(VAR_1->line_buf.data,
          VAR_1->line_buf.len,
          VAR_1->file_encoding);
  if (VAR_3 != VAR_1->line_buf.data)
  {

   FUNC_6(&VAR_1->line_buf);
   FUNC_3(&VAR_1->line_buf, VAR_3, FUNC_7(VAR_3));
   FUNC_4(VAR_3);
  }
 }


 VAR_1->line_buf_converted = 1;

 return VAR_2;
}
