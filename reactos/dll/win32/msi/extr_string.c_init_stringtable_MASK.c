
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct msistring {int dummy; } ;
struct TYPE_5__ {int maxcount; int freeslot; scalar_t__ sortcount; int codepage; struct TYPE_5__* strings; void* sorted; } ;
typedef TYPE_1__ string_table ;
typedef int UINT ;


 void* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static string_table *FUNC_4( int VAR_0, UINT VAR_1 )
{
    string_table *VAR_2;

    if (!FUNC_3( VAR_1 ))
        return ((void*)0);

    VAR_2 = FUNC_0( sizeof (string_table) );
    if( !VAR_2 )
        return ((void*)0);
    if( VAR_0 < 1 )
        VAR_0 = 1;

    VAR_2->strings = FUNC_1( sizeof(struct msistring) * VAR_0 );
    if( !VAR_2->strings )
    {
        FUNC_2( VAR_2 );
        return ((void*)0);
    }

    VAR_2->sorted = FUNC_0( sizeof (UINT) * VAR_0 );
    if( !VAR_2->sorted )
    {
        FUNC_2( VAR_2->strings );
        FUNC_2( VAR_2 );
        return ((void*)0);
    }

    VAR_2->maxcount = VAR_0;
    VAR_2->freeslot = 1;
    VAR_2->codepage = VAR_1;
    VAR_2->sortcount = 0;

    return VAR_2;
}
