
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int port; int ip; } ;
typedef TYPE_1__ sentinelAddr ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;

sentinelAddr *FUNC_2(sentinelAddr *VAR_0) {
    sentinelAddr *VAR_1;

    VAR_1 = FUNC_1(sizeof(*VAR_1));
    VAR_1->ip = FUNC_0(VAR_0->ip);
    VAR_1->port = VAR_0->port;
    return VAR_1;
}
