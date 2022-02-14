
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct attr {char* value; int name; } ;
typedef int session_t ;
struct TYPE_5__ {int path; TYPE_1__* connect; } ;
typedef TYPE_2__ request_t ;
typedef int cookie_t ;
typedef char WCHAR ;
struct TYPE_4__ {int servername; int * session; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int *,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct attr*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 struct attr* FUNC_7 (char*,int*) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (char*,char const*) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (char const*) ;
 char* FUNC_13 (char*,char) ;

BOOL FUNC_14( request_t *VAR_1, const WCHAR *VAR_2 )
{
    static const WCHAR VAR_3[] = {'p','a','t','h',0};
    static const WCHAR VAR_4[] = {'d','o','m','a','i','n',0};
    BOOL VAR_5 = VAR_0;
    WCHAR *VAR_6, *VAR_7;
    WCHAR *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    struct attr *VAR_10, *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    session_t *VAR_13 = VAR_1->connect->session;
    cookie_t *VAR_14;
    int VAR_15, VAR_16;

    VAR_15 = FUNC_12( VAR_2 );
    if (!(VAR_6 = FUNC_5( (VAR_15 + 1) * sizeof(WCHAR) ))) return VAR_0;
    FUNC_10( VAR_6, VAR_2 );

    VAR_7 = VAR_6;
    while (*VAR_7 && *VAR_7 != ';') VAR_7++;
    if (*VAR_7 == ';') *VAR_7++ = 0;
    if (!(VAR_14 = FUNC_8( VAR_6 )))
    {
        FUNC_6( VAR_6 );
        return VAR_0;
    }
    VAR_15 = FUNC_12( VAR_7 );
    while (VAR_15 && (VAR_10 = FUNC_7( VAR_7, &VAR_16 )))
    {
        if (!FUNC_9( VAR_10->name, VAR_4 ))
        {
            VAR_11 = VAR_10;
            VAR_8 = VAR_10->value;
        }
        else if (!FUNC_9( VAR_10->name, VAR_3 ))
        {
            VAR_12 = VAR_10;
            VAR_9 = VAR_10->value;
        }
        else
        {
            FUNC_0( "unhandled attribute %s\n", FUNC_2(VAR_10->name) );
            FUNC_3( VAR_10 );
        }
        VAR_15 -= VAR_16;
        VAR_7 += VAR_16;
    }
    if (!VAR_8 && !(VAR_8 = FUNC_11( VAR_1->connect->servername ))) goto end;
    if (!VAR_9 && !(VAR_9 = FUNC_11( VAR_1->path ))) goto end;

    if ((VAR_7 = FUNC_13( VAR_9, '/' )) && VAR_7 != VAR_9) *VAR_7 = 0;
    VAR_5 = FUNC_1( VAR_13, VAR_14, VAR_8, VAR_9 );

end:
    if (!VAR_5) FUNC_4( VAR_14 );
    if (VAR_11) FUNC_3( VAR_11 );
    else FUNC_6( VAR_8 );
    if (VAR_12) FUNC_3( VAR_12 );
    else FUNC_6( VAR_9 );
    FUNC_6( VAR_6 );
    return VAR_5;
}
