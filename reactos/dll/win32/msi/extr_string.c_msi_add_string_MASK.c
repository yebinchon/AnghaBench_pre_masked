
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* strings; } ;
typedef TYPE_2__ string_table ;
typedef enum StringPersistence { ____Placeholder_StringPersistence } StringPersistence ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_7__ {int nonpersistent_refcount; int persistent_refcount; } ;
typedef scalar_t__* LPWSTR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,size_t,int) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (scalar_t__*,int const*,int) ;
 scalar_t__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int const*,int,size_t*) ;
 int FUNC_5 (TYPE_2__*,size_t,scalar_t__*,int,int,int) ;
 size_t FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int const*) ;

int FUNC_8( string_table *VAR_2, const WCHAR *VAR_3, int VAR_4, enum StringPersistence VAR_5 )
{
    UINT VAR_6;
    LPWSTR VAR_7;

    if( !VAR_3 )
        return 0;

    if (VAR_4 < 0) VAR_4 = FUNC_7( VAR_3 );

    if( !VAR_3[0] && !VAR_4 )
        return 0;

    if (FUNC_4( VAR_2, VAR_3, VAR_4, &VAR_6) == VAR_0 )
    {
        if (VAR_5 == VAR_1)
            VAR_2->strings[VAR_6].persistent_refcount++;
        else
            VAR_2->strings[VAR_6].nonpersistent_refcount++;
        return VAR_6;
    }

    VAR_6 = FUNC_6( VAR_2 );
    if( VAR_6 == -1 )
        return -1;


    FUNC_0( "%s, n = %d len = %d\n", FUNC_1(VAR_3, VAR_4), VAR_6, VAR_4 );

    VAR_7 = FUNC_3( (VAR_4+1)*sizeof(WCHAR) );
    if( !VAR_7 )
        return -1;
    FUNC_2( VAR_7, VAR_3, VAR_4*sizeof(WCHAR) );
    VAR_7[VAR_4] = 0;

    FUNC_5( VAR_2, VAR_6, VAR_7, VAR_4, 1, VAR_5 );
    return VAR_6;
}
