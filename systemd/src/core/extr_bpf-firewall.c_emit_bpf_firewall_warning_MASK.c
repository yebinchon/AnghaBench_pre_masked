
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Unit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,char*,char*) ;

void FUNC_3(Unit *VAR_4) {
        static bool VAR_5 = 0;

        if (!VAR_5) {
                bool VAR_6 = VAR_3 == -VAR_0 && FUNC_0();

                FUNC_2(VAR_4, VAR_6 ? VAR_1 : VAR_2, VAR_3,
                              "unit configures an IP firewall, but %s.\n"
                              "(This warning is only shown for the first unit using IP firewalling.)",
                              FUNC_1() != 0 ? "not running as root" :
                                              "the local system does not support BPF/cgroup firewalling");
                VAR_5 = 1;
        }
}
