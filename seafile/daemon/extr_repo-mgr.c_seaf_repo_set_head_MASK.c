
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int manager; } ;
typedef TYPE_1__ SeafRepo ;
typedef int SeafBranch ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

int
FUNC_2 (SeafRepo *VAR_0, SeafBranch *VAR_1)
{
    if (FUNC_0 (VAR_0->manager, VAR_1) < 0)
        return -1;
    FUNC_1 (VAR_0, VAR_1);
    return 0;
}
