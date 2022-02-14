
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_6__ {size_t num_cols; TYPE_1__* columns; int * name; } ;
struct TYPE_5__ {int type; } ;
typedef TYPE_2__ MSITABLEVIEW ;
typedef int MSIRECORD ;
typedef int * LPWSTR ;
typedef int DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_2__ const*,int *) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 int * FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int) ;
 int * VAR_4 ;

__attribute__((used)) static UINT FUNC_9( const MSITABLEVIEW *VAR_5, MSIRECORD *VAR_6, LPWSTR *VAR_7 )
{
    LPWSTR VAR_8 = ((void*)0), VAR_9, VAR_10;
    DWORD VAR_11;
    UINT VAR_12, VAR_13;

    FUNC_0("%p %p\n", VAR_5, VAR_6);

    VAR_11 = FUNC_4( VAR_5->name ) + 1;
    VAR_8 = FUNC_5( VAR_11*sizeof(WCHAR) );
    if ( !VAR_8 )
    {
       VAR_13 = VAR_0;
       goto err;
    }

    FUNC_3( VAR_8, VAR_5->name );

    for ( VAR_12 = 0; VAR_12 < VAR_5->num_cols; VAR_12++ )
    {
        if ( VAR_5->columns[VAR_12].type & VAR_3 )
        {
            VAR_9 = FUNC_6( VAR_6, VAR_12 + 1 );
            if ( !VAR_9 )
            {
                VAR_13 = VAR_0;
                goto err;
            }

            VAR_11 += FUNC_4( VAR_4 ) + FUNC_4 ( VAR_9 );
            VAR_10 = FUNC_8 ( VAR_8, VAR_11*sizeof(WCHAR) );
            if ( !VAR_10 )
            {
                VAR_13 = VAR_0;
                FUNC_7(VAR_9);
                goto err;
            }
            VAR_8 = VAR_10;

            FUNC_2( VAR_8, VAR_4 );
            FUNC_2( VAR_8, VAR_9 );

            FUNC_7( VAR_9 );
        }
        else
            continue;
    }

    *VAR_7 = FUNC_1( VAR_2, VAR_8 );
    FUNC_7( VAR_8 );

    return VAR_1;

err:
    FUNC_7 ( VAR_8 );
    *VAR_7 = ((void*)0);
    return VAR_13;
}
