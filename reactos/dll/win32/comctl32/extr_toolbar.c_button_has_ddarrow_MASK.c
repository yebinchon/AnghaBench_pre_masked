
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fsStyle; } ;
struct TYPE_5__ {int dwExStyle; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ TBUTTON_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline BOOL FUNC_1(const TOOLBAR_INFO *VAR_2, const TBUTTON_INFO *VAR_3)
{
    return (FUNC_0( VAR_2->dwExStyle ) && (VAR_3->fsStyle & VAR_0)) ||
        (VAR_3->fsStyle & VAR_1);
}
