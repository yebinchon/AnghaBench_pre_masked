
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {size_t offset; } ;
struct TYPE_7__ {size_t col_count; size_t row_count; int ** data; TYPE_2__* colinfo; } ;
typedef TYPE_1__ MSITABLE ;
typedef int MSIDATABASE ;
typedef int LPCWSTR ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,size_t) ;
 int * FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *,TYPE_2__*,size_t,int ) ;
 int FUNC_6 (int *,int ,TYPE_2__**,size_t*) ;

__attribute__((used)) static void FUNC_7( MSIDATABASE *VAR_1, LPCWSTR VAR_2 )
{
    MSITABLE *VAR_3;
    UINT VAR_4, VAR_5, VAR_6;
    UINT VAR_7;

    if (!(VAR_3 = FUNC_0( VAR_1, VAR_2 ))) return;
    VAR_6 = VAR_3->col_count;
    FUNC_3( VAR_3->colinfo, VAR_3->col_count );
    FUNC_2( VAR_3->colinfo );
    VAR_3->colinfo = ((void*)0);

    FUNC_6( VAR_1, VAR_2, &VAR_3->colinfo, &VAR_3->col_count );
    if (!VAR_3->col_count) return;

    VAR_4 = FUNC_5( VAR_1, VAR_3->colinfo, VAR_3->col_count, VAR_0 );
    VAR_5 = VAR_3->colinfo[VAR_3->col_count - 1].offset;

    for ( VAR_7 = 0; VAR_7 < VAR_3->row_count; VAR_7++ )
    {
        VAR_3->data[VAR_7] = FUNC_4( VAR_3->data[VAR_7], VAR_4 );
        if (VAR_6 < VAR_3->col_count)
            FUNC_1( &VAR_3->data[VAR_7][VAR_5], 0, VAR_4 - VAR_5 );
    }
}
