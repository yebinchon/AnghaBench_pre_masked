
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attrs; int type; } ;
typedef TYPE_1__ var_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(const var_t *VAR_3)
{
    switch (FUNC_2(VAR_3->type, VAR_3->attrs, VAR_1))
    {
    case 130:
        if (!FUNC_1( VAR_3->type )) return 0;

    case 128:
        return (FUNC_0(VAR_3->type, VAR_3->attrs, VAR_2) == VAR_0);
    case 129:
        return VAR_2;
    default:
        return 0;
    }

}
