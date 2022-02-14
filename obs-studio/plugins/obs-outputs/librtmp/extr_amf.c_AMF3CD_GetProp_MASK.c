
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cd_num; int * cd_props; } ;
typedef int AVal ;
typedef TYPE_1__ AMF3ClassDef ;


 int VAR_0 ;

AVal *
FUNC_0(AMF3ClassDef *VAR_1, int VAR_2)
{
    if (VAR_2 >= VAR_1->cd_num)
        return (AVal *)&VAR_0;
    return &VAR_1->cd_props[VAR_2];
}
