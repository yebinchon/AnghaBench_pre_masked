
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int robj ;
struct TYPE_12__ {int id; } ;
typedef TYPE_1__ redisDb ;
struct TYPE_13__ {TYPE_8__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_16__ {int id; } ;
struct TYPE_15__ {int lpushCommand; int rpopCommand; int lpopCommand; } ;
struct TYPE_14__ {int * lpush; int * rpop; int * lpop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int ) ;
 int * FUNC_3 (TYPE_8__*,int *) ;
 int FUNC_4 (int ,char*,int *,int ) ;
 int FUNC_5 (int ,int ,int **,int,int) ;
 int FUNC_6 (TYPE_2__*,int *,int *,int *) ;
 TYPE_4__ VAR_7 ;
 TYPE_3__ VAR_8 ;

int FUNC_7(client *VAR_9, robj *VAR_10, robj *VAR_11, redisDb *VAR_12, robj *VAR_13, int VAR_14)
{
    robj *VAR_15[3];

    if (VAR_11 == ((void*)0)) {

        VAR_15[0] = (VAR_14 == VAR_2) ? VAR_8.lpop :
                                          VAR_8.rpop;
        VAR_15[1] = VAR_10;
        FUNC_5((VAR_14 == VAR_2) ?
            VAR_7.lpopCommand : VAR_7.rpopCommand,
            VAR_12->id,VAR_15,2,VAR_5|VAR_6);


        FUNC_0(VAR_9,2);
        FUNC_1(VAR_9,VAR_10);
        FUNC_1(VAR_9,VAR_13);


        char *VAR_16 = (VAR_14 == VAR_2) ? "lpop" : "rpop";
        FUNC_4(VAR_3,VAR_16,VAR_10,VAR_9->db->id);
    } else {

        robj *VAR_17 =
            FUNC_3(VAR_9->db,VAR_11);
        if (!(VAR_17 &&
             FUNC_2(VAR_9,VAR_17,VAR_4)))
        {

            VAR_15[0] = VAR_8.rpop;
            VAR_15[1] = VAR_10;
            FUNC_5(VAR_7.rpopCommand,
                VAR_12->id,VAR_15,2,
                VAR_5|
                VAR_6);
            FUNC_6(VAR_9,VAR_11,VAR_17,
                VAR_13);

            VAR_15[0] = VAR_8.lpush;
            VAR_15[1] = VAR_11;
            VAR_15[2] = VAR_13;
            FUNC_5(VAR_7.lpushCommand,
                VAR_12->id,VAR_15,3,
                VAR_5|
                VAR_6);


            FUNC_4(VAR_3,"rpop",VAR_10,VAR_9->db->id);
        } else {


            return VAR_0;
        }
    }
    return VAR_1;
}
