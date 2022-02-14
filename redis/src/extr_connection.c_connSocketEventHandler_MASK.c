
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct aeEventLoop {int dummy; } ;
struct TYPE_5__ {scalar_t__ state; int flags; int * read_handler; int * write_handler; int * conn_handler; int fd; int last_errno; } ;
typedef TYPE_1__ connection ;
struct TYPE_6__ {int el; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static void FUNC_4(struct aeEventLoop *VAR_8, int VAR_9, void *VAR_10, int VAR_11)
{
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);
    connection *VAR_12 = VAR_10;

    if (VAR_12->state == VAR_4 &&
            (VAR_11 & VAR_1) && VAR_12->conn_handler) {

        if (FUNC_3(VAR_12)) {
            VAR_12->last_errno = VAR_6;
            VAR_12->state = VAR_5;
        } else {
            VAR_12->state = VAR_3;
        }

        if (!VAR_12->write_handler) FUNC_1(VAR_7.el,VAR_12->fd,VAR_1);

        if (!FUNC_2(VAR_12, VAR_12->conn_handler)) return;
        VAR_12->conn_handler = ((void*)0);
    }
    int VAR_13 = VAR_12->flags & VAR_2;

    int VAR_14 = (VAR_11 & VAR_1) && VAR_12->write_handler;
    int VAR_15 = (VAR_11 & VAR_0) && VAR_12->read_handler;


    if (!VAR_13 && VAR_15) {
        if (!FUNC_2(VAR_12, VAR_12->read_handler)) return;
    }

    if (VAR_14) {
        if (!FUNC_2(VAR_12, VAR_12->write_handler)) return;
    }


    if (VAR_13 && VAR_15) {
        if (!FUNC_2(VAR_12, VAR_12->read_handler)) return;
    }
}
