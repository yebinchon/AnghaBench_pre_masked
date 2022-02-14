
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* ip; int port; float weight; scalar_t__ balance; scalar_t__ replicas_count; scalar_t__ importing_count; scalar_t__ migrating_count; int * importing; int * migrating; int * friends; scalar_t__ dirty; int * replicate; int * flags_str; scalar_t__ flags; scalar_t__ ping_recv; scalar_t__ ping_sent; scalar_t__ current_epoch; int * name; int * context; } ;
typedef TYPE_1__ clusterManagerNode ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static clusterManagerNode *FUNC_2(char *VAR_0, int VAR_1) {
    clusterManagerNode *VAR_2 = FUNC_1(sizeof(*VAR_2));
    VAR_2->context = ((void*)0);
    VAR_2->name = ((void*)0);
    VAR_2->ip = VAR_0;
    VAR_2->port = VAR_1;
    VAR_2->current_epoch = 0;
    VAR_2->ping_sent = 0;
    VAR_2->ping_recv = 0;
    VAR_2->flags = 0;
    VAR_2->flags_str = ((void*)0);
    VAR_2->replicate = ((void*)0);
    VAR_2->dirty = 0;
    VAR_2->friends = ((void*)0);
    VAR_2->migrating = ((void*)0);
    VAR_2->importing = ((void*)0);
    VAR_2->migrating_count = 0;
    VAR_2->importing_count = 0;
    VAR_2->replicas_count = 0;
    VAR_2->weight = 1.0f;
    VAR_2->balance = 0;
    FUNC_0(VAR_2);
    return VAR_2;
}
