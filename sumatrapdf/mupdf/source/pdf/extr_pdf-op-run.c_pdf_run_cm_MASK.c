
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_run_processor ;
typedef int pdf_processor ;
struct TYPE_5__ {int ctm; } ;
typedef TYPE_1__ pdf_gstate ;
struct TYPE_6__ {float a; float b; float c; float d; float e; float f; } ;
typedef TYPE_2__ fz_matrix ;
typedef int fz_context ;


 int FUNC_0 (TYPE_2__,int ) ;
 TYPE_1__* FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
 pdf_run_processor *VAR_8 = (pdf_run_processor *)VAR_1;
 pdf_gstate *VAR_9 = FUNC_1(VAR_0, VAR_8);
 fz_matrix VAR_10;

 VAR_10.a = VAR_2;
 VAR_10.b = VAR_3;
 VAR_10.c = VAR_4;
 VAR_10.d = VAR_5;
 VAR_10.e = VAR_6;
 VAR_10.f = VAR_7;
 VAR_9->ctm = FUNC_0(VAR_10, VAR_9->ctm);
}
