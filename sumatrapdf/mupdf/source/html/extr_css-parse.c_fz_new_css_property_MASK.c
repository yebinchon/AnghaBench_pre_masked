
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_pool ;
typedef int fz_css_value ;
struct TYPE_4__ {int spec; int * next; scalar_t__ important; int * value; int name; } ;
typedef TYPE_1__ fz_css_property ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,char const*) ;

__attribute__((used)) static fz_css_property *FUNC_2(fz_context *VAR_0, fz_pool *VAR_1, const char *VAR_2, fz_css_value *VAR_3, int VAR_4)
{
 fz_css_property *VAR_5 = FUNC_0(VAR_0, VAR_1, sizeof *VAR_5);
 VAR_5->name = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_5->value = VAR_3;
 VAR_5->spec = VAR_4;
 VAR_5->important = 0;
 VAR_5->next = ((void*)0);
 return VAR_5;
}
