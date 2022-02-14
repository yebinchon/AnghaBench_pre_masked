
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_3__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_3(fz_context *VAR_1, pdf_annot *VAR_2, pdf_obj *VAR_3, pdf_obj **VAR_4)
{
 pdf_obj *VAR_5 = FUNC_1(VAR_1, VAR_2->obj, FUNC_0(VAR_0));
 while (*VAR_4) {
  if (FUNC_2(VAR_1, VAR_5, *VAR_4))
   return 1;
  VAR_4++;
 }

 return 0;
}
