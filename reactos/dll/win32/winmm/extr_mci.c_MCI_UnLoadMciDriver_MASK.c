
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dwPrivate; struct TYPE_5__* lpstrElementName; struct TYPE_5__* lpstrAlias; struct TYPE_5__* lpstrDeviceType; struct TYPE_5__* lpNext; int hDriver; } ;
typedef TYPE_1__* LPWINE_MCIDRIVER ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_6(LPWINE_MCIDRIVER VAR_3)
{
    LPWINE_MCIDRIVER* VAR_4;

    if (!VAR_3)
 return VAR_1;

    FUNC_0(VAR_3->hDriver, 0, 0);

    if (VAR_3->dwPrivate != 0)
 FUNC_5("Unloading mci driver with non nul dwPrivate field\n");

    FUNC_1(&VAR_2);
    for (VAR_4 = &VAR_0; *VAR_4; VAR_4 = &(*VAR_4)->lpNext) {
 if (*VAR_4 == VAR_3) {
     *VAR_4 = VAR_3->lpNext;
     break;
 }
    }
    FUNC_4(&VAR_2);

    FUNC_3(FUNC_2(), 0, VAR_3->lpstrDeviceType);
    FUNC_3(FUNC_2(), 0, VAR_3->lpstrAlias);
    FUNC_3(FUNC_2(), 0, VAR_3->lpstrElementName);

    FUNC_3(FUNC_2(), 0, VAR_3);
    return VAR_1;
}
