
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sds ;
struct TYPE_6__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_7__ {scalar_t__ name; } ;
typedef TYPE_2__ clusterManagerNode ;
struct TYPE_8__ {int * nodes; } ;


 TYPE_4__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static clusterManagerNode *FUNC_7(const char *VAR_1) {
    if (VAR_0.nodes == ((void*)0)) return ((void*)0);
    clusterManagerNode *VAR_2 = ((void*)0);
    sds VAR_3 = FUNC_4();
    VAR_3 = FUNC_3(VAR_3, VAR_1);
    FUNC_6(VAR_3);
    listIter VAR_4;
    listNode *VAR_5;
    FUNC_1(VAR_0.nodes, &VAR_4);
    while ((VAR_5 = FUNC_0(&VAR_4)) != ((void*)0)) {
        clusterManagerNode *VAR_6 = VAR_5->value;
        if (VAR_6->name && !FUNC_2(VAR_6->name, VAR_3)) {
            VAR_2 = VAR_6;
            break;
        }
    }
    FUNC_5(VAR_3);
    return VAR_2;
}
