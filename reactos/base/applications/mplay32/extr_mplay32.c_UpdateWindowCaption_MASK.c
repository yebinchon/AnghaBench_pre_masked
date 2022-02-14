
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szNewTitle ;
typedef int TCHAR ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int VAR_8 ;







 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int,int ,int *,int ,int *) ;
 int FUNC_5 (char*) ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

void FUNC_6(HWND VAR_13)
{
    TCHAR VAR_14[VAR_8 + 3 + 256];
    TCHAR VAR_15[128];

    if (VAR_12 == 0)
    {
        FUNC_3(VAR_13, VAR_10);
        return;
    }

    switch (FUNC_1(VAR_13))
    {
        case 132:
        {
            FUNC_2(VAR_9, VAR_2, VAR_15, FUNC_0(VAR_15));
            break;
        }

        case 128:
        {
            FUNC_2(VAR_9, VAR_6, VAR_15, FUNC_0(VAR_15));
            break;
        }

        case 131:
        {
            FUNC_2(VAR_9, VAR_3, VAR_15, FUNC_0(VAR_15));
            break;
        }

        case 133:
        {
            FUNC_2(VAR_9, VAR_1, VAR_15, FUNC_0(VAR_15));
            break;
        }

        case 130:
        {
            FUNC_2(VAR_9, VAR_4, VAR_15, FUNC_0(VAR_15));
            break;
        }

        case 129:
        {
            FUNC_2(VAR_9, VAR_5, VAR_15, FUNC_0(VAR_15));
            break;
        }

        case 134:
        {
            FUNC_2(VAR_9, VAR_0, VAR_15, FUNC_0(VAR_15));
            break;
        }

        default:
        {
            FUNC_2(VAR_9, VAR_7, VAR_15, FUNC_0(VAR_15));
        }
    }

    FUNC_4(VAR_14, sizeof(VAR_14), FUNC_5("%s - %s (%s)"), VAR_10, VAR_11, VAR_15);
    FUNC_3(VAR_13, VAR_14);
}
