
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* node; int rcvbuf; int sndbuf; int * conn; } ;
typedef TYPE_2__ clusterLink ;
struct TYPE_5__ {int * link; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(clusterLink *VAR_0) {
    if (VAR_0->conn) {
        FUNC_0(VAR_0->conn);
        VAR_0->conn = ((void*)0);
    }
    FUNC_1(VAR_0->sndbuf);
    FUNC_1(VAR_0->rcvbuf);
    if (VAR_0->node)
        VAR_0->node->link = ((void*)0);
    FUNC_2(VAR_0);
}
