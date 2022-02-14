
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_pool ;
struct TYPE_4__ {int * next; int * right; int * left; int * cond; scalar_t__ combine; int * name; } ;
typedef TYPE_1__ fz_css_selector ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int *,char const*) ;

__attribute__((used)) static fz_css_selector *FUNC_2(fz_context *VAR_0, fz_pool *VAR_1, const char *VAR_2)
{
 fz_css_selector *VAR_3 = FUNC_0(VAR_0, VAR_1, sizeof *VAR_3);
 VAR_3->name = VAR_2 ? FUNC_1(VAR_0, VAR_1, VAR_2) : ((void*)0);
 VAR_3->combine = 0;
 VAR_3->cond = ((void*)0);
 VAR_3->left = ((void*)0);
 VAR_3->right = ((void*)0);
 VAR_3->next = ((void*)0);
 return VAR_3;
}
