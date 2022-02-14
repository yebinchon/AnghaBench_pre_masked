
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_pool ;
typedef int fz_css_selector ;
struct TYPE_4__ {int * next; int * declaration; int * selector; } ;
typedef TYPE_1__ fz_css_rule ;
typedef int fz_css_property ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int *,int) ;

__attribute__((used)) static fz_css_rule *FUNC_1(fz_context *VAR_0, fz_pool *VAR_1, fz_css_selector *VAR_2, fz_css_property *VAR_3)
{
 fz_css_rule *VAR_4 = FUNC_0(VAR_0, VAR_1, sizeof *VAR_4);
 VAR_4->selector = VAR_2;
 VAR_4->declaration = VAR_3;
 VAR_4->next = ((void*)0);
 return VAR_4;
}
