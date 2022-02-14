
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* gstate; int dev; scalar_t__ gtop; } ;
typedef TYPE_2__ pdf_run_processor ;
typedef int pdf_processor ;
typedef int fz_context ;
struct TYPE_4__ {scalar_t__ clip_depth; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1)
{
 pdf_run_processor *VAR_2 = (pdf_run_processor *)VAR_1;

 while (VAR_2->gtop)
  FUNC_1(VAR_0, VAR_2);

 while (VAR_2->gstate[0].clip_depth)
 {
  FUNC_0(VAR_0, VAR_2->dev);
  VAR_2->gstate[0].clip_depth--;
 }
}
