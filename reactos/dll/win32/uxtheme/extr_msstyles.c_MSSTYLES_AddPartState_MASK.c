
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* partstate; } ;
struct TYPE_8__ {int iPartId; int iStateId; struct TYPE_8__* next; int * properties; } ;
typedef int THEME_PARTSTATE ;
typedef TYPE_1__* PTHEME_PARTSTATE ;
typedef TYPE_2__* PTHEME_CLASS ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int,int,int *) ;

__attribute__((used)) static PTHEME_PARTSTATE FUNC_3(PTHEME_CLASS VAR_0, int VAR_1, int VAR_2)
{
    PTHEME_PARTSTATE VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2, ((void*)0));
    if(VAR_3) return VAR_3;

    VAR_3 = FUNC_1(FUNC_0(), 0, sizeof(THEME_PARTSTATE));
    VAR_3->iPartId = VAR_1;
    VAR_3->iStateId = VAR_2;
    VAR_3->properties = ((void*)0);
    VAR_3->next = VAR_0->partstate;
    VAR_0->partstate = VAR_3;
    return VAR_3;
}
