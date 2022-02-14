
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
typedef size_t UINT ;
struct TYPE_8__ {size_t type; } ;
struct TYPE_7__ {int strings; } ;
struct TYPE_6__ {char* name; size_t num_cols; TYPE_4__* columns; TYPE_3__* db; } ;
typedef int MSIVIEW ;
typedef TYPE_1__ MSITABLEVIEW ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (char*,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t FUNC_1 (int *,size_t,size_t,size_t*) ;
 int FUNC_2 (char*,TYPE_1__ const*,size_t) ;
 size_t FUNC_3 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,int) ;
 char* FUNC_10 (int ,size_t,int *) ;
 int FUNC_11 (char*,char const*,size_t) ;
 char* VAR_7 ;

__attribute__((used)) static UINT FUNC_12( const MSITABLEVIEW *VAR_8, UINT VAR_9, WCHAR **VAR_10 )
{
    LPWSTR VAR_11, VAR_12 = ((void*)0);
    UINT VAR_13, VAR_14, VAR_15, VAR_16;
    DWORD VAR_17;
    LPCWSTR VAR_18;
    MSIVIEW *VAR_19 = (MSIVIEW *) VAR_8;

    FUNC_2("%p %d\n", VAR_8, VAR_9);

    VAR_17 = FUNC_6( VAR_8->name ) + 1;
    VAR_12 = FUNC_7( VAR_17*sizeof(WCHAR) );
    if ( !VAR_12 )
    {
       VAR_14 = VAR_2;
       goto err;
    }

    FUNC_5( VAR_12, VAR_8->name );

    for ( VAR_13 = 0; VAR_13 < VAR_8->num_cols; VAR_13++ )
    {
        VAR_15 = VAR_8->columns[VAR_13].type;
        if ( VAR_15 & VAR_5 )
        {
            WCHAR VAR_20[0x20];

            VAR_14 = FUNC_1( VAR_19, VAR_9, VAR_13+1, &VAR_16 );
            if ( VAR_14 != VAR_3 )
                goto err;

            if ( VAR_8->columns[VAR_13].type & VAR_6 )
            {
                VAR_18 = FUNC_10( VAR_8->db->strings, VAR_16, ((void*)0) );
                if ( !VAR_18 )
                {
                    VAR_14 = VAR_1;
                    goto err;
                }
            }
            else
            {
                static const WCHAR VAR_21[] = { '%','d',0 };
                UINT VAR_22 = FUNC_3( VAR_8->db, &VAR_8->columns[VAR_13], VAR_4 );

                switch( VAR_22 )
                {
                case 2:
                    FUNC_11( VAR_20, VAR_21, VAR_16-0x8000 );
                    break;
                case 4:
                    FUNC_11( VAR_20, VAR_21, VAR_16^0x80000000 );
                    break;
                default:
                    FUNC_0( "oops - unknown column width %d\n", VAR_22 );
                    VAR_14 = VAR_0;
                    goto err;
                }
                VAR_18 = VAR_20;
            }

            VAR_17 += FUNC_6( VAR_7 ) + FUNC_6( VAR_18 );
            VAR_11 = FUNC_9 ( VAR_12, VAR_17*sizeof(WCHAR) );
            if ( !VAR_11 )
            {
                VAR_14 = VAR_2;
                goto err;
            }
            VAR_12 = VAR_11;

            FUNC_4( VAR_12, VAR_7 );
            FUNC_4( VAR_12, VAR_18 );
        }
        else
           continue;
    }

    *VAR_10 = VAR_12;
    return VAR_3;

err:
    FUNC_8( VAR_12 );
    *VAR_10 = ((void*)0);
    return VAR_14;
}
