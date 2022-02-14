
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t cmd_slot; TYPE_3__* cmd_sock; TYPE_1__** master; } ;
typedef TYPE_2__ redisCluster ;
struct TYPE_11__ {scalar_t__ readonly; } ;
struct TYPE_9__ {scalar_t__ slaves; } ;
typedef TYPE_3__ RedisSock ;


 scalar_t__ FUNC_0 (TYPE_3__*,char const*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,size_t,int) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (int*,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(redisCluster *VAR_0, const char *VAR_1, size_t VAR_2,
                              int VAR_3)
{
    int VAR_4, VAR_5 = 1, *VAR_6;
    RedisSock *VAR_7;


    if (VAR_0->master[VAR_0->cmd_slot]->slaves) {
        VAR_5 += FUNC_6(VAR_0->master[VAR_0->cmd_slot]->slaves);
    }


    VAR_6 = FUNC_4(sizeof(int)*VAR_5);



    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) VAR_6[VAR_4] = VAR_4;
    FUNC_5(VAR_6, VAR_5);


    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {

        if (VAR_3 && VAR_6[VAR_4] == 0)
           continue;


        VAR_7 = FUNC_2(VAR_0, VAR_0->cmd_slot, VAR_6[VAR_4]);
        if (!VAR_7) continue;



        if (VAR_6[VAR_4] == 0 || VAR_7->readonly ||
            FUNC_1(VAR_7) == 0)
        {

            if (FUNC_0(VAR_7, VAR_1, VAR_2)) {
                VAR_0->cmd_sock = VAR_7;
                FUNC_3(VAR_6);
                return 0;
            }
        }
    }


    FUNC_3(VAR_6);


    return -1;
}
