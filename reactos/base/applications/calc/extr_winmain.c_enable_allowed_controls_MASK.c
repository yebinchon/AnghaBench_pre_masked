
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hStatWnd; } ;
struct TYPE_4__ {int mask; int idc; } ;
typedef int HWND ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;




 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void FUNC_5(HWND VAR_9, DWORD VAR_10)
{
    BYTE VAR_11;
    int VAR_12;

    switch (VAR_10) {
    case 130:
        VAR_11 = VAR_1;
        break;
    case 129:
        VAR_11 = VAR_2;
        break;
    case 128:
        VAR_11 = VAR_4;
        break;
    case 131:
        VAR_11 = VAR_0;
        break;
    default:
        return;
    }
    for (VAR_12=0; VAR_12<FUNC_4(VAR_8); VAR_12++) {
        if (VAR_8[VAR_12].mask != 0) {
            HWND VAR_13 = FUNC_1(VAR_9, VAR_8[VAR_12].idc);
            BOOL VAR_14;

            if ((VAR_8[VAR_12].mask & VAR_3))
                VAR_14 = FUNC_2(VAR_7.hStatWnd) ? VAR_6 : VAR_5;
            else
                VAR_14 = (VAR_8[VAR_12].mask & VAR_11) ? VAR_6 : VAR_5;
            if (FUNC_3(VAR_13) != VAR_14)
                FUNC_0(VAR_13, VAR_14);
        }
    }
}
