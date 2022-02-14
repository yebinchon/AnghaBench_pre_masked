
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cChildren; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef int TREEVIEW_INFO ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*,TYPE_1__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_1(const TREEVIEW_INFO *VAR_2, TREEVIEW_ITEM *VAR_3)
{
    FUNC_0(VAR_2, VAR_3, VAR_1);


    return VAR_3->cChildren != 0 && VAR_3->cChildren != VAR_0;
}
