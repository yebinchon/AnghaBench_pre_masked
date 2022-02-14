
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct redisCommand {int flags; } ;
typedef int client ;
struct TYPE_2__ {int flag; int name; } ;


 TYPE_1__* VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,void*,int) ;

void FUNC_3(client *VAR_1, struct redisCommand *VAR_2) {
    int VAR_3 = 0;
    void *VAR_4 = FUNC_0(VAR_1);
    for (int VAR_5 = 0; VAR_0[VAR_5].flag != 0; VAR_5++) {
        if (VAR_2->flags & VAR_0[VAR_5].flag) {
            FUNC_1(VAR_1, "@%s", VAR_0[VAR_5].name);
            VAR_3++;
        }
    }
    FUNC_2(VAR_1, VAR_4, VAR_3);
}
