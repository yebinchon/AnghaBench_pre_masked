
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_6__ {int styleNew; } ;
struct TYPE_5__ {int dwStyle; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef TYPE_2__ STYLESTRUCT ;
typedef int LRESULT ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static LRESULT
FUNC_0 (TRACKBAR_INFO *VAR_1, WPARAM VAR_2,
                       const STYLESTRUCT *VAR_3)
{
    if (VAR_2 != VAR_0) return 0;

    VAR_1->dwStyle = VAR_3->styleNew;

    return 0;
}
