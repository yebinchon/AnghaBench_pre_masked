
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int dwStyle; int flags; int uThumbLen; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline LRESULT
FUNC_1 (TRACKBAR_INFO *VAR_2, UINT VAR_3)
{
    if (VAR_2->dwStyle & VAR_0) {


        VAR_2->uThumbLen = VAR_3;
 VAR_2->flags |= VAR_1;
 FUNC_0(VAR_2);
    }

    return 0;
}
