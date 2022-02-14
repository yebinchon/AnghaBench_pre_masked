
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int argc; char** argv; int flags; } ;
typedef TYPE_1__ clusterManagerCommand ;
struct TYPE_4__ {TYPE_1__ cluster_manager_command; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1(char *VAR_2, int VAR_3, char **VAR_4) {
    clusterManagerCommand *VAR_5 = &VAR_1.cluster_manager_command;
    VAR_5->name = VAR_2;
    VAR_5->argc = VAR_3;
    VAR_5->argv = VAR_3 ? VAR_4 : ((void*)0);
    if (FUNC_0()) VAR_5->flags |= VAR_0;
}
