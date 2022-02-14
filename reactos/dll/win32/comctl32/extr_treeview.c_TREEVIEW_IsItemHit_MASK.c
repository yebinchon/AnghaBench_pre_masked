
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ TVHITTESTINFO ;
typedef int TREEVIEW_INFO ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL
FUNC_1(const TREEVIEW_INFO *VAR_4, const TVHITTESTINFO *VAR_5)
{
    if (FUNC_0(VAR_4))
        return VAR_5->flags & (VAR_2 | VAR_1 | VAR_0 | VAR_3);
    else
        return VAR_5->flags & VAR_0;
}
