
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stm_buf; } ;
typedef TYPE_1__ pdf_xref_entry ;
typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;
typedef int fz_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,int,int) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,int ,int) ;
 TYPE_1__* FUNC_7 (int *,int *,int) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;

void
FUNC_12(fz_context *VAR_3, pdf_document *VAR_4, pdf_obj *VAR_5, fz_buffer *VAR_6, int VAR_7)
{
 int VAR_8;
 pdf_xref_entry *VAR_9;

 if (FUNC_8(VAR_3, VAR_5))
  VAR_8 = FUNC_10(VAR_3, VAR_5);
 else
  VAR_8 = FUNC_9(VAR_3, VAR_5);
 if (VAR_8 <= 0 || VAR_8 >= FUNC_11(VAR_3, VAR_4))
 {
  FUNC_4(VAR_3, "object out of range (%d 0 R); xref size %d", VAR_8, FUNC_11(VAR_3, VAR_4));
  return;
 }

 VAR_9 = FUNC_7(VAR_3, VAR_4, VAR_8);

 FUNC_2(VAR_3, VAR_9->stm_buf);
 VAR_9->stm_buf = FUNC_3(VAR_3, VAR_6);

 FUNC_6(VAR_3, VAR_5, FUNC_0(VAR_2), (int)FUNC_1(VAR_3, VAR_6, ((void*)0)));
 if (!VAR_7)
 {
  FUNC_5(VAR_3, VAR_5, FUNC_0(VAR_1));
  FUNC_5(VAR_3, VAR_5, FUNC_0(VAR_0));
 }
}
