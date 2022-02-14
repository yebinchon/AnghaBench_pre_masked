
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
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 (int ) ;
 struct redisCommand* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__ VAR_3 ;

int FUNC_7(user *VAR_4, const char *VAR_5, int VAR_6) {
    uint64_t VAR_7 = FUNC_0(VAR_5);
    if (!VAR_7) return VAR_1;
    dictIterator *VAR_8 = FUNC_3(VAR_3.orig_commands);
    dictEntry *VAR_9;
    while ((VAR_9 = FUNC_5(VAR_8)) != ((void*)0)) {
        struct redisCommand *VAR_10 = FUNC_4(VAR_9);
        if (VAR_10->flags & VAR_0) continue;
        if (VAR_10->flags & VAR_7) {
            FUNC_2(VAR_4,VAR_10->id,VAR_6);
            FUNC_1(VAR_4,VAR_10->id);
        }
    }
    FUNC_6(VAR_8);
    return VAR_2;
}
