
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int patterns; int *** allowed_subcommands; } ;
typedef TYPE_1__ user ;
typedef size_t uint64_t ;
typedef int sds ;
typedef int listNode ;
typedef int listIter ;
struct TYPE_8__ {int argc; TYPE_4__** argv; TYPE_3__* cmd; TYPE_1__* user; } ;
typedef TYPE_2__ client ;
struct TYPE_10__ {int ptr; } ;
struct TYPE_9__ {size_t id; scalar_t__ proc; scalar_t__ firstkey; scalar_t__ getkeys_proc; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (TYPE_3__*,TYPE_4__**,int,int*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,size_t,int ,size_t,int ) ;

int FUNC_9(client *VAR_6) {
    user *VAR_7 = VAR_6->user;
    uint64_t VAR_8 = VAR_6->cmd->id;


    if (VAR_7 == ((void*)0)) return VAR_2;


    if (!(VAR_7->flags & VAR_3) &&
        VAR_6->cmd->proc != VAR_5)
    {


        if (FUNC_0(VAR_7,VAR_8) == 0) {

            if (VAR_6->argc < 2 ||
                VAR_7->allowed_subcommands == ((void*)0) ||
                VAR_7->allowed_subcommands[VAR_8] == ((void*)0))
            {
                return VAR_0;
            }

            long VAR_9 = 0;
            while (1) {
                if (VAR_7->allowed_subcommands[VAR_8][VAR_9] == ((void*)0))
                    return VAR_0;
                if (!FUNC_7(VAR_6->argv[1]->ptr,
                                VAR_7->allowed_subcommands[VAR_8][VAR_9]))
                    break;
                VAR_9++;
            }
        }
    }



    if (!(VAR_6->user->flags & VAR_4) &&
        (VAR_6->cmd->getkeys_proc || VAR_6->cmd->firstkey))
    {
        int VAR_10;
        int *VAR_11 = FUNC_2(VAR_6->cmd,VAR_6->argv,VAR_6->argc,&VAR_10);
        for (int VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
            listIter VAR_13;
            listNode *VAR_14;
            FUNC_5(VAR_7->patterns,&VAR_13);


            int VAR_15 = 0;
            while((VAR_14 = FUNC_3(&VAR_13))) {
                sds VAR_16 = FUNC_4(VAR_14);
                size_t VAR_17 = FUNC_6(VAR_16);
                int VAR_18 = VAR_11[VAR_12];
                if (FUNC_8(VAR_16,VAR_17,VAR_6->argv[VAR_18]->ptr,
                                   FUNC_6(VAR_6->argv[VAR_18]->ptr),0))
                {
                    VAR_15 = 1;
                    break;
                }
            }
            if (!VAR_15) {
                FUNC_1(VAR_11);
                return VAR_1;
            }
        }
        FUNC_1(VAR_11);
    }



    return VAR_2;
}
