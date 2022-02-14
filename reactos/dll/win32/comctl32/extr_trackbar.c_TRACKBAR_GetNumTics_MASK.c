
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwStyle; scalar_t__ uNumTics; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef scalar_t__ LONG ;


 int VAR_0 ;

__attribute__((used)) static inline LONG
FUNC_0 (const TRACKBAR_INFO *VAR_1)
{
    if (VAR_1->dwStyle & VAR_0) return 0;

    return VAR_1->uNumTics + 2;
}
