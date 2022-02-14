
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {scalar_t__ count; int * result; struct expr const* cond; int table; struct property const* proplist; } ;
struct property {int dummy; } ;
struct expr {int dummy; } ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 struct view* FUNC_1 (int) ;

HRESULT FUNC_2( const struct property *VAR_2, const WCHAR *VAR_3,
                     const struct expr *VAR_4, struct view **VAR_5 )
{
    struct view *VAR_6 = FUNC_1( sizeof(struct view) );

    if (!VAR_6) return VAR_0;
    VAR_6->proplist = VAR_2;
    VAR_6->table = FUNC_0( VAR_3 );
    VAR_6->cond = VAR_4;
    VAR_6->result = ((void*)0);
    VAR_6->count = 0;
    *VAR_5 = VAR_6;
    return VAR_1;
}
