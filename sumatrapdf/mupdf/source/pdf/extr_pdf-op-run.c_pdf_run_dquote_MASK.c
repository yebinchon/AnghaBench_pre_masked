
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
struct TYPE_5__ {float word_space; float char_space; int leading; } ;
struct TYPE_7__ {TYPE_1__ text; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*,unsigned char*,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2, float VAR_3, char *VAR_4, int VAR_5)
{
 pdf_run_processor *VAR_6 = (pdf_run_processor *)VAR_1;
 pdf_gstate *VAR_7 = VAR_6->gstate + VAR_6->gtop;
 VAR_7->text.word_space = VAR_2;
 VAR_7->text.char_space = VAR_3;
 FUNC_1(&VAR_6->tos, VAR_7->text.leading);
 FUNC_0(VAR_0, VAR_6, (unsigned char*)VAR_4, VAR_5);
}
