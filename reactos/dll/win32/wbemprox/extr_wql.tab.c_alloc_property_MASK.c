
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int * next; int const* class; int const* name; } ;
struct parser {int dummy; } ;
typedef int WCHAR ;


 struct property* FUNC_0 (struct parser*,int) ;

__attribute__((used)) static struct property *FUNC_1( struct parser *VAR_0, const WCHAR *VAR_1, const WCHAR *VAR_2 )
{
    struct property *VAR_3 = FUNC_0( VAR_0, sizeof(*VAR_3) );
    if (VAR_3)
    {
        VAR_3->name = VAR_2;
        VAR_3->class = VAR_1;
        VAR_3->next = ((void*)0);
    }
    return VAR_3;
}
