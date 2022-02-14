
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_zones; int zone_enumerator; int zone_mgr; int sec_mgr; } ;
typedef TYPE_1__ secdlg_data ;
typedef int HRESULT ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,int *,int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static HRESULT FUNC_4(secdlg_data * VAR_0)
{
    HRESULT VAR_1;

    VAR_1 = FUNC_0(((void*)0), &VAR_0->sec_mgr, 0);
    if (FUNC_3(VAR_1)) {
        VAR_1 = FUNC_1(((void*)0), &VAR_0->zone_mgr, 0);
        if (FUNC_3(VAR_1)) {
            VAR_1 = FUNC_2(VAR_0->zone_mgr, &VAR_0->zone_enumerator, &VAR_0->num_zones, 0);
        }
    }
    return VAR_1;
}
