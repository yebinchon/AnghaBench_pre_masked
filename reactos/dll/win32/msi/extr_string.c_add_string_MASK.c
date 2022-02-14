
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int codepage; TYPE_1__* strings; } ;
typedef TYPE_2__ string_table ;
typedef enum StringPersistence { ____Placeholder_StringPersistence } StringPersistence ;
typedef int WCHAR ;
typedef int USHORT ;
typedef size_t UINT ;
struct TYPE_7__ {scalar_t__ nonpersistent_refcount; scalar_t__ persistent_refcount; } ;
typedef scalar_t__* LPWSTR ;


 int FUNC_0 (char*,int ,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,char const*,size_t,scalar_t__*,int) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;
 scalar_t__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,size_t,scalar_t__*,int,int ,int) ;
 size_t FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char const*,size_t*) ;

__attribute__((used)) static int FUNC_7( string_table *VAR_2, UINT VAR_3, const char *VAR_4, UINT VAR_5, USHORT VAR_6, enum StringPersistence VAR_7 )
{
    LPWSTR VAR_8;
    int VAR_9;

    if( !VAR_4 || !VAR_5 )
        return 0;
    if( VAR_3 > 0 )
    {
        if( VAR_2->strings[VAR_3].persistent_refcount ||
            VAR_2->strings[VAR_3].nonpersistent_refcount )
            return -1;
    }
    else
    {
        if (FUNC_6( VAR_2, VAR_4, &VAR_3 ) == VAR_0)
        {
            if (VAR_7 == VAR_1)
                VAR_2->strings[VAR_3].persistent_refcount += VAR_6;
            else
                VAR_2->strings[VAR_3].nonpersistent_refcount += VAR_6;
            return VAR_3;
        }
        VAR_3 = FUNC_5( VAR_2 );
        if( VAR_3 == -1 )
            return -1;
    }

    if( VAR_3 < 1 )
    {
        FUNC_0("invalid index adding %s (%d)\n", FUNC_2( VAR_4 ), VAR_3 );
        return -1;
    }


    VAR_9 = FUNC_1( VAR_2->codepage, 0, VAR_4, VAR_5, ((void*)0), 0 );
    VAR_8 = FUNC_3( (VAR_9+1)*sizeof(WCHAR) );
    if( !VAR_8 )
        return -1;
    FUNC_1( VAR_2->codepage, 0, VAR_4, VAR_5, VAR_8, VAR_9 );
    VAR_8[VAR_9] = 0;

    FUNC_4( VAR_2, VAR_3, VAR_8, VAR_9, VAR_6, VAR_7 );
    return VAR_3;
}
