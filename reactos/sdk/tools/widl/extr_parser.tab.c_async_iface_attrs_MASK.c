
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pval; } ;
struct TYPE_5__ {int type; TYPE_1__ u; } ;
typedef TYPE_2__ attr_t ;
typedef int attr_list_t ;




 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int const,int ) ;

__attribute__((used)) static int FUNC_2(attr_list_t *VAR_0, const attr_t *VAR_1)
{
    switch(VAR_1->type)
    {
    case 128:
        return 0;
    case 129:
        FUNC_0(VAR_0, FUNC_1(128, VAR_1->u.pval));
        return 0;
    default:
        return 1;
    }
}
