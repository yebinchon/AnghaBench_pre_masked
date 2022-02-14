
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sec_mgr; scalar_t__ zone_mgr; scalar_t__ zone_enumerator; } ;
typedef TYPE_1__ secdlg_data ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(secdlg_data *VAR_0)
{
    if (VAR_0->zone_enumerator) {
        FUNC_1(VAR_0->zone_mgr, VAR_0->zone_enumerator);
    }

    if (VAR_0->zone_mgr) {
        FUNC_2(VAR_0->zone_mgr);
    }

    if (VAR_0->sec_mgr) {
        FUNC_0(VAR_0->sec_mgr);
    }
}
