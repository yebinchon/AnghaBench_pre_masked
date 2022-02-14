
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bindaddr_count; char** bindaddr; int neterr; int tcp_backlog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int,char*,int ) ;
 int FUNC_2 (int ,int,char*,int ) ;
 scalar_t__ VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (char*,char) ;

int FUNC_5(int VAR_12, int *VAR_13, int *VAR_14) {
    int VAR_15;



    if (VAR_11.bindaddr_count == 0) VAR_11.bindaddr[0] = ((void*)0);
    for (VAR_15 = 0; VAR_15 < VAR_11.bindaddr_count || VAR_15 == 0; VAR_15++) {
        if (VAR_11.bindaddr[VAR_15] == ((void*)0)) {
            int VAR_16 = 0;


            VAR_13[*VAR_14] = FUNC_1(VAR_11.neterr,VAR_12,((void*)0),
                VAR_11.tcp_backlog);
            if (VAR_13[*VAR_14] != VAR_0) {
                FUNC_0(((void*)0),VAR_13[*VAR_14]);
                (*VAR_14)++;
            } else if (VAR_10 == VAR_4) {
                VAR_16++;
                FUNC_3(VAR_9,"Not listening to IPv6: unsupported");
            }

            if (*VAR_14 == 1 || VAR_16) {

                VAR_13[*VAR_14] = FUNC_2(VAR_11.neterr,VAR_12,((void*)0),
                    VAR_11.tcp_backlog);
                if (VAR_13[*VAR_14] != VAR_0) {
                    FUNC_0(((void*)0),VAR_13[*VAR_14]);
                    (*VAR_14)++;
                } else if (VAR_10 == VAR_4) {
                    VAR_16++;
                    FUNC_3(VAR_9,"Not listening to IPv4: unsupported");
                }
            }



            if (*VAR_14 + VAR_16 == 2) break;
        } else if (FUNC_4(VAR_11.bindaddr[VAR_15],':')) {

            VAR_13[*VAR_14] = FUNC_1(VAR_11.neterr,VAR_12,VAR_11.bindaddr[VAR_15],
                VAR_11.tcp_backlog);
        } else {

            VAR_13[*VAR_14] = FUNC_2(VAR_11.neterr,VAR_12,VAR_11.bindaddr[VAR_15],
                VAR_11.tcp_backlog);
        }
        if (VAR_13[*VAR_14] == VAR_0) {
            FUNC_3(VAR_9,
                "Could not create server TCP listening socket %s:%d: %s",
                VAR_11.bindaddr[VAR_15] ? VAR_11.bindaddr[VAR_15] : "*",
                VAR_12, VAR_11.neterr);
                if (VAR_10 == VAR_5 || VAR_10 == VAR_7 ||
                    VAR_10 == VAR_8 || VAR_10 == VAR_6 ||
                    VAR_10 == VAR_4 || VAR_10 == VAR_3)
                    continue;
            return VAR_1;
        }
        FUNC_0(((void*)0),VAR_13[*VAR_14]);
        (*VAR_14)++;
    }
    return VAR_2;
}
