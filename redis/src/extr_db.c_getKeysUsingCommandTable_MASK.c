
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redisCommand {int firstkey; int lastkey; int flags; scalar_t__ arity; scalar_t__ keystep; } ;
typedef int robj ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int) ;

int *FUNC_4(struct redisCommand *VAR_1,robj **VAR_2, int VAR_3, int *VAR_4) {
    int VAR_5, VAR_6 = 0, VAR_7, *VAR_8;
    FUNC_0(VAR_2);

    if (VAR_1->firstkey == 0) {
        *VAR_4 = 0;
        return ((void*)0);
    }

    VAR_7 = VAR_1->lastkey;
    if (VAR_7 < 0) VAR_7 = VAR_3+VAR_7;
    VAR_8 = FUNC_3(sizeof(int)*((VAR_7 - VAR_1->firstkey)+1));
    for (VAR_5 = VAR_1->firstkey; VAR_5 <= VAR_7; VAR_5 += VAR_1->keystep) {
        if (VAR_5 >= VAR_3) {






            if (VAR_1->flags & VAR_0 || VAR_1->arity < 0) {
                FUNC_2(VAR_8);
                *VAR_4 = 0;
                return ((void*)0);
            } else {
                FUNC_1("Redis built-in command declared keys positions not matching the arity requirements.");
            }
        }
        VAR_8[VAR_6++] = VAR_5;
    }
    *VAR_4 = VAR_6;
    return VAR_8;
}
