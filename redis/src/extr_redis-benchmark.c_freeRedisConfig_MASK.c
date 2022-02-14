
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ appendonly; scalar_t__ save; } ;
typedef TYPE_1__ redisConfig ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(redisConfig *VAR_0) {
    if (VAR_0->save) FUNC_0(VAR_0->save);
    if (VAR_0->appendonly) FUNC_0(VAR_0->appendonly);
    FUNC_1(VAR_0);
}
