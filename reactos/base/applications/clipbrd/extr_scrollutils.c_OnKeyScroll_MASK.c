
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {int nPageY; } ;
typedef TYPE_1__* LPSCROLLSTATE ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
void FUNC_3(HWND VAR_13, WPARAM VAR_14, LPARAM VAR_15, LPSCROLLSTATE VAR_16)
{

    switch (VAR_14)
    {
        case 128:
            FUNC_2(VAR_13, VAR_11, FUNC_1(VAR_6, 0), 5, VAR_16);
            break;

        case 135:
            FUNC_2(VAR_13, VAR_11, FUNC_1(VAR_3, 0), 5, VAR_16);
            break;

        case 132:
            FUNC_2(VAR_13, VAR_1, FUNC_1(VAR_4, 0), 5, VAR_16);
            break;

        case 129:
            FUNC_2(VAR_13, VAR_1, FUNC_1(VAR_5, 0), 5, VAR_16);
            break;

        case 130:
            FUNC_2(VAR_13, VAR_11, FUNC_1(VAR_8, 0), VAR_16->nPageY, VAR_16);
            break;

        case 131:
            FUNC_2(VAR_13, VAR_11, FUNC_1(VAR_7, 0), VAR_16->nPageY, VAR_16);
            break;

        case 133:
        {
            FUNC_2(VAR_13, VAR_1, FUNC_1(VAR_2, 0), 0, VAR_16);
            if (FUNC_0(VAR_12) & 0x8000)
                FUNC_2(VAR_13, VAR_11, FUNC_1(VAR_10, 0), 0, VAR_16);
            break;
        }

        case 134:
        {
            FUNC_2(VAR_13, VAR_1, FUNC_1(VAR_9, 0), 0, VAR_16);
            if (FUNC_0(VAR_12) & 0x8000)
                FUNC_2(VAR_13, VAR_11, FUNC_1(VAR_0, 0), 0, VAR_16);
            break;
        }

        default:
            break;
    }
}
