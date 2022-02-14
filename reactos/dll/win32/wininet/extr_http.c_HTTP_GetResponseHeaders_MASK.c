
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ status_code; void* statusText; void* version; int receive_timeout; int netconn; } ;
typedef TYPE_1__ http_request_t ;
typedef char WCHAR ;
typedef char* LPWSTR ;
typedef int INT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*,char*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,char*,int,char*,int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 char* VAR_10 ;
 char* VAR_11 ;
 int FUNC_11 (void*) ;
 void* FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*,char*,int*) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*,char*,int) ;
 char* VAR_12 ;
 char* VAR_13 ;

__attribute__((used)) static DWORD FUNC_17(http_request_t *VAR_14, INT *VAR_15)
{
    INT VAR_16 = 0;
    WCHAR VAR_17[VAR_9];
    DWORD VAR_18 = VAR_9;
    INT VAR_19 = 0;
    char VAR_20[VAR_9];
    LPWSTR VAR_21 = ((void*)0), VAR_22 = ((void*)0);
    DWORD VAR_23 = VAR_1;
    BOOL VAR_24 = VAR_3;

    FUNC_6("-->\n");

    if(!FUNC_13(VAR_14->netconn))
        goto lend;


    FUNC_3( VAR_14 );

    FUNC_5( VAR_14->netconn, VAR_3, VAR_14->receive_timeout );
    do {



        VAR_18 = VAR_9;
        if ((VAR_23 = FUNC_14(VAR_14, VAR_20, &VAR_18)))
            goto lend;

        if (!VAR_18) goto lend;

        VAR_19 += VAR_18;
        FUNC_4( VAR_0, 0, VAR_20, VAR_18, VAR_17, VAR_9 );

        if (!FUNC_16(VAR_17, VAR_11, 4))
        {

            VAR_21 = FUNC_15( VAR_17, ' ' );
            if( !VAR_21 )
                goto lend;
            *VAR_21++=0;


            VAR_22 = FUNC_15( VAR_21, ' ' );
            if( VAR_22 )
                *VAR_22++=0;

            VAR_14->status_code = FUNC_8(VAR_21);

            FUNC_6("version [%s] status code [%s] status text [%s]\n",
               FUNC_10(VAR_17), FUNC_10(VAR_21), FUNC_10(VAR_22) );

            VAR_24 = VAR_14->status_code == VAR_7;
        }
        else if (!VAR_24)
        {
            FUNC_7("No status line at head of response (%s)\n", FUNC_10(VAR_17));

            FUNC_11(VAR_14->version);
            FUNC_11(VAR_14->statusText);

            VAR_14->status_code = VAR_8;
            VAR_14->version = FUNC_12(VAR_11);
            VAR_14->statusText = FUNC_12(VAR_12);

            goto lend;
        }
    } while (VAR_24);


    FUNC_2(VAR_14, VAR_13, VAR_21,
                       VAR_5 | VAR_4);

    FUNC_11(VAR_14->version);
    FUNC_11(VAR_14->statusText);

    VAR_14->version = FUNC_12(VAR_17);
    VAR_14->statusText = FUNC_12(VAR_22 ? VAR_22 : VAR_10);


    *(VAR_21-1) = ' ';
    if (VAR_22)
        *(VAR_22-1) = ' ';


    do
    {
        VAR_18 = VAR_9;
        if (!FUNC_14(VAR_14, VAR_20, &VAR_18) && VAR_18)
        {
            LPWSTR * VAR_25;

            FUNC_6("got line %s, now interpreting\n", FUNC_9(VAR_20));

            if (!VAR_20[0]) break;
            FUNC_4( VAR_0, 0, VAR_20, VAR_18, VAR_17, VAR_9 );

            VAR_25 = FUNC_1(VAR_17);
            if (VAR_25)
            {
                FUNC_2(VAR_14, VAR_25[0], VAR_25[1],
                                   VAR_6 );
                FUNC_0(VAR_25);
            }
        }
        else
        {
            VAR_16++;
            if (VAR_16 >= 2)
                break;
        }
    }while(1);

    VAR_23 = VAR_2;

lend:

    *VAR_15 = VAR_19;
    FUNC_6("<--\n");
    return VAR_23;
}
