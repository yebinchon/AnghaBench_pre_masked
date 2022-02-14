
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int * FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(void) {
    listNode *VAR_3;
    listIter VAR_4;

    FUNC_3(VAR_2.clients,&VAR_4);
    while((VAR_3 = FUNC_1(&VAR_4))) {
        client *VAR_5 = FUNC_2(VAR_3);

        if (VAR_5->flags & VAR_0) {
            FUNC_0(VAR_5,FUNC_4(
                "-UNBLOCKED force unblock from blocking operation, "
                "instance state changed (master -> replica?)\r\n"));
            FUNC_5(VAR_5);
            VAR_5->flags |= VAR_1;
        }
    }
}
