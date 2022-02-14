
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
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*,int ,float*) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_2, pdf_processor *VAR_3, float VAR_4, float VAR_5, float VAR_6)
{
 pdf_run_processor *VAR_7 = (pdf_run_processor *)VAR_3;
 float VAR_8[3] = {VAR_4, VAR_5, VAR_6};
 VAR_7->dev->flags &= ~VAR_0;
 FUNC_2(VAR_2, VAR_7, VAR_1, FUNC_0(VAR_2));
 FUNC_1(VAR_2, VAR_7, VAR_1, VAR_8);
}
