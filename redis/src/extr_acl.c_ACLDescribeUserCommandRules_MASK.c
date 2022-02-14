
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char*** allowed_subcommands; int allowed_commands; int member_0; } ;
typedef TYPE_1__ user ;
struct redisCommand {size_t id; char* name; } ;
typedef char* sds ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_12__ {scalar_t__ flag; char* name; } ;
struct TYPE_11__ {int orig_commands; } ;


 TYPE_9__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned long*,unsigned long*,char*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,size_t,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int * FUNC_5 (int ) ;
 struct redisCommand* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ,int) ;
 char* FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*,char*,int) ;
 char* FUNC_12 (char*,char*) ;
 char* FUNC_13 () ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char*,int) ;
 int FUNC_16 (char*,int ,int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_17 (int ,char*,char*) ;
 int FUNC_18 (char*) ;

sds FUNC_19(user *VAR_3) {
    sds VAR_4 = FUNC_13();
    int VAR_5;





    user VAR_6 = {0};
    user *VAR_7 = &VAR_6;
    if (FUNC_4(VAR_3)) {
        VAR_5 = 0;
        VAR_4 = FUNC_10(VAR_4,"+@all ");
        FUNC_2(VAR_7,"+@all",-1);
    } else {
        VAR_5 = 1;
        VAR_4 = FUNC_10(VAR_4,"-@all ");
        FUNC_2(VAR_7,"-@all",-1);
    }





    for (int VAR_8 = 0; VAR_0[VAR_8].flag != 0; VAR_8++) {
        unsigned long VAR_9, VAR_10;
        FUNC_0(VAR_3,&VAR_9,&VAR_10,VAR_0[VAR_8].name);
        if ((VAR_5 && VAR_9 > VAR_10) || (!VAR_5 && VAR_10 > VAR_9)) {
            sds VAR_11 = FUNC_15(VAR_5 ? "+@" : "-@", 2);
            VAR_11 = FUNC_10(VAR_11,VAR_0[VAR_8].name);
            FUNC_2(VAR_7,VAR_11,-1);
            VAR_4 = FUNC_12(VAR_4,VAR_11);
            VAR_4 = FUNC_11(VAR_4," ",1);
            FUNC_14(VAR_11);
        }
    }


    dictIterator *VAR_12 = FUNC_5(VAR_2.orig_commands);
    dictEntry *VAR_13;
    while ((VAR_13 = FUNC_7(VAR_12)) != ((void*)0)) {
        struct redisCommand *VAR_14 = FUNC_6(VAR_13);
        int VAR_15 = FUNC_1(VAR_3,VAR_14->id);
        int VAR_16 = FUNC_1(VAR_7,VAR_14->id);
        if (VAR_15 != VAR_16) {
            VAR_4 = FUNC_11(VAR_4, VAR_15 ? "+" : "-", 1);
            VAR_4 = FUNC_10(VAR_4,VAR_14->name);
            VAR_4 = FUNC_11(VAR_4," ",1);
            FUNC_3(VAR_7,VAR_14->id,VAR_15);
        }


        if (VAR_15 == 0 && VAR_3->allowed_subcommands &&
            VAR_3->allowed_subcommands[VAR_14->id])
        {
            for (int VAR_17 = 0; VAR_3->allowed_subcommands[VAR_14->id][VAR_17]; VAR_17++) {
                VAR_4 = FUNC_11(VAR_4,"+",1);
                VAR_4 = FUNC_10(VAR_4,VAR_14->name);
                VAR_4 = FUNC_11(VAR_4,"|",1);
                VAR_4 = FUNC_12(VAR_4,VAR_3->allowed_subcommands[VAR_14->id][VAR_17]);
                VAR_4 = FUNC_11(VAR_4," ",1);
            }
        }
    }
    FUNC_8(VAR_12);


    FUNC_16(VAR_4,0,-2);





    if (FUNC_9(VAR_7->allowed_commands,
                        VAR_3->allowed_commands,
                        sizeof(VAR_3->allowed_commands)) != 0)
    {
        FUNC_17(VAR_1,
            "CRITICAL ERROR: User ACLs don't match final bitmap: '%s'",
            VAR_4);
        FUNC_18("No bitmap match in ACLDescribeUserCommandRules()");
    }
    return VAR_4;
}
