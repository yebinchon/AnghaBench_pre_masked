
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
struct TYPE_7__ {int flags; int conn; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {scalar_t__ aof_state; scalar_t__ aof_fsync; int clients_pending_write; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;

int FUNC_9(void) {
    listIter VAR_7;
    listNode *VAR_8;
    int VAR_9 = FUNC_4(VAR_6.clients_pending_write);

    FUNC_7(VAR_6.clients_pending_write,&VAR_7);
    while((VAR_8 = FUNC_5(&VAR_7))) {
        client *VAR_10 = FUNC_6(VAR_8);
        VAR_10->flags &= ~VAR_2;
        FUNC_3(VAR_6.clients_pending_write,VAR_8);



        if (VAR_10->flags & VAR_3) continue;


        if (FUNC_8(VAR_10,0) == VAR_4) continue;



        if (FUNC_0(VAR_10)) {
            int VAR_11 = 0;





            if (VAR_6.aof_state == VAR_1 &&
                VAR_6.aof_fsync == VAR_0)
            {
                VAR_11 = 1;
            }
            if (FUNC_1(VAR_10->conn, VAR_5, VAR_11) == VAR_4) {
                FUNC_2(VAR_10);
            }
        }
    }
    return VAR_9;
}
