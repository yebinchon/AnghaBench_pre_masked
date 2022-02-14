
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * handle; int children; } ;
typedef TYPE_1__ object_header_t ;
typedef int ULONG_PTR ;
typedef int * HINTERNET ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 TYPE_1__** FUNC_4 (int) ;
 TYPE_1__** FUNC_5 (TYPE_1__**,int) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

HINTERNET FUNC_7( object_header_t *VAR_5 )
{
    object_header_t **VAR_6;
    ULONG_PTR VAR_7, VAR_8;

    FUNC_6( &VAR_5->children );
    VAR_5->handle = ((void*)0);

    FUNC_1( &VAR_1 );
    if (!VAR_3)
    {
        VAR_8 = VAR_0;
        if (!(VAR_6 = FUNC_4( sizeof(ULONG_PTR) * VAR_8 ))) goto end;
        VAR_2 = VAR_6;
        VAR_3 = VAR_8;
    }
    if (VAR_3 == VAR_4)
    {
        VAR_8 = VAR_3 * 2;
        if (!(VAR_6 = FUNC_5( VAR_2, sizeof(ULONG_PTR) * VAR_8 ))) goto end;
        VAR_2 = VAR_6;
        VAR_3 = VAR_8;
    }
    VAR_7 = VAR_4;
    if (VAR_2[VAR_7]) FUNC_0("handle isn't free but should be\n");

    VAR_2[VAR_7] = FUNC_3( VAR_5 );
    VAR_5->handle = (HINTERNET)(VAR_7 + 1);
    while ((VAR_4 < VAR_3) && VAR_2[VAR_4]) VAR_4++;

end:
    FUNC_2( &VAR_1 );
    return VAR_5->handle;
}
