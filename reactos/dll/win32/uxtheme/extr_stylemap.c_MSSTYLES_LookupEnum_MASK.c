
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwEnum; int dwValue; scalar_t__* szValueName; } ;
typedef int LPCWSTR ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ) ;
 TYPE_1__* VAR_2 ;

BOOL FUNC_1(LPCWSTR VAR_3, int VAR_4, int *VAR_5)
{
    DWORD VAR_6 = 0;

    while(*VAR_2[VAR_6].szValueName && VAR_2[VAR_6].dwEnum != VAR_4) VAR_6++;

    while(*VAR_2[VAR_6].szValueName && VAR_2[VAR_6].dwEnum == VAR_4) {
        if(!FUNC_0(VAR_2[VAR_6].szValueName, VAR_3)) {
            if(VAR_5) *VAR_5 = VAR_2[VAR_6].dwValue;
            return VAR_1;
        }
        VAR_6++;
    }
    return VAR_0;
}
