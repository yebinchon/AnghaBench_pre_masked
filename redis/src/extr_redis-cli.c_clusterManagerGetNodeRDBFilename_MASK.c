
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_6__ {int name; int port; int ip; } ;
typedef TYPE_2__ clusterManagerNode ;
struct TYPE_5__ {int backup_dir; } ;
struct TYPE_7__ {TYPE_1__ cluster_manager_command; } ;


 int FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;
 char* FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char*,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static sds FUNC_5(clusterManagerNode *VAR_1) {
    FUNC_0(VAR_0.cluster_manager_command.backup_dir);
    sds VAR_2 = FUNC_4(VAR_0.cluster_manager_command.backup_dir);
    if (VAR_2[FUNC_3(VAR_2) - 1] != '/')
        VAR_2 = FUNC_1(VAR_2, "/");
    VAR_2 = FUNC_2(VAR_2, "redis-node-%s-%d-%s.rdb", VAR_1->ip,
                            VAR_1->port, VAR_1->name);
    return VAR_2;
}
