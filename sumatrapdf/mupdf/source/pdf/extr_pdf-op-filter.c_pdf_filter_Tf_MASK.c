
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pdf_processor ;
typedef int pdf_font_desc ;
struct TYPE_10__ {TYPE_3__* gstate; int * font_name; } ;
typedef TYPE_4__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_7__ {float size; int font; } ;
struct TYPE_8__ {TYPE_1__ text; } ;
struct TYPE_9__ {TYPE_2__ pending; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_4__*,int ,char const*) ;
 int FUNC_2 (int *,TYPE_4__*,int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_1, pdf_processor *VAR_2, const char *VAR_3, pdf_font_desc *VAR_4, float VAR_5)
{
 pdf_filter_processor *VAR_6 = (pdf_filter_processor*)VAR_2;
 FUNC_2(VAR_1, VAR_6, 0);
 FUNC_3(VAR_1, VAR_6->font_name);
 VAR_6->font_name = ((void*)0);
 VAR_6->font_name = VAR_3 ? FUNC_4(VAR_1, VAR_3) : ((void*)0);
 FUNC_5(VAR_1, VAR_6->gstate->pending.text.font);
 VAR_6->gstate->pending.text.font = FUNC_6(VAR_1, VAR_4);
 VAR_6->gstate->pending.text.size = VAR_5;
 FUNC_1(VAR_1, VAR_6, FUNC_0(VAR_0), VAR_3);
}
