
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_4__ {int recalculate; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int VAR_4 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,TYPE_1__*,int *,int *) ;

__attribute__((used)) static void FUNC_7(fz_context *VAR_5, pdf_document *VAR_6, pdf_obj *VAR_7)
{
 int VAR_8 = FUNC_5(VAR_5, VAR_7);
 int VAR_9 = (VAR_8 & VAR_3);
 int VAR_10 = (VAR_8 & VAR_2);
 pdf_obj *VAR_11, *VAR_12, *VAR_13;

 VAR_11 = FUNC_1(VAR_5, VAR_7);
 if (!VAR_11)
  VAR_11 = VAR_7;


 VAR_12 = FUNC_3(VAR_5, VAR_7, FUNC_0(VAR_0));
 if (VAR_12 && VAR_12 != FUNC_0(VAR_1))
 {
  if (VAR_9 && VAR_10)
   return;
  VAR_13 = FUNC_0(VAR_1);
 }
 else
 {
  VAR_13 = FUNC_2(VAR_5, VAR_7);
 }

 FUNC_4(VAR_5, VAR_11, FUNC_0(VAR_4), VAR_13);
 FUNC_6(VAR_5, VAR_6, VAR_11, VAR_13);
 VAR_6->recalculate = 1;
}
