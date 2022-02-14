
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cluster_reissue_command; scalar_t__ cluster_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,char**,long) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_3(int VAR_4, char **VAR_5, long VAR_6) {
    while (1) {
        VAR_3.cluster_reissue_command = 0;
        if (FUNC_2(VAR_4,VAR_5,VAR_6) != VAR_2) {
            FUNC_0(VAR_0);



            if (FUNC_2(VAR_4,VAR_5,VAR_6) != VAR_2) {
                FUNC_1();
                return VAR_1;
            }
        }

        if (VAR_3.cluster_mode && VAR_3.cluster_reissue_command) {
            FUNC_0(VAR_0);
        } else {
            break;
        }
    }
    return VAR_2;
}
