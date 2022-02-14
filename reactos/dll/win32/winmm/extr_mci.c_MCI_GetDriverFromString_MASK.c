
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int wDeviceID; scalar_t__ lpstrAlias; scalar_t__ lpstrDeviceType; scalar_t__ lpstrElementName; struct TYPE_3__* lpNext; } ;
typedef TYPE_1__* LPWINE_MCIDRIVER ;
typedef scalar_t__ LPCWSTR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static UINT FUNC_4(LPCWSTR VAR_4)
{
    LPWINE_MCIDRIVER VAR_5;
    UINT VAR_6 = 0;

    if (!VAR_4)
 return 0;

    if (!FUNC_3(VAR_4, VAR_3))
 return VAR_0;

    FUNC_0(&VAR_2);
    for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->lpNext) {
 if (VAR_5->lpstrElementName && FUNC_2(VAR_5->lpstrElementName, VAR_4) == 0) {
     VAR_6 = VAR_5->wDeviceID;
     break;
 }
 if (VAR_5->lpstrDeviceType && FUNC_3(VAR_5->lpstrDeviceType, VAR_4) == 0) {
     VAR_6 = VAR_5->wDeviceID;
     break;
 }
 if (VAR_5->lpstrAlias && FUNC_3(VAR_5->lpstrAlias, VAR_4) == 0) {
     VAR_6 = VAR_5->wDeviceID;
     break;
 }
    }
    FUNC_1(&VAR_2);

    return VAR_6;
}
