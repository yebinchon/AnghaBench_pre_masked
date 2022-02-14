
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user ;
typedef int uint64_t ;
struct redisCommand {int flags; int id; } ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_2__ {int orig_commands; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int ) ;
 struct redisCommand* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_2 ;

int FUNC_6(user *VAR_3, unsigned long *VAR_4, unsigned long *VAR_5,
                                const char *VAR_6)
{
    uint64_t VAR_7 = FUNC_0(VAR_6);
    if (!VAR_7) return VAR_0;

    *VAR_4 = *VAR_5 = 0;
    dictIterator *VAR_8 = FUNC_2(VAR_2.orig_commands);
    dictEntry *VAR_9;
    while ((VAR_9 = FUNC_4(VAR_8)) != ((void*)0)) {
        struct redisCommand *VAR_10 = FUNC_3(VAR_9);
        if (VAR_10->flags & VAR_7) {
            if (FUNC_1(VAR_3,VAR_10->id))
                (*VAR_4)++;
            else
                (*VAR_5)++;
        }
    }
    FUNC_5(VAR_8);
    return VAR_1;
}
