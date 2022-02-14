
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int avl_tree_lock ;
typedef int avl ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ RRDVAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static inline RRDVAR *FUNC_2(avl_tree_lock *VAR_1, RRDVAR *VAR_2) {
    RRDVAR *VAR_3 = (RRDVAR *)FUNC_0(VAR_1, (avl *)(VAR_2));
    if(VAR_3 != VAR_2)
        FUNC_1(VAR_0, "Request to insert RRDVAR '%s' into index failed. Already exists.", VAR_2->name);

    return VAR_3;
}
