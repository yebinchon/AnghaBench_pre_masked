
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fd; TYPE_1__* type; int conn_handler; int state; int last_errno; } ;
typedef TYPE_2__ connection ;
struct TYPE_8__ {int el; } ;
struct TYPE_6__ {int ae_handler; } ;
typedef int ConnectionCallbackFunc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,int ,TYPE_2__*) ;
 int FUNC_1 (int *,char const*,int,char const*) ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;

__attribute__((used)) static int FUNC_2(connection *VAR_7, const char *VAR_8, int VAR_9, const char *VAR_10,
        ConnectionCallbackFunc VAR_11) {
    int VAR_12 = FUNC_1(((void*)0),VAR_8,VAR_9,VAR_10);
    if (VAR_12 == -1) {
        VAR_7->state = VAR_2;
        VAR_7->last_errno = VAR_5;
        return VAR_3;
    }

    VAR_7->fd = VAR_12;
    VAR_7->state = VAR_1;

    VAR_7->conn_handler = VAR_11;
    FUNC_0(VAR_6.el, VAR_7->fd, VAR_0,
            VAR_7->type->ae_handler, VAR_7);

    return VAR_4;
}
