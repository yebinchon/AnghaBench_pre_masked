
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ lSelMax; scalar_t__ lSelMin; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static LRESULT
FUNC_1 (TRACKBAR_INFO *VAR_1, BOOL VAR_2)
{
    VAR_1->lSelMin = 0;
    VAR_1->lSelMax = 0;
    VAR_1->flags |= VAR_0;

    if (VAR_2) FUNC_0(VAR_1);

    return 0;
}
