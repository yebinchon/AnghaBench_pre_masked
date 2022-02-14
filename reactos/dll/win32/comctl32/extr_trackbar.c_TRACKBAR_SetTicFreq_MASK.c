
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_6__ {int dwStyle; int uTicFreq; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline LRESULT
FUNC_3 (TRACKBAR_INFO *VAR_1, WORD VAR_2)
{
    if (VAR_1->dwStyle & VAR_0) {
        VAR_1->uTicFreq = VAR_2;
 FUNC_1 (VAR_1);
 FUNC_0(VAR_1);
    }

    FUNC_2 (VAR_1);
    return 0;
}
