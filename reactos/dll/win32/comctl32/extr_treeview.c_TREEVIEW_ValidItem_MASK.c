
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TREEVIEW_INFO ;
typedef int HTREEITEM ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int const*,int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_2(const TREEVIEW_INFO *VAR_2, HTREEITEM VAR_3)
{
    if (FUNC_1(VAR_2, VAR_3) == -1)
    {
 FUNC_0("invalid item %p\n", VAR_3);
 return VAR_0;
    }
    else
 return VAR_1;
}
