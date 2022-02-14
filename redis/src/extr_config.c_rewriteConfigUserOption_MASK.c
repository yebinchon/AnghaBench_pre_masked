
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int name; } ;
typedef TYPE_1__ user ;
struct rewriteConfigState {int dummy; } ;
typedef int sds ;
struct TYPE_10__ {TYPE_1__* data; } ;
typedef TYPE_2__ raxIterator ;
struct TYPE_11__ {char* acl_filename; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,int *,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct rewriteConfigState*,char*) ;
 int FUNC_6 (struct rewriteConfigState*,char*,int ,int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 TYPE_3__ VAR_1 ;

void FUNC_11(struct rewriteConfigState *VAR_2) {



    if (VAR_1.acl_filename[0] != '\0') {
        FUNC_5(VAR_2,"user");
        return;
    }




    raxIterator VAR_3;
    FUNC_3(&VAR_3,VAR_0);
    FUNC_2(&VAR_3,"^",((void*)0),0);
    while(FUNC_1(&VAR_3)) {
        user *VAR_4 = VAR_3.data;
        sds VAR_5 = FUNC_10("user ");
        VAR_5 = FUNC_8(VAR_5,VAR_4->name);
        VAR_5 = FUNC_7(VAR_5," ",1);
        sds VAR_6 = FUNC_0(VAR_4);
        VAR_5 = FUNC_8(VAR_5,VAR_6);
        FUNC_9(VAR_6);
        FUNC_6(VAR_2,"user",VAR_5,1);
    }
    FUNC_4(&VAR_3);


    FUNC_5(VAR_2,"user");
}
