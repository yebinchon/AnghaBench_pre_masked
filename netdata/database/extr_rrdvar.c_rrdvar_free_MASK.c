
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int avl_tree_lock ;
struct TYPE_10__ {char* hostname; } ;
struct TYPE_9__ {int options; struct TYPE_9__* name; struct TYPE_9__* value; } ;
typedef TYPE_1__ RRDVAR ;
typedef TYPE_2__ RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;

inline void FUNC_5(RRDHOST *VAR_2, avl_tree_lock *VAR_3, RRDVAR *VAR_4) {
    (void)VAR_2;

    if(!VAR_4) return;

    if(VAR_3) {
        FUNC_0(VAR_0, "Deleting variable '%s'", VAR_4->name);
        if(FUNC_4(!FUNC_3(VAR_3, VAR_4)))
            FUNC_1("RRDVAR: Attempted to delete variable '%s' from host '%s', but it is not found.", VAR_4->name, VAR_2->hostname);
    }

    if(VAR_4->options & VAR_1)
        FUNC_2(VAR_4->value);

    FUNC_2(VAR_4->name);
    FUNC_2(VAR_4);
}
