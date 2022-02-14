
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_3__ {int Tm_adjust; } ;
typedef TYPE_1__ pdf_filter_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_filter_processor *VAR_1, pdf_obj *VAR_2)
{
 if (VAR_1->Tm_adjust == 0)
  return;
 FUNC_0(VAR_0, VAR_2, VAR_1->Tm_adjust * 1000);
 VAR_1->Tm_adjust = 0;
}
