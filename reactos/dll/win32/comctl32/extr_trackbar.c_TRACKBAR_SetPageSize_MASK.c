
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lPageSize; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LONG ;


 int VAR_0 ;

__attribute__((used)) static inline LONG
FUNC_0 (TRACKBAR_INFO *VAR_1, LONG VAR_2)
{
    LONG VAR_3 = VAR_1->lPageSize;

    if (VAR_2 != -1)
        VAR_1->lPageSize = VAR_2;
    else
        VAR_1->lPageSize = VAR_0;

    return VAR_3;
}
