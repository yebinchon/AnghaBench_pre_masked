
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int value ;
struct BackupSysParam {scalar_t__ spiGet; int keyName; } ;
typedef int ncm ;
typedef int iconTitleFont ;
struct TYPE_6__ {int cbSize; } ;
typedef TYPE_1__ NONCLIENTMETRICSW ;
typedef int LPBYTE ;
typedef TYPE_1__ LOGFONTW ;
typedef int HKEY ;
typedef TYPE_1__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__,int,TYPE_1__*,int ) ;
 struct BackupSysParam* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_6(void)
{
    HKEY VAR_11;
    const struct BackupSysParam* VAR_12 = VAR_7;

    if (FUNC_1( VAR_1, VAR_10,
                         0, 0, 0, VAR_2,
                         0, &VAR_11, 0) == VAR_0)
    {
        NONCLIENTMETRICSW VAR_13;
        LOGFONTW VAR_14;


        FUNC_5 (VAR_11);


        while (VAR_12->spiGet >= 0)
        {
            DWORD VAR_15;

            FUNC_3 (VAR_12->spiGet, 0, &VAR_15, 0);
            FUNC_2 (VAR_11, VAR_12->keyName, 0, VAR_4,
                (LPBYTE)&VAR_15, sizeof (VAR_15));

            VAR_12++;
        }


        FUNC_4 (&VAR_13, 0, sizeof (VAR_13));
        VAR_13.cbSize = sizeof (VAR_13);
        FUNC_3 (VAR_6, sizeof (VAR_13), &VAR_13, 0);
        FUNC_2 (VAR_11, VAR_9, 0, VAR_3, (LPBYTE)&VAR_13,
            sizeof (VAR_13));
 FUNC_4 (&VAR_14, 0, sizeof (VAR_14));
 FUNC_3 (VAR_5, sizeof (VAR_14),
     &VAR_14, 0);
 FUNC_2 (VAR_11, VAR_8, 0, VAR_3,
     (LPBYTE)&VAR_14, sizeof (VAR_14));

        FUNC_0 (VAR_11);
    }
}
