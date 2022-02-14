
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int avl_tree_lock ;
typedef int avl ;
struct TYPE_3__ {char* name; scalar_t__ hash; } ;
typedef TYPE_1__ RRDVAR ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static inline RRDVAR *FUNC_2(avl_tree_lock *VAR_0, const char *VAR_1, uint32_t VAR_2) {
    RRDVAR VAR_3;
    VAR_3.name = (char *)VAR_1;
    VAR_3.hash = (VAR_2)?VAR_2:FUNC_1(VAR_3.name);

    return (RRDVAR *)FUNC_0(VAR_0, (avl *)&VAR_3);
}
