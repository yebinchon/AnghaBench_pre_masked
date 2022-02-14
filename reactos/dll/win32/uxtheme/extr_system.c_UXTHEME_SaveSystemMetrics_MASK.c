
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct BackupSysParam {scalar_t__ spiGet; scalar_t__ spiSet; } ;
typedef int ncm ;
typedef int iconTitleFont ;
struct TYPE_8__ {int cbSize; } ;
typedef TYPE_1__ NONCLIENTMETRICSW ;
typedef TYPE_1__ LOGFONTW ;
typedef TYPE_1__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,int,TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__) ;
 struct BackupSysParam* VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    const struct BackupSysParam* VAR_8 = VAR_7;
    NONCLIENTMETRICSW VAR_9;
    LOGFONTW VAR_10;

    FUNC_3 (VAR_0);

    while (VAR_8->spiGet >= 0)
    {
        DWORD VAR_11;

        FUNC_0 (VAR_8->spiGet, 0, &VAR_11, 0);
        FUNC_0 (VAR_8->spiSet, 0, FUNC_1(VAR_11), VAR_2);
        VAR_8++;
    }

    FUNC_2 (&VAR_9, 0, sizeof (VAR_9));
    VAR_9.cbSize = sizeof (VAR_9);
    FUNC_0 (VAR_4, sizeof (VAR_9), &VAR_9, 0);
    FUNC_0 (VAR_6, sizeof (VAR_9), &VAR_9,
        VAR_2);

    FUNC_2 (&VAR_10, 0, sizeof (VAR_10));
    FUNC_0 (VAR_3, sizeof (VAR_10),
        &VAR_10, 0);
    FUNC_0 (VAR_5, sizeof (VAR_10),
        &VAR_10, VAR_2 | VAR_1);
}
