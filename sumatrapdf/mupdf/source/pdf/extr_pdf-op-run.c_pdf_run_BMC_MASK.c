
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
typedef TYPE_1__ pdf_run_processor ;
typedef int pdf_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,char const*) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1, const char *VAR_2)
{
 pdf_run_processor *VAR_3 = (pdf_run_processor *)VAR_1;

 if (!VAR_2)
  VAR_2 = "Untitled";

 FUNC_0(VAR_0, VAR_3->dev, VAR_2);
}
