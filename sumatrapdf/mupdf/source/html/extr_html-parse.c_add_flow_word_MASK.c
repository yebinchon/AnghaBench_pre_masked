
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_pool ;
struct TYPE_4__ {scalar_t__* text; } ;
struct TYPE_5__ {int markup_lang; TYPE_1__ content; } ;
typedef TYPE_2__ fz_html_flow ;
typedef int fz_html_box ;
typedef int fz_context ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int *,int *,int *,int ,int) ;
 int FUNC_1 (scalar_t__*,char const*,int) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_1, fz_pool *VAR_2, fz_html_box *VAR_3, fz_html_box *VAR_4, const char *VAR_5, const char *VAR_6, int VAR_7)
{
 fz_html_flow *VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0, VAR_6 - VAR_5 + 1);
 FUNC_1(VAR_8->content.text, VAR_5, VAR_6 - VAR_5);
 VAR_8->content.text[VAR_6 - VAR_5] = 0;
 VAR_8->markup_lang = VAR_7;
}
