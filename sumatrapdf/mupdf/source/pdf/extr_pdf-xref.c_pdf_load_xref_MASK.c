
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {float type; int gen; scalar_t__ ofs; scalar_t__ num; } ;
typedef TYPE_1__ pdf_xref_entry ;
typedef int pdf_lexbuf ;
struct TYPE_11__ {scalar_t__ file_size; int startxref; } ;
typedef TYPE_2__ pdf_document ;
typedef int int64_t ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_2__*,int ,int *,int) ;
 int FUNC_6 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_1, pdf_document *VAR_2, pdf_lexbuf *VAR_3)
{
 int VAR_4;
 int VAR_5;
 pdf_xref_entry *VAR_6;

 FUNC_4(VAR_1, VAR_2);

 FUNC_5(VAR_1, VAR_2, VAR_2->startxref, VAR_3, 1);

 if (FUNC_6(VAR_1, VAR_2) == 0)
  FUNC_0(VAR_1, VAR_0, "found xref was empty");

 FUNC_3(VAR_1, VAR_2);

 VAR_6 = FUNC_2(VAR_1, VAR_2, 0);

 if (!VAR_6->type)
 {
  VAR_6->type = 'f';
  VAR_6->gen = 65535;
  VAR_6->num = 0;
 }

 else if (VAR_6->type != 'f')
  FUNC_1(VAR_1, "first object in xref is not free");


 VAR_5 = FUNC_6(VAR_1, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
 {
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4);
  if (VAR_6->type == 'n')
  {


   if (VAR_6->ofs == 0)
    VAR_6->type = 'f';
   else if (VAR_6->ofs <= 0 || VAR_6->ofs >= VAR_2->file_size)
    FUNC_0(VAR_1, VAR_0, "object offset out of range: %d (%d 0 R)", (int)VAR_6->ofs, VAR_4);
  }
  if (VAR_6->type == 'o')
  {



   int64_t VAR_7 = VAR_6->ofs;
   if (VAR_7 <= 0 || VAR_7 >= VAR_5 || FUNC_2(VAR_1, VAR_2, VAR_7)->type != 'n')
    FUNC_0(VAR_1, VAR_0, "invalid reference to an objstm that does not exist: %d (%d 0 R)", (int)VAR_7, VAR_4);
  }
 }
}
