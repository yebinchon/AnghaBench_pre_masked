
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(char *VAR_9) {
    int VAR_10 = FUNC_2(VAR_9,VAR_7|VAR_6,0644);
    if (VAR_10 == -1) {
        FUNC_3(VAR_3,
            "Can't open %s in order to acquire a lock: %s",
            VAR_9, FUNC_4(VAR_8));
        return VAR_0;
    }

    if (FUNC_1(VAR_10,VAR_4|VAR_5) == -1) {
        if (VAR_8 == VAR_2) {
            FUNC_3(VAR_3,
                 "Sorry, the cluster configuration file %s is already used "
                 "by a different Redis Cluster node. Please make sure that "
                 "different nodes use different cluster configuration "
                 "files.", VAR_9);
        } else {
            FUNC_3(VAR_3,
                "Impossible to lock %s: %s", VAR_9, FUNC_4(VAR_8));
        }
        FUNC_0(VAR_10);
        return VAR_0;
    }




    return VAR_1;
}
