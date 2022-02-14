
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_var_descriptor {int dummy; } ;
struct lwan_tpl {int dummy; } ;
typedef enum lwan_tpl_flag { ____Placeholder_lwan_tpl_flag } lwan_tpl_flag ;


 struct lwan_tpl* FUNC_0 (int,int) ;
 int FUNC_1 (struct lwan_tpl*) ;
 int FUNC_2 (struct lwan_tpl*) ;
 scalar_t__ FUNC_3 (struct lwan_tpl*,char const*,struct lwan_var_descriptor const*,int) ;

struct lwan_tpl *
FUNC_4(const char *VAR_0,
                             const struct lwan_var_descriptor *VAR_1,
                             enum lwan_tpl_flag VAR_2)
{
    struct lwan_tpl *VAR_3;

    VAR_3 = FUNC_0(1, sizeof(*VAR_3));
    if (VAR_3) {
        if (FUNC_3(VAR_3, VAR_0, VAR_1, VAR_2)) {




            return VAR_3;
        }

        FUNC_2(VAR_3);
    }

    return ((void*)0);
}
