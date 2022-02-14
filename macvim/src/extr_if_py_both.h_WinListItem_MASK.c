
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int win_T ;
struct TYPE_4__ {TYPE_2__* tabObject; } ;
typedef TYPE_1__ WinListObject ;
struct TYPE_5__ {int tab; } ;
typedef int PyObject ;
typedef scalar_t__ PyInt ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int * FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static PyObject *
FUNC_5(WinListObject *VAR_2, PyInt VAR_3)
{
    win_T *VAR_4;

    if (!(VAR_4 = FUNC_4(VAR_2->tabObject)))
 return ((void*)0);

    for (; VAR_4 != ((void*)0); VAR_4 = FUNC_2(VAR_4), --VAR_3)
 if (VAR_3 == 0)
     return FUNC_3(VAR_4, VAR_2->tabObject? VAR_2->tabObject->tab: VAR_1);

    FUNC_1(VAR_0, FUNC_0("no such window"));
    return ((void*)0);
}
