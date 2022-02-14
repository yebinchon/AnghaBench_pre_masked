
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_mask {scalar_t__ startup; scalar_t__ postlogin; scalar_t__ prelogin; int ntonly; scalar_t__ preboot; int w9xonly; } ;
typedef int gen_path ;
typedef char TCHAR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 struct op_mask VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*,int ,int *,int ,int ,int *,int *,scalar_t__*) ;
 struct op_mask VAR_13 ;
 struct op_mask VAR_14 ;
 int FUNC_6 (int ,int *) ;
 int VAR_15 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*,...) ;
 int * VAR_17 ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (char*,char*,int ) ;

int FUNC_13(int VAR_18, const char *VAR_19[])
{
    struct op_mask VAR_20;

    TCHAR VAR_21[VAR_6];
    DWORD VAR_22;
    HKEY VAR_23, VAR_24;
    HRESULT VAR_25;

    VAR_22 = FUNC_2(VAR_21, sizeof(VAR_21));

    if (VAR_22==0)
    {
  FUNC_10("Couldn't get the windows directory - error %ld\n",
   FUNC_0());

  return 100;
    }

    if (!FUNC_8(VAR_21))
    {
        FUNC_12(L"Cannot set the dir to %s (%ld)\n", VAR_21, FUNC_0());

        return 100;
    }

    VAR_25 = FUNC_6(VAR_5, &VAR_23);
    if (FUNC_7(VAR_25))
    {
        LONG VAR_26;
        DWORD VAR_27;

        VAR_26 = FUNC_5(VAR_23, L"StartupHasBeenRun", 0, ((void*)0), VAR_8, VAR_5, ((void*)0), &VAR_24, &VAR_27);
        FUNC_4(VAR_23);
        if (VAR_26 == VAR_1)
        {
            FUNC_4(VAR_24);
            if (VAR_27 == VAR_7)
            {

                return 0;
            }
        }
    }

    if (VAR_18 > 1)
    {
        switch(VAR_19[1][0])
        {
        case 'r':
            VAR_20 = VAR_14;
            break;
        case 's':
            VAR_20 = VAR_13;
            break;
        default:
            VAR_20 = VAR_0;
            break;
        }
    } else
        VAR_20 = VAR_0;


    if(FUNC_1(VAR_15)) VAR_20.startup = VAR_2;



    VAR_22 = VAR_16;
    if (VAR_22 && !VAR_20.ntonly && VAR_20.preboot)
         VAR_22 = FUNC_11();
    if (VAR_22 && !VAR_20.w9xonly && VAR_20.preboot)
         VAR_22 = FUNC_9();
    if (VAR_22 && !VAR_20.ntonly && VAR_20.prelogin)
         VAR_22 = FUNC_3(VAR_4, VAR_17[VAR_12], VAR_16, VAR_2);
    if (VAR_22 && !VAR_20.ntonly && VAR_20.prelogin && VAR_20.startup)
         VAR_22 = FUNC_3(VAR_4, VAR_17[VAR_11], VAR_2, VAR_2);
    if (VAR_22 && VAR_20.postlogin)
         VAR_22 = FUNC_3(VAR_4, VAR_17[VAR_10], VAR_16, VAR_16);
    if (VAR_22 && VAR_20.postlogin && VAR_20.startup)
         VAR_22 = FUNC_3(VAR_4, VAR_17[VAR_9], VAR_2, VAR_2);
    if (VAR_22 && VAR_20.postlogin && VAR_20.startup)
         VAR_22 = FUNC_3(VAR_3, VAR_17[VAR_9], VAR_2, VAR_2);
    if (VAR_22 && VAR_20.postlogin && VAR_20.startup)
         VAR_22 = FUNC_3(VAR_3, VAR_17[VAR_10], VAR_16, VAR_2);

    FUNC_10("Operation done\n");

    return VAR_22 ? 0 : 101;
}
