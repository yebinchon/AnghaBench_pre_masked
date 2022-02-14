
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_8__ {long long client_tracking_redirection; int resp; int flags; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,long long) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int * FUNC_4 (long long) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (long long) ;

void FUNC_7(client *VAR_2, long long VAR_3) {
    int VAR_4 = 0;
    if (VAR_2->client_tracking_redirection) {
        client *VAR_5 = FUNC_6(VAR_2->client_tracking_redirection);
        if (!VAR_5) {



            if (VAR_2->resp > 2) {
                FUNC_3(VAR_2,3);
                FUNC_0(VAR_2,"tracking-redir-broken",21);
                FUNC_1(VAR_2,VAR_2->client_tracking_redirection);
            }
            return;
        }
        VAR_2 = VAR_5;
        VAR_4 = 1;
    }





    if (VAR_2->resp > 2) {
        FUNC_3(VAR_2,2);
        FUNC_0(VAR_2,"invalidate",10);
        FUNC_1(VAR_2,VAR_3);
    } else if (VAR_4 && VAR_2->flags & VAR_0) {
        robj *VAR_6 = FUNC_4(VAR_3);
        FUNC_2(VAR_2,VAR_1,VAR_6);
        FUNC_5(VAR_6);
    }
}
