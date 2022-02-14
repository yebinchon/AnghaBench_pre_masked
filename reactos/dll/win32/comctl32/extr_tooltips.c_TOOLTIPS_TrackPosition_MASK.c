
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* yTrackPos; void* xTrackPos; scalar_t__ bTrackActive; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef void* INT ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,void*,void*) ;

__attribute__((used)) static LRESULT
FUNC_4 (TOOLTIPS_INFO *VAR_0, LPARAM VAR_1)
{
    VAR_0->xTrackPos = (INT)FUNC_1(VAR_1);
    VAR_0->yTrackPos = (INT)FUNC_0(VAR_1);

    if (VAR_0->bTrackActive) {
 FUNC_3("[%d %d]\n",
        VAR_0->xTrackPos, VAR_0->yTrackPos);

 FUNC_2 (VAR_0);
    }

    return 0;
}
