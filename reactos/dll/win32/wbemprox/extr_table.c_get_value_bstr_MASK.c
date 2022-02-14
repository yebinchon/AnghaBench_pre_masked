
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table {TYPE_1__* columns; } ;
typedef char WCHAR ;
typedef size_t UINT ;
struct TYPE_2__ {int type; } ;
typedef char const* LONGLONG ;
typedef scalar_t__ INT_PTR ;
typedef char* BSTR ;




 int VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (int *,size_t) ;
 scalar_t__ FUNC_3 (struct table const*,size_t,size_t,char const**) ;
 int FUNC_4 (char*,char const*,char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,char const*) ;

BSTR FUNC_7( const struct table *VAR_3, UINT VAR_4, UINT VAR_5 )
{
    static const WCHAR VAR_6[] = {'%','d',0};
    static const WCHAR VAR_7[] = {'%','u',0};
    static const WCHAR VAR_8[] = {'%','I','6','4','d',0};
    static const WCHAR VAR_9[] = {'%','I','6','4','u',0};
    static const WCHAR VAR_10[] = {'\"','%','s','\"',0};
    static const WCHAR VAR_11[] = {'T','R','U','E',0};
    static const WCHAR VAR_12[] = {'F','A','L','S','E',0};
    LONGLONG VAR_13;
    BSTR VAR_14;
    WCHAR VAR_15[22];
    UINT VAR_16;

    if (VAR_3->columns[VAR_5].type & VAR_0)
    {
        FUNC_0("array to string conversion not handled\n");
        return ((void*)0);
    }
    if (FUNC_3( VAR_3, VAR_4, VAR_5, &VAR_13 ) != VAR_2) return ((void*)0);

    switch (VAR_3->columns[VAR_5].type & VAR_1)
    {
    case 136:
        if (VAR_13) return FUNC_1( VAR_11 );
        else return FUNC_1( VAR_12 );

    case 135:
    case 131:
        if (!VAR_13) return ((void*)0);
        VAR_16 = FUNC_5( (const WCHAR *)(INT_PTR)VAR_13 ) + 2;
        if (!(VAR_14 = FUNC_2( ((void*)0), VAR_16 ))) return ((void*)0);
        FUNC_4( VAR_14, VAR_10, (const WCHAR *)(INT_PTR)VAR_13 );
        return VAR_14;

    case 134:
    case 133:
        FUNC_4( VAR_15, VAR_6, VAR_13 );
        return FUNC_1( VAR_15 );

    case 130:
    case 129:
        FUNC_4( VAR_15, VAR_7, VAR_13 );
        return FUNC_1( VAR_15 );

    case 132:
        FUNC_6( VAR_15, VAR_8, VAR_13 );
        return FUNC_1( VAR_15 );

    case 128:
        FUNC_6( VAR_15, VAR_9, VAR_13 );
        return FUNC_1( VAR_15 );

    default:
        FUNC_0("unhandled column type %u\n", VAR_3->columns[VAR_5].type & VAR_1);
        break;
    }
    return ((void*)0);
}
