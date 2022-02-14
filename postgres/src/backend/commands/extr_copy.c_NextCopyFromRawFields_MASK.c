
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; } ;
struct TYPE_8__ {scalar_t__ cur_lineno; char** raw_fields; scalar_t__ csv_mode; TYPE_1__ line_buf; scalar_t__ header_line; int binary; } ;
typedef TYPE_2__* CopyState ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

bool
FUNC_4(CopyState VAR_0, char ***VAR_1, int *VAR_2)
{
 int VAR_3;
 bool VAR_4;


 FUNC_0(!VAR_0->binary);


 if (VAR_0->cur_lineno == 0 && VAR_0->header_line)
 {
  VAR_0->cur_lineno++;
  if (FUNC_3(VAR_0))
   return 0;
 }

 VAR_0->cur_lineno++;


 VAR_4 = FUNC_3(VAR_0);






 if (VAR_4 && VAR_0->line_buf.len == 0)
  return 0;


 if (VAR_0->csv_mode)
  VAR_3 = FUNC_1(VAR_0);
 else
  VAR_3 = FUNC_2(VAR_0);

 *VAR_1 = VAR_0->raw_fields;
 *VAR_2 = VAR_3;
 return 1;
}
