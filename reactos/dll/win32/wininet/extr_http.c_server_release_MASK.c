
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* scheme_host_port; struct TYPE_4__* name; scalar_t__ cert_chain; int entry; int ref; } ;
typedef TYPE_1__ server_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(server_t *VAR_1)
{
    if(FUNC_2(&VAR_1->ref))
        return;




    FUNC_5(&VAR_1->entry);




    if(VAR_1->cert_chain)
        FUNC_0(VAR_1->cert_chain);
    FUNC_4(VAR_1->name);
    FUNC_4(VAR_1->scheme_host_port);
    FUNC_4(VAR_1);
}
