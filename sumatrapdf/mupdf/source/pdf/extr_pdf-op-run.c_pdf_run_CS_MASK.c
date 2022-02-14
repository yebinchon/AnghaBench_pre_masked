
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dev; } ;
typedef TYPE_2__ pdf_run_processor ;
typedef int pdf_processor ;
typedef int fz_context ;
typedef int fz_colorspace ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int ,int *,int *) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_2, pdf_processor *VAR_3, const char *VAR_4, fz_colorspace *VAR_5)
{
 pdf_run_processor *VAR_6 = (pdf_run_processor *)VAR_3;
 VAR_6->dev->flags &= ~VAR_0;
 if (!FUNC_2(VAR_4, "Pattern"))
  FUNC_1(VAR_2, VAR_6, VAR_1, ((void*)0), ((void*)0));
 else
  FUNC_0(VAR_2, VAR_6, VAR_1, VAR_5);
}
