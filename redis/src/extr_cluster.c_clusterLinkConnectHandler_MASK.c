
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ mstime_t ;
typedef int connection ;
struct TYPE_6__ {int flags; int cport; int ip; int name; scalar_t__ ping_sent; } ;
typedef TYPE_1__ clusterNode ;
struct TYPE_7__ {TYPE_1__* node; } ;
typedef TYPE_2__ clusterLink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,char*,int ,int ,int ,...) ;

void FUNC_7(connection *VAR_7) {
    clusterLink *VAR_8 = FUNC_2(VAR_7);
    clusterNode *VAR_9 = VAR_8->node;


    if (FUNC_3(VAR_7) != VAR_3) {
        FUNC_6(VAR_5, "Connection with Node %.40s at %s:%d failed: %s",
                VAR_9->name, VAR_9->ip, VAR_9->cport,
                FUNC_1(VAR_7));
        FUNC_5(VAR_8);
        return;
    }


    FUNC_4(VAR_7, VAR_6);







    mstime_t VAR_10 = VAR_9->ping_sent;
    FUNC_0(VAR_8, VAR_9->flags & VAR_2 ?
            VAR_0 : VAR_1);
    if (VAR_10) {



        VAR_9->ping_sent = VAR_10;
    }





    VAR_9->flags &= ~VAR_2;

    FUNC_6(VAR_4,"Connecting with Node %.40s at %s:%d",
            VAR_9->name, VAR_9->ip, VAR_9->cport);
}
