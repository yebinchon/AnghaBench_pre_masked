
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* dev; } ;
typedef TYPE_3__ pdf_run_processor ;
typedef int pdf_processor ;
typedef int fz_context ;
struct TYPE_4__ {void* y1; void* x1; void* y0; void* x0; } ;
struct TYPE_5__ {int flags; TYPE_1__ d1_rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (float,float) ;
 void* FUNC_1 (float,float) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_10, pdf_processor *VAR_11, float VAR_12, float VAR_13, float VAR_14, float VAR_15, float VAR_16, float VAR_17)
{
 pdf_run_processor *VAR_18 = (pdf_run_processor *)VAR_11;
 VAR_18->dev->flags |= VAR_6 | VAR_0;
 VAR_18->dev->flags &= ~(VAR_3 |
    VAR_9 |
    VAR_8 |
    VAR_1 |
    VAR_2 |
    VAR_4 |
    VAR_7 |
    VAR_5);
 VAR_18->dev->d1_rect.x0 = FUNC_1(VAR_14, VAR_16);
 VAR_18->dev->d1_rect.y0 = FUNC_1(VAR_15, VAR_17);
 VAR_18->dev->d1_rect.x1 = FUNC_0(VAR_14, VAR_16);
 VAR_18->dev->d1_rect.y1 = FUNC_0(VAR_15, VAR_17);
}
