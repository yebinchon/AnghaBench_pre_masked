
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int gtop; int tos; TYPE_3__* gstate; } ;
typedef TYPE_2__ pdf_run_processor ;
typedef int pdf_processor ;
struct TYPE_5__ {int leading; } ;
struct TYPE_7__ {TYPE_1__ text; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*,unsigned char*,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, char *VAR_2, int VAR_3)
{
 pdf_run_processor *VAR_4 = (pdf_run_processor *)VAR_1;
 pdf_gstate *VAR_5 = VAR_4->gstate + VAR_4->gtop;
 FUNC_1(&VAR_4->tos, VAR_5->text.leading);
 FUNC_0(VAR_0, VAR_4, (unsigned char*)VAR_2, VAR_3);
}
