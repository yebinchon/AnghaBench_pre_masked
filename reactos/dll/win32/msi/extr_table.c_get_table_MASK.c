
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {int tables; int storage; } ;
struct TYPE_12__ {int entry; scalar_t__ col_count; int * colinfo; int persistent; int name; int * data_persistent; int * data; scalar_t__ row_count; } ;
typedef TYPE_1__ MSITABLE ;
typedef TYPE_2__ MSIDATABASE ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int **,scalar_t__*) ;

__attribute__((used)) static UINT FUNC_9( MSIDATABASE *VAR_6, LPCWSTR VAR_7, MSITABLE **VAR_8 )
{
    MSITABLE *VAR_9;
    UINT VAR_10;


    VAR_9 = FUNC_0( VAR_6, VAR_7 );
    if (VAR_9)
    {
        *VAR_8 = VAR_9;
        return VAR_1;
    }


    VAR_9 = FUNC_5( sizeof(MSITABLE) + FUNC_4( VAR_7 ) * sizeof(WCHAR) );
    if (!VAR_9)
        return VAR_0;

    VAR_9->row_count = 0;
    VAR_9->data = ((void*)0);
    VAR_9->data_persistent = ((void*)0);
    VAR_9->colinfo = ((void*)0);
    VAR_9->col_count = 0;
    VAR_9->persistent = VAR_3;
    FUNC_3( VAR_9->name, VAR_7 );

    if (!FUNC_7( VAR_7, VAR_5 ) || !FUNC_7( VAR_7, VAR_4 ))
        VAR_9->persistent = VAR_2;

    VAR_10 = FUNC_8( VAR_6, VAR_7, &VAR_9->colinfo, &VAR_9->col_count );
    if (VAR_10 != VAR_1)
    {
        FUNC_1( VAR_9 );
        return VAR_10;
    }
    VAR_10 = FUNC_6( VAR_6, VAR_9, VAR_6->storage );
    if (VAR_10 != VAR_1)
    {
        FUNC_1( VAR_9 );
        return VAR_10;
    }
    FUNC_2( &VAR_6->tables, &VAR_9->entry );
    *VAR_8 = VAR_9;
    return VAR_1;
}
