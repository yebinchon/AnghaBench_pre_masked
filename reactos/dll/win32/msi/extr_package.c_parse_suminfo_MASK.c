
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef int UINT ;
struct TYPE_3__ {int num_langids; int * langids; void* platform; int version; } ;
typedef int MSISUMMARYINFO ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int LANGID ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 void* FUNC_8 (scalar_t__*) ;
 scalar_t__* FUNC_9 (scalar_t__*,char) ;

__attribute__((used)) static UINT FUNC_10( MSISUMMARYINFO *VAR_7, MSIPACKAGE *VAR_8 )
{
    WCHAR *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    DWORD VAR_13, VAR_14;

    VAR_8->version = FUNC_7( VAR_7, VAR_4 );
    FUNC_0("version: %d\n", VAR_8->version);

    VAR_9 = FUNC_6( VAR_7, VAR_5 );
    if (!VAR_9)
        return VAR_3;

    FUNC_0("template: %s\n", FUNC_3(VAR_9));

    VAR_10 = FUNC_9( VAR_9, ';' );
    if (!VAR_10)
    {
        FUNC_1("invalid template string %s\n", FUNC_3(VAR_9));
        FUNC_5( VAR_9 );
        return VAR_2;
    }
    *VAR_10 = 0;
    VAR_12 = VAR_9;
    if ((VAR_11 = FUNC_9( VAR_12, ',' ))) *VAR_11 = 0;
    VAR_8->platform = FUNC_8( VAR_12 );
    while (VAR_8->platform == VAR_6 && VAR_11)
    {
        VAR_12 = VAR_11 + 1;
        if ((VAR_11 = FUNC_9( VAR_12, ',' ))) *VAR_11 = 0;
        VAR_8->platform = FUNC_8( VAR_12 );
    }
    if (VAR_8->platform == VAR_6)
    {
        FUNC_1("unknown platform %s\n", FUNC_3(VAR_9));
        FUNC_5( VAR_9 );
        return VAR_0;
    }
    VAR_10++;
    if (!*VAR_10)
    {
        FUNC_5( VAR_9 );
        return VAR_3;
    }
    VAR_14 = 1;
    for (VAR_11 = VAR_10; (VAR_11 = FUNC_9( VAR_11, ',' )); VAR_11++) VAR_14++;

    VAR_8->langids = FUNC_4( VAR_14 * sizeof(LANGID) );
    if (!VAR_8->langids)
    {
        FUNC_5( VAR_9 );
        return VAR_1;
    }

    VAR_13 = 0;
    while (*VAR_10)
    {
        VAR_11 = FUNC_9( VAR_10, ',' );
        if (VAR_11) *VAR_11 = 0;
        VAR_8->langids[VAR_13] = FUNC_2( VAR_10 );
        if (!VAR_11) break;
        VAR_10 = VAR_11 + 1;
        VAR_13++;
    }
    VAR_8->num_langids = VAR_13 + 1;

    FUNC_5( VAR_9 );
    return VAR_3;
}
