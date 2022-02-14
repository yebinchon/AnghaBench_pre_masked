
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_run_processor ;
typedef int pdf_processor ;
typedef int pdf_obj ;
struct TYPE_3__ {float* softmask_bc; int luminosity; int * softmask_resources; int * softmask; int ctm; int softmask_ctm; } ;
typedef TYPE_1__ pdf_gstate ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(fz_context *VAR_0, pdf_processor *VAR_1, pdf_obj *VAR_2, pdf_obj *VAR_3, float *VAR_4, int VAR_5)
{
 pdf_run_processor *VAR_6 = (pdf_run_processor *)VAR_1;
 pdf_gstate *VAR_7 = FUNC_3(VAR_0, VAR_6);
 int VAR_8;

 if (VAR_7->softmask)
 {
  FUNC_2(VAR_0, VAR_7->softmask);
  VAR_7->softmask = ((void*)0);
  FUNC_2(VAR_0, VAR_7->softmask_resources);
  VAR_7->softmask_resources = ((void*)0);
 }

 if (VAR_2)
 {
  fz_colorspace *VAR_9 = FUNC_5(VAR_0, VAR_2);
  int VAR_10 = 1;
  if (VAR_9)
   VAR_10 = FUNC_0(VAR_0, VAR_9);
  VAR_7->softmask_ctm = VAR_7->ctm;
  VAR_7->softmask = FUNC_4(VAR_0, VAR_2);
  VAR_7->softmask_resources = FUNC_4(VAR_0, VAR_3);
  for (VAR_8 = 0; VAR_8 < VAR_10; ++VAR_8)
   VAR_7->softmask_bc[VAR_8] = VAR_4[VAR_8];
  VAR_7->luminosity = VAR_5;
  FUNC_1(VAR_0, VAR_9);
 }
}
