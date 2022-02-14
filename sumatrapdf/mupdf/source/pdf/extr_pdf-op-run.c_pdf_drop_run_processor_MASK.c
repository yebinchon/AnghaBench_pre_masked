
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int text; } ;
struct TYPE_4__ {size_t gtop; int * gstate; int default_cs; TYPE_1__ tos; int path; } ;
typedef TYPE_2__ pdf_run_processor ;
typedef int pdf_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, pdf_processor *VAR_1)
{
 pdf_run_processor *VAR_2 = (pdf_run_processor *)VAR_1;

 while (VAR_2->gtop >= 0)
 {
  FUNC_4(VAR_0, &VAR_2->gstate[VAR_2->gtop]);
  VAR_2->gtop--;
 }

 FUNC_1(VAR_0, VAR_2->path);
 FUNC_2(VAR_0, VAR_2->tos.text);

 FUNC_0(VAR_0, VAR_2->default_cs);

 FUNC_3(VAR_0, VAR_2->gstate);
}
