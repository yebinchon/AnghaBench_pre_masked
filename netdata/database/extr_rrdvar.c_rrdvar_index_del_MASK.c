
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int avl_tree_lock ;
typedef int avl ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ RRDVAR ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static inline RRDVAR *FUNC_2(avl_tree_lock *VAR_0, RRDVAR *VAR_1) {
    RRDVAR *VAR_2 = (RRDVAR *)FUNC_0(VAR_0, (avl *)(VAR_1));
    if(!VAR_2)
        FUNC_1("Request to remove RRDVAR '%s' from index failed. Not Found.", VAR_1->name);

    return VAR_2;
}
