
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwStyle; scalar_t__ uView; } ;
typedef TYPE_1__ LISTVIEW_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline BOOL FUNC_0(const LISTVIEW_INFO *VAR_3)
{
    return (VAR_3->dwStyle & VAR_0) &&
        (VAR_3->uView == VAR_1 || VAR_3->uView == VAR_2);
}
