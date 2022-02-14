
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int id ;
struct TYPE_6__ {int id; int client_list_node; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int clients_index; int clients; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned char*,int,TYPE_1__*,int *) ;
 TYPE_2__ VAR_0 ;

void FUNC_4(client *VAR_1) {
    FUNC_1(VAR_0.clients,VAR_1);



    VAR_1->client_list_node = FUNC_2(VAR_0.clients);
    uint64_t VAR_2 = FUNC_0(VAR_1->id);
    FUNC_3(VAR_0.clients_index,(unsigned char*)&VAR_2,sizeof(VAR_2),VAR_1,((void*)0));
}
