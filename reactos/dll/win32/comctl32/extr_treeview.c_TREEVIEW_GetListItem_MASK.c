
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const TREEVIEW_ITEM ;
typedef int TREEVIEW_INFO ;
typedef int LONG ;


 int const* FUNC_0 (int const*,int const*) ;
 int const* FUNC_1 (int const*,int const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static TREEVIEW_ITEM *
FUNC_3(const TREEVIEW_INFO *VAR_0, TREEVIEW_ITEM *VAR_1,
       LONG VAR_2)
{
    TREEVIEW_ITEM *(*VAR_3)(const TREEVIEW_INFO *, const TREEVIEW_ITEM *);
    TREEVIEW_ITEM *VAR_4;

    FUNC_2(VAR_1 != ((void*)0));

    if (VAR_2 > 0)
    {
 VAR_3 = FUNC_0;
    }
    else if (VAR_2 < 0)
    {
 VAR_2 = -VAR_2;
 VAR_3 = FUNC_1;
    }
    else
 return VAR_1;

    do
    {
 VAR_4 = VAR_1;
 VAR_1 = VAR_3(VAR_0, VAR_1);

    } while (--VAR_2 && VAR_1 != ((void*)0));


    return VAR_1 ? VAR_1 : VAR_4;
}
