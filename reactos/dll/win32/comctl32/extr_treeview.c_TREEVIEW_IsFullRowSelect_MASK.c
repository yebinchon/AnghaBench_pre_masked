
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwStyle; } ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_0(const TREEVIEW_INFO *VAR_2)
{
    return !(VAR_2->dwStyle & VAR_1) && (VAR_2->dwStyle & VAR_0);
}
