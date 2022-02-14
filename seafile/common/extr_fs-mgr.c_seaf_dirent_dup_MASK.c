
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* modifier; void* name; } ;
typedef TYPE_1__ SeafDirent ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 void* FUNC_1 (void*) ;

SeafDirent *
FUNC_2 (SeafDirent *VAR_0)
{
    SeafDirent *VAR_1;

    VAR_1 = FUNC_0 (VAR_0, sizeof(SeafDirent));
    VAR_1->name = FUNC_1(VAR_0->name);
    VAR_1->modifier = FUNC_1(VAR_0->modifier);

    return VAR_1;
}
