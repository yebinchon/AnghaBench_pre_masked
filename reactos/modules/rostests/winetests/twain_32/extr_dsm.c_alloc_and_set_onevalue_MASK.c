
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Item; int ItemType; } ;
typedef int TW_UINT32 ;
typedef int TW_UINT16 ;
typedef TYPE_1__ TW_ONEVALUE ;
typedef scalar_t__ TW_HANDLE ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static TW_HANDLE FUNC_4(TW_UINT32 VAR_0, TW_UINT16 VAR_1)
{
    TW_HANDLE VAR_2;
    TW_ONEVALUE *VAR_3;
    VAR_2 = FUNC_0(0, sizeof(*VAR_3));
    if (VAR_2)
    {
        VAR_3 = FUNC_2(VAR_2);
        if (VAR_3)
        {
            VAR_3->ItemType = VAR_1;
            VAR_3->Item = VAR_0;
            FUNC_3(VAR_2);
        }
        else
        {
            FUNC_1(VAR_2);
            VAR_2 = 0;
        }
    }
    return VAR_2;
}
