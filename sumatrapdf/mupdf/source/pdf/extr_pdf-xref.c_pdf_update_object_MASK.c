
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char type; int obj; scalar_t__ ofs; } ;
typedef TYPE_1__ pdf_xref_entry ;
typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__* FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *) ;

void
FUNC_7(fz_context *VAR_0, pdf_document *VAR_1, int VAR_2, pdf_obj *VAR_3)
{
 pdf_xref_entry *VAR_4;

 if (VAR_2 <= 0 || VAR_2 >= FUNC_6(VAR_0, VAR_1))
 {
  FUNC_0(VAR_0, "object out of range (%d 0 R); xref size %d", VAR_2, FUNC_6(VAR_0, VAR_1));
  return;
 }

 if (!VAR_3)
 {
  FUNC_1(VAR_0, VAR_1, VAR_2);
  return;
 }

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);

 FUNC_2(VAR_0, VAR_4->obj);

 VAR_4->type = 'n';
 VAR_4->ofs = 0;
 VAR_4->obj = FUNC_4(VAR_0, VAR_3);

 FUNC_5(VAR_0, VAR_3, VAR_2);
}
