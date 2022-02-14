
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int win_T ;
struct TYPE_3__ {int tabObject; } ;
typedef TYPE_1__ WinListObject ;
typedef int PyInt ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static PyInt
FUNC_2(WinListObject *VAR_0)
{
    win_T *VAR_1;
    PyInt VAR_2 = 0;

    if (!(VAR_1 = FUNC_1(VAR_0->tabObject)))
 return -1;

    while (VAR_1 != ((void*)0))
    {
 ++VAR_2;
 VAR_1 = FUNC_0(VAR_1);
    }

    return VAR_2;
}
