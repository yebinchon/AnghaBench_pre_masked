
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cd_num; int * cd_props; } ;
typedef int AVal ;
typedef TYPE_1__ AMF3ClassDef ;


 int * FUNC_0 (int *,int) ;

void
FUNC_1(AMF3ClassDef *VAR_0, AVal *VAR_1)
{
    if (!(VAR_0->cd_num & 0x0f))
        VAR_0->cd_props = FUNC_0(VAR_0->cd_props, (VAR_0->cd_num + 16) * sizeof(AVal));
    VAR_0->cd_props[VAR_0->cd_num++] = *VAR_1;
}
