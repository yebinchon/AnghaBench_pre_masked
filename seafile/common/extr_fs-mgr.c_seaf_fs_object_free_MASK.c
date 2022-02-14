
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
typedef int Seafile ;
typedef TYPE_1__ SeafFSObject ;
typedef int SeafDir ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2 (SeafFSObject *VAR_2)
{
    if (!VAR_2)
        return;

    if (VAR_2->type == VAR_1)
        FUNC_1 ((Seafile *)VAR_2);
    else if (VAR_2->type == VAR_0)
        FUNC_0 ((SeafDir *)VAR_2);
}
