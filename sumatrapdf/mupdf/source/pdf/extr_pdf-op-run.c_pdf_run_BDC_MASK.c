
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
typedef TYPE_1__ pdf_run_processor ;
typedef int pdf_processor ;
typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char const*) ;
 char* FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_1, pdf_processor *VAR_2, const char *VAR_3, pdf_obj *VAR_4, pdf_obj *VAR_5)
{
 pdf_run_processor *VAR_6 = (pdf_run_processor *)VAR_2;
 const char *VAR_7;

 if (!VAR_3)
  VAR_3 = "Untitled";

 VAR_7 = FUNC_2(VAR_1, VAR_5, FUNC_0(VAR_0));
 if (FUNC_3(VAR_7) == 0)
  VAR_7 = VAR_3;

 FUNC_1(VAR_1, VAR_6->dev, VAR_7);
}
