
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_pool ;
struct TYPE_4__ {int type; int * next; int * args; int * data; } ;
typedef TYPE_1__ fz_css_value ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int *,int) ;

__attribute__((used)) static fz_css_value *FUNC_1(fz_context *VAR_0, fz_pool *VAR_1, int VAR_2)
{
 fz_css_value *VAR_3 = FUNC_0(VAR_0, VAR_1, sizeof *VAR_3);
 VAR_3->type = VAR_2;
 VAR_3->data = ((void*)0);
 VAR_3->args = ((void*)0);
 VAR_3->next = ((void*)0);
 return VAR_3;
}
