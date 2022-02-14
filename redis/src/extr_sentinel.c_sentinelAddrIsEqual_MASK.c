
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ port; int ip; } ;
typedef TYPE_1__ sentinelAddr ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(sentinelAddr *VAR_0, sentinelAddr *VAR_1) {
    return VAR_0->port == VAR_1->port && !FUNC_0(VAR_0->ip,VAR_1->ip);
}
