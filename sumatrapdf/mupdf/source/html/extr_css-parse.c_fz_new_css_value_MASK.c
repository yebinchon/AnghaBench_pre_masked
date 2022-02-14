
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_pool ;
struct TYPE_4__ {int type; int * next; int * args; int data; } ;
typedef TYPE_1__ fz_css_value ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,char const*) ;

__attribute__((used)) static fz_css_value *FUNC_2(fz_context *VAR_0, fz_pool *VAR_1, int VAR_2, const char *VAR_3)
{
 fz_css_value *VAR_4 = FUNC_0(VAR_0, VAR_1, sizeof *VAR_4);
 VAR_4->type = VAR_2;
 VAR_4->data = FUNC_1(VAR_0, VAR_1, VAR_3);
 VAR_4->args = ((void*)0);
 VAR_4->next = ((void*)0);
 return VAR_4;
}
