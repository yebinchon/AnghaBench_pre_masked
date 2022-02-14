
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct redisCommand {int dummy; } ;
struct TYPE_3__ {char* ptr; } ;
typedef TYPE_1__ robj ;


 int FUNC_0 (struct redisCommand*) ;
 int FUNC_1 (char*,char*) ;
 int* FUNC_2 (int) ;

int *FUNC_3(struct redisCommand *VAR_0, robj **VAR_1, int VAR_2, int *VAR_3) {
    int VAR_4, VAR_5, *VAR_6;
    FUNC_0(VAR_0);


    int VAR_7 = -1;
    for (VAR_4 = 5; VAR_4 < VAR_2; VAR_4++) {
        char *VAR_8 = VAR_1[VAR_4]->ptr;




        if ((!FUNC_1(VAR_8, "store") || !FUNC_1(VAR_8, "storedist")) && ((VAR_4+1) < VAR_2)) {
            VAR_7 = VAR_4+1;
            VAR_4++;
        }
    }
    VAR_5 = 1 + (VAR_7 == -1 ? 0 : 1);





    VAR_6 = FUNC_2(sizeof(int) * VAR_5);


    VAR_6[0] = 1;
    if(VAR_5 > 1) {
         VAR_6[1] = VAR_7;
    }
    *VAR_3 = VAR_5;
    return VAR_6;
}
