
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct redisCommand {scalar_t__ calls; scalar_t__ microseconds; } ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_2__ {int commands; } ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_4(void) {
    struct redisCommand *VAR_1;
    dictEntry *VAR_2;
    dictIterator *VAR_3;

    VAR_3 = FUNC_0(VAR_0.commands);
    while((VAR_2 = FUNC_2(VAR_3)) != ((void*)0)) {
        VAR_1 = (struct redisCommand *) FUNC_1(VAR_2);
        VAR_1->microseconds = 0;
        VAR_1->calls = 0;
    }
    FUNC_3(VAR_3);

}
