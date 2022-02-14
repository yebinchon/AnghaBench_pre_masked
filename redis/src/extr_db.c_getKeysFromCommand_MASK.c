
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redisCommand {int flags; int* (* getkeys_proc ) (struct redisCommand*,int **,int,int*) ;} ;
typedef int robj ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (struct redisCommand*,int **,int,int*) ;
 int* FUNC_1 (struct redisCommand*,int **,int,int*) ;
 int* FUNC_2 (struct redisCommand*,int **,int,int*) ;

int *FUNC_3(struct redisCommand *VAR_2, robj **VAR_3, int VAR_4, int *VAR_5) {
    if (VAR_2->flags & VAR_1) {
        return FUNC_1(VAR_2,VAR_3,VAR_4,VAR_5);
    } else if (!(VAR_2->flags & VAR_0) && VAR_2->getkeys_proc) {
        return VAR_2->getkeys_proc(VAR_2,VAR_3,VAR_4,VAR_5);
    } else {
        return FUNC_0(VAR_2,VAR_3,VAR_4,VAR_5);
    }
}
