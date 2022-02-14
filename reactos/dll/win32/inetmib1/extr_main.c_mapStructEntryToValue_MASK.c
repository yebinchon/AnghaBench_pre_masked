
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct structToAsnValue {int offset; int (* copy ) (int *,int *) ;} ;
typedef size_t UINT ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ SnmpVarBind ;
typedef int BYTE ;
typedef int AsnInteger32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static AsnInteger32 FUNC_1(struct structToAsnValue *VAR_1,
    UINT VAR_2, void *VAR_3, UINT VAR_4, SnmpVarBind *VAR_5)
{

    if (!VAR_4)
        return VAR_0;
    --VAR_4;
    if (VAR_4 >= VAR_2)
        return VAR_0;
    if (!VAR_1[VAR_4].copy)
        return VAR_0;
    return VAR_1[VAR_4].copy(&VAR_5->value, (BYTE *)VAR_3 + VAR_1[VAR_4].offset);
}
