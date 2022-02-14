
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_pool ;
struct TYPE_4__ {int type; int * next; int * val; int * key; } ;
typedef TYPE_1__ fz_css_condition ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int *,char const*) ;

__attribute__((used)) static fz_css_condition *FUNC_2(fz_context *VAR_0, fz_pool *VAR_1, int VAR_2, const char *VAR_3, const char *VAR_4)
{
 fz_css_condition *VAR_5 = FUNC_0(VAR_0, VAR_1, sizeof *VAR_5);
 VAR_5->type = VAR_2;
 VAR_5->key = VAR_3 ? FUNC_1(VAR_0, VAR_1, VAR_3) : ((void*)0);
 VAR_5->val = VAR_4 ? FUNC_1(VAR_0, VAR_1, VAR_4) : ((void*)0);
 VAR_5->next = ((void*)0);
 return VAR_5;
}
