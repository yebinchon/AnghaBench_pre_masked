
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct redisCommand {int dummy; } ;
struct TYPE_3__ {int ptr; } ;
typedef TYPE_1__ robj ;


 int FUNC_0 (struct redisCommand*) ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (int) ;

int *FUNC_3(struct redisCommand *VAR_0, robj **VAR_1, int VAR_2, int *VAR_3) {
    int VAR_4, VAR_5, *VAR_6;
    FUNC_0(VAR_0);

    VAR_5 = FUNC_1(VAR_1[2]->ptr);


    if (VAR_5 <= 0 || VAR_5 > (VAR_2-3)) {
        *VAR_3 = 0;
        return ((void*)0);
    }

    VAR_6 = FUNC_2(sizeof(int)*VAR_5);
    *VAR_3 = VAR_5;


    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) VAR_6[VAR_4] = 3+VAR_4;

    return VAR_6;
}
