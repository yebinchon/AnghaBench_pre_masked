
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_2__ {int Tm_pending; int tos; scalar_t__ Tm_adjust; } ;
typedef TYPE_1__ pdf_filter_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,float,float) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2, float VAR_3)
{
 pdf_filter_processor *VAR_4 = (pdf_filter_processor*)VAR_1;
 VAR_4->Tm_adjust = 0;
 FUNC_0(&VAR_4->tos, VAR_2, VAR_3);
 VAR_4->Tm_pending = 1;
}
