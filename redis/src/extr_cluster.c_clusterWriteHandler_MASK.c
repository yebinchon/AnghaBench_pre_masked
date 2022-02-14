
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
typedef int connection ;
struct TYPE_4__ {int conn; int sndbuf; } ;
typedef TYPE_1__ clusterLink ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,char*,char*) ;

void FUNC_8(connection *VAR_1) {
    clusterLink *VAR_2 = FUNC_1(VAR_1);
    ssize_t VAR_3;

    VAR_3 = FUNC_3(VAR_1, VAR_2->sndbuf, FUNC_5(VAR_2->sndbuf));
    if (VAR_3 <= 0) {
        FUNC_7(VAR_0,"I/O error writing to node link: %s",
            (VAR_3 == -1) ? FUNC_0(VAR_1) : "short write");
        FUNC_4(VAR_2);
        return;
    }
    FUNC_6(VAR_2->sndbuf,VAR_3,-1);
    if (FUNC_5(VAR_2->sndbuf) == 0)
        FUNC_2(VAR_2->conn, ((void*)0));
}
