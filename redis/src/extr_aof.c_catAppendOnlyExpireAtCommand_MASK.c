
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct redisCommand {scalar_t__ proc; } ;
typedef int sds ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_1__ robj ;


 int FUNC_0 (int ,int,TYPE_1__**) ;
 TYPE_1__* FUNC_1 (char*,int) ;
 TYPE_1__* FUNC_2 (long long) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 long long FUNC_6 (int ,int *,int) ;

sds FUNC_7(sds VAR_5, struct redisCommand *VAR_6, robj *VAR_7, robj *VAR_8) {
    long long VAR_9;
    robj *VAR_10[3];


    VAR_8 = FUNC_4(VAR_8);
    VAR_9 = FUNC_6(VAR_8->ptr,((void*)0),10);

    if (VAR_6->proc == VAR_0 || VAR_6->proc == VAR_4 ||
        VAR_6->proc == VAR_1)
    {
        VAR_9 *= 1000;
    }

    if (VAR_6->proc == VAR_0 || VAR_6->proc == VAR_2 ||
        VAR_6->proc == VAR_4 || VAR_6->proc == VAR_3)
    {
        VAR_9 += FUNC_5();
    }
    FUNC_3(VAR_8);

    VAR_10[0] = FUNC_1("PEXPIREAT",9);
    VAR_10[1] = VAR_7;
    VAR_10[2] = FUNC_2(VAR_9);
    VAR_5 = FUNC_0(VAR_5, 3, VAR_10);
    FUNC_3(VAR_10[0]);
    FUNC_3(VAR_10[2]);
    return VAR_5;
}
