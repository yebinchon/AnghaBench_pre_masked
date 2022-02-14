
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ client; int pattern; } ;
typedef TYPE_1__ pubsubPattern ;


 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1) {
    pubsubPattern *VAR_2 = VAR_0, *VAR_3 = VAR_1;

    return (VAR_2->client == VAR_3->client) &&
           (FUNC_0(VAR_2->pattern,VAR_3->pattern));
}
