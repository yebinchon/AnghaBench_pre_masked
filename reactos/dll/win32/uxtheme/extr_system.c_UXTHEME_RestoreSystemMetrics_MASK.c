
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct BackupSysParam {scalar_t__ spiGet; int spiSet; int keyName; } ;
typedef int ncm ;
typedef int iconTitleFont ;
typedef int colorStr ;
typedef int NONCLIENTMETRICSW ;
typedef int LPBYTE ;
typedef int LOGFONTW ;
typedef int HKEY ;
typedef int DWORD ;
typedef int COLORREF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int*,int ,int*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int*,int ,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,int*,int *) ;
 int * VAR_7 ;
 int FUNC_6 (int ,int,int *,int ) ;
 int * FUNC_7 (int) ;
 struct BackupSysParam* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (char*,char*,int*,int*,int*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_9(void)
{
    HKEY VAR_13;
    const struct BackupSysParam* VAR_14 = VAR_8;

    if (FUNC_2 (VAR_1, VAR_12,
                       0, VAR_2, &VAR_13) == VAR_0)
    {
        HKEY VAR_15;


        if (FUNC_2 (VAR_13, VAR_11,
                           0, VAR_2, &VAR_15) == VAR_0)
        {
            int VAR_16;
            COLORREF VAR_17[VAR_3];
            int VAR_18[VAR_3];
            int VAR_19 = 0;

            for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
            {
                DWORD VAR_20;
                char VAR_21[13];
                DWORD VAR_22 = sizeof(VAR_21);

                if (FUNC_3 (VAR_15, VAR_7[VAR_16], 0,
                    &VAR_20, (LPBYTE) VAR_21, &VAR_22) == VAR_0)
                {
                    int VAR_23, VAR_24, VAR_25;
                    if (FUNC_8 (VAR_21, "%d %d %d", &VAR_23, &VAR_24, &VAR_25) == 3)
                    {
                        VAR_18[VAR_19] = VAR_16;
                        VAR_17[VAR_19] = FUNC_0(VAR_23, VAR_24, VAR_25);
                        VAR_19++;
                    }
                }
            }
            FUNC_1 (VAR_15);

            FUNC_5 (VAR_19, VAR_18, VAR_17);
        }


        while (VAR_14->spiGet >= 0)
        {
            DWORD VAR_26;
            DWORD VAR_27 = sizeof(VAR_26);
            DWORD VAR_28;

            if (FUNC_4 (VAR_13, VAR_14->keyName, 0,
                &VAR_28, (LPBYTE)&VAR_26, &VAR_27) == VAR_0)
            {
                FUNC_6 (VAR_14->spiSet, 0, FUNC_7(VAR_26), VAR_4);
            }

            VAR_14++;
        }


        {
            NONCLIENTMETRICSW VAR_29;
            LOGFONTW VAR_30;
            DWORD VAR_31 = sizeof(VAR_29);
            DWORD VAR_32;

     if (FUNC_4 (VAR_13, VAR_10, 0,
  &VAR_32, (LPBYTE)&VAR_29, &VAR_31) == VAR_0)
     {
  FUNC_6 (VAR_6,
                    VAR_31, &VAR_29, VAR_4);
     }

            VAR_31 = sizeof(VAR_30);

     if (FUNC_4 (VAR_13, VAR_9, 0,
  &VAR_32, (LPBYTE)&VAR_30, &VAR_31) == VAR_0)
     {
  FUNC_6 (VAR_5,
                    VAR_31, &VAR_30, VAR_4);
     }
 }

        FUNC_1 (VAR_13);
    }
}
