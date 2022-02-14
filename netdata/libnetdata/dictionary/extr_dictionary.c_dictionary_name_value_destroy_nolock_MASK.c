
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int avl ;
struct TYPE_10__ {int flags; int values_index; } ;
struct TYPE_9__ {struct TYPE_9__* name; struct TYPE_9__* value; } ;
typedef TYPE_1__ NAME_VALUE ;
typedef TYPE_2__ DICTIONARY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(DICTIONARY *VAR_4, NAME_VALUE *VAR_5) {
    FUNC_3(VAR_2, "Destroying name value entry for name '%s'.", VAR_5->name);

    FUNC_0(VAR_4);
    if(FUNC_6(FUNC_2(&(VAR_4->values_index), (avl *)(VAR_5)) != (avl *)VAR_5))
        FUNC_4("dictionary: INTERNAL ERROR: dictionary invalid removal of node.");

    FUNC_1(VAR_4);

    if(!(VAR_4->flags & VAR_1)) {
        FUNC_3(VAR_3, "Dictionary freeing value of '%s'", VAR_5->name);
        FUNC_5(VAR_5->value);
    }

    if(!(VAR_4->flags & VAR_0)) {
        FUNC_3(VAR_3, "Dictionary freeing name '%s'", VAR_5->name);
        FUNC_5(VAR_5->name);
    }

    FUNC_5(VAR_5);
}
