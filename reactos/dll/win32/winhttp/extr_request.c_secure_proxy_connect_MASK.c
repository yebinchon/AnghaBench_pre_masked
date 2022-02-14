
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int netconn; TYPE_2__* connect; } ;
typedef TYPE_1__ request_t ;
struct TYPE_7__ {int hostport; int hostname; } ;
typedef TYPE_2__ connect_t ;
typedef char WCHAR ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPSTR ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char const*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int ,scalar_t__,int,int*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__,char const*,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static BOOL FUNC_9( request_t *VAR_2 )
{
    static const WCHAR VAR_3[] = {'C','O','N','N','E','C','T',0};
    static const WCHAR VAR_4[] = {'%','s',':','%','u',0};
    BOOL VAR_5 = VAR_0;
    LPWSTR VAR_6;
    connect_t *VAR_7 = VAR_2->connect;

    VAR_6 = FUNC_1( (FUNC_8( VAR_7->hostname ) + 13) * sizeof(WCHAR) );
    if (VAR_6)
    {
        LPWSTR VAR_8;

        FUNC_5( VAR_6, VAR_4, VAR_7->hostname, VAR_7->hostport );
        VAR_8 = FUNC_0( VAR_2, VAR_3,
            VAR_6, VAR_1 );
        FUNC_2( VAR_6 );
        if (VAR_8)
        {
            LPSTR VAR_9 = FUNC_6( VAR_8 );

            FUNC_2( VAR_8 );
            if (VAR_9)
            {
                int VAR_10 = FUNC_7( VAR_9 ), VAR_11;

                VAR_5 = FUNC_3( VAR_2->netconn, VAR_9, VAR_10, &VAR_11 );
                FUNC_2( VAR_9 );
                if (VAR_5)
                    VAR_5 = FUNC_4( VAR_2 );
            }
        }
    }
    return VAR_5;
}
