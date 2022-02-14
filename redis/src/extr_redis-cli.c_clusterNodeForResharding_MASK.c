
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int name; } ;
typedef TYPE_1__ clusterManagerNode ;


 int VAR_0 ;
 int FUNC_0 (char const*,...) ;
 TYPE_1__* FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static clusterManagerNode *FUNC_3(char *VAR_1,
                                                    clusterManagerNode *VAR_2,
                                                    int *VAR_3)
{
    clusterManagerNode *VAR_4 = ((void*)0);
    const char *VAR_5 = "*** The specified node (%s) is not known "
                                   "or not a master, please retry.\n";
    VAR_4 = FUNC_1(VAR_1);
    *VAR_3 = 0;
    if (!VAR_4 || VAR_4->flags & VAR_0) {
        FUNC_0(VAR_5, VAR_1);
        *VAR_3 = 1;
        return ((void*)0);
    } else if (VAR_4 != ((void*)0) && VAR_2 != ((void*)0)) {
        if (!FUNC_2(VAR_4->name, VAR_2->name)) {
            FUNC_0( "*** It is not possible to use "
                                  "the target node as "
                                  "source node.\n");
            return ((void*)0);
        }
    }
    return VAR_4;
}
