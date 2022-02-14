
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ uNumTics; int * tics; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static LRESULT
FUNC_2 (TRACKBAR_INFO *VAR_0, BOOL VAR_1)
{
    if (VAR_0->tics) {
        FUNC_0 (VAR_0->tics);
        VAR_0->tics = ((void*)0);
        VAR_0->uNumTics = 0;
    }

    if (VAR_1) FUNC_1(VAR_0);

    return 0;
}
