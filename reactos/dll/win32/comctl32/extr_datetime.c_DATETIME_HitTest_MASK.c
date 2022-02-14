
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nrFields; int * fieldRect; int checkbox; int calbutton; } ;
typedef int POINT ;
typedef int INT ;
typedef TYPE_1__ DATETIME_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static INT
FUNC_3 (const DATETIME_INFO *VAR_3, POINT VAR_4)
{
    int VAR_5;

    FUNC_1 ("%s\n", FUNC_2(&VAR_4));

    if (FUNC_0 (&VAR_3->calbutton, VAR_4)) return VAR_1;
    if (FUNC_0 (&VAR_3->checkbox, VAR_4)) return VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_3->nrFields; VAR_5++) {
        if (FUNC_0 (&VAR_3->fieldRect[VAR_5], VAR_4)) return VAR_5;
    }

    return VAR_2;
}
