
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int connection ;
typedef int cip ;
typedef void aeEventLoop ;
struct TYPE_2__ {scalar_t__ tls_cluster; int neterr; scalar_t__ loading; int * masterhost; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int,char*,int,int*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;
 int * FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_9 (int ,char*,char*,...) ;

void FUNC_10(aeEventLoop *VAR_9, int VAR_10, void *VAR_11, int VAR_12) {
    int VAR_13, VAR_14;
    int VAR_15 = VAR_4;
    char VAR_16[VAR_5];
    FUNC_0(VAR_9);
    FUNC_0(VAR_12);
    FUNC_0(VAR_11);



    if (VAR_8.masterhost == ((void*)0) && VAR_8.loading) return;

    while(VAR_15--) {
        VAR_14 = FUNC_1(VAR_8.neterr, VAR_10, VAR_16, sizeof(VAR_16), &VAR_13);
        if (VAR_14 == VAR_0) {
            if (VAR_7 != VAR_2)
                FUNC_9(VAR_3,
                    "Error accepting cluster node: %s", VAR_8.neterr);
            return;
        }

        connection *VAR_17 = VAR_8.tls_cluster ? FUNC_5(VAR_14,1) : FUNC_4(VAR_14);
        FUNC_8(VAR_17);
        FUNC_6(VAR_17);


        FUNC_9(VAR_3,"Accepting cluster node connection from %s:%d", VAR_16, VAR_13);




        if (FUNC_2(VAR_17, VAR_6) == VAR_1) {
            FUNC_9(VAR_3,
                    "Error accepting cluster node connection: %s",
                    FUNC_7(VAR_17));
            FUNC_3(VAR_17);
            return;
        }
    }
}
