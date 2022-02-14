
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int type_t ;
struct expr_loc {char* attr; TYPE_1__* v; } ;
struct TYPE_2__ {int loc_info; } ;


 int FUNC_0 (int *,char*,char*,char*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static void FUNC_3(const struct expr_loc *VAR_0,
                                  const type_t *VAR_1, const type_t *VAR_2)
{
    if (!VAR_1 || (!FUNC_2(VAR_2) && !FUNC_1(VAR_2)))
        FUNC_0(&VAR_0->v->loc_info, "arithmetic type required in expression%s%s\n",
                       VAR_0->attr ? " for attribute " : "",
                       VAR_0->attr ? VAR_0->attr : "");
}
