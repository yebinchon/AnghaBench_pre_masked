
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {struct property* proplist; } ;
struct property {struct property* next; int name; } ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*) ;

BOOL FUNC_1( const struct view *VAR_2, const WCHAR *VAR_3 )
{
    const struct property *VAR_4 = VAR_2->proplist;

    if (!VAR_4) return VAR_1;
    while (VAR_4)
    {
        if (!FUNC_0( VAR_4->name, VAR_3 )) return VAR_1;
        VAR_4 = VAR_4->next;
    }
    return VAR_0;
}
