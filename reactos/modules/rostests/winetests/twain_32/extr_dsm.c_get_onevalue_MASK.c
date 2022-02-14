
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ItemType; int Item; } ;
typedef int TW_UINT32 ;
typedef int TW_UINT16 ;
typedef TYPE_1__ TW_ONEVALUE ;
typedef int TW_HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_2(TW_HANDLE VAR_2, TW_UINT32 *VAR_3, TW_UINT16 *VAR_4)
{
    TW_ONEVALUE *VAR_5;
    VAR_5 = FUNC_0(VAR_2);
    if (VAR_5)
    {
        *VAR_3 = VAR_5->Item;
        if (VAR_4)
            *VAR_4 = VAR_5->ItemType;
        FUNC_1(VAR_2);
        return VAR_1;
    }
    else
        *VAR_3 = 0;
    return VAR_0;
}
