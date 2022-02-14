
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ wDeviceID; struct TYPE_4__* lpNext; } ;
typedef TYPE_1__* LPWINE_MCIDRIVER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static LPWINE_MCIDRIVER FUNC_2(UINT VAR_2)
{
    LPWINE_MCIDRIVER VAR_3 = 0;

    FUNC_0(&VAR_1);
    for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->lpNext) {
 if (VAR_3->wDeviceID == VAR_2)
     break;
    }
    FUNC_1(&VAR_1);
    return VAR_3;
}
