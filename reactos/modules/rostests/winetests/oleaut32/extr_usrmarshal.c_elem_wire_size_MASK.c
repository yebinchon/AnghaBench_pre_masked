
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbElements; } ;
typedef scalar_t__ SF_TYPE ;
typedef TYPE_1__* LPSAFEARRAY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static DWORD FUNC_0(LPSAFEARRAY VAR_1, SF_TYPE VAR_2)
{
    if (VAR_2 == VAR_0)
        return sizeof(DWORD);
    else
        return VAR_1->cbElements;
}
