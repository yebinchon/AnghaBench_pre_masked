
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct msistring {scalar_t__ nonpersistent_refcount; scalar_t__ persistent_refcount; } ;
struct TYPE_4__ {int freeslot; size_t maxcount; size_t* sorted; struct msistring* strings; } ;
typedef TYPE_1__ string_table ;
typedef size_t UINT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (struct msistring*) ;
 size_t* FUNC_3 (size_t*,size_t) ;
 struct msistring* FUNC_4 (struct msistring*,size_t) ;

__attribute__((used)) static int FUNC_5( string_table *VAR_0 )
{
    UINT VAR_1, VAR_2, *VAR_3;
    struct msistring *VAR_4;

    FUNC_1("%p\n", VAR_0);

    if( VAR_0->freeslot )
    {
        for( VAR_1 = VAR_0->freeslot; VAR_1 < VAR_0->maxcount; VAR_1++ )
            if( !VAR_0->strings[VAR_1].persistent_refcount &&
                !VAR_0->strings[VAR_1].nonpersistent_refcount )
                return VAR_1;
    }
    for( VAR_1 = 1; VAR_1 < VAR_0->maxcount; VAR_1++ )
        if( !VAR_0->strings[VAR_1].persistent_refcount &&
            !VAR_0->strings[VAR_1].nonpersistent_refcount )
            return VAR_1;


    VAR_2 = VAR_0->maxcount + 1 + VAR_0->maxcount/2;
    VAR_4 = FUNC_4( VAR_0->strings, VAR_2 * sizeof(struct msistring) );
    if( !VAR_4 )
        return -1;

    VAR_3 = FUNC_3( VAR_0->sorted, VAR_2*sizeof(UINT) );
    if( !VAR_3 )
    {
        FUNC_2( VAR_4 );
        return -1;
    }

    VAR_0->strings = VAR_4;
    VAR_0->sorted = VAR_3;

    VAR_0->freeslot = VAR_0->maxcount;
    VAR_0->maxcount = VAR_2;
    if( VAR_0->strings[VAR_0->freeslot].persistent_refcount ||
        VAR_0->strings[VAR_0->freeslot].nonpersistent_refcount )
        FUNC_0("oops. expected freeslot to be free...\n");
    return VAR_0->freeslot;
}
