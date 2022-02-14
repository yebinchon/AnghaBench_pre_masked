
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; int * type; } ;
typedef TYPE_1__ connection ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

connection *FUNC_1() {
    connection *VAR_1 = FUNC_0(sizeof(connection));
    VAR_1->type = &VAR_0;
    VAR_1->fd = -1;

    return VAR_1;
}
