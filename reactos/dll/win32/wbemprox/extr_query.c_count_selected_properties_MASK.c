
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {struct property* proplist; } ;
struct property {struct property* next; } ;
typedef int UINT ;


 int FUNC_0 (struct view const*) ;

__attribute__((used)) static UINT FUNC_1( const struct view *VAR_0 )
{
    const struct property *VAR_1 = VAR_0->proplist;
    UINT VAR_2;

    if (!VAR_1) return FUNC_0( VAR_0 );

    VAR_2 = 1;
    while ((VAR_1 = VAR_1->next)) VAR_2++;
    return VAR_2;
}
