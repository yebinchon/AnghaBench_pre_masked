
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_5__ {int flags; int * replicas_count; int * replicate; int slots_count; int port; int ip; int name; scalar_t__ dirty; } ;
typedef TYPE_1__ clusterManagerNode ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char*,char*,int *,...) ;
 char* FUNC_4 () ;
 int FUNC_5 (char*) ;

__attribute__((used)) static sds FUNC_6(clusterManagerNode *VAR_1, int VAR_2) {
    sds VAR_3 = FUNC_4();
    sds VAR_4 = FUNC_4();
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) VAR_4 = FUNC_2(VAR_4, " ");
    if (VAR_2) VAR_3 = FUNC_2(VAR_3, VAR_4);
    int VAR_6 = !(VAR_1->flags & VAR_0);
    char *VAR_7 = (VAR_6 ? "M" : "S");
    sds VAR_8 = ((void*)0);
    if (VAR_1->dirty && VAR_1->replicate != ((void*)0))
        VAR_3 = FUNC_3(VAR_3, "S: %S %s:%u", VAR_1->name, &VAR_1->ip, VAR_1->port);
    else {
        VAR_8 = FUNC_1(VAR_1);
        sds VAR_9 = FUNC_0(VAR_1);
        VAR_3 = FUNC_3(VAR_3, "%s: %S %s:%u\n"
                               "%s   slots:%S (%u slots) "
                               "%S",
                               VAR_7, &VAR_1->name, VAR_1->ip, VAR_1->port, VAR_4,
                               VAR_8, VAR_1->slots_count, VAR_9);
        FUNC_5(VAR_8);
        FUNC_5(VAR_9);
    }
    if (VAR_1->replicate != ((void*)0))
        VAR_3 = FUNC_3(VAR_3, "\n%s   replicates %S", VAR_4, VAR_1->replicate);
    else if (VAR_1->replicas_count)
        VAR_3 = FUNC_3(VAR_3, "\n%s   %U additional replica(s)",
                         VAR_4, VAR_1->replicas_count);
    FUNC_5(VAR_4);
    return VAR_3;
}
