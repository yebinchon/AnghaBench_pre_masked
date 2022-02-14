
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ptest ;
struct TYPE_5__ {int iProtocol; int dwServiceFlags1; int iSocketType; int iVersion; int iAddressFamily; int szProtocol; } ;
typedef TYPE_1__ WSAPROTOCOL_INFOA ;
typedef int INT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int*,TYPE_1__*,scalar_t__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
    INT VAR_5, VAR_6, VAR_7, VAR_8;
    DWORD VAR_9 = 0, VAR_10;
    WSAPROTOCOL_INFOA VAR_11, *VAR_12;
    INT VAR_13[] = {0xdead, VAR_0, 0xcafe, VAR_1, 0xbeef, 0};

    VAR_5 = FUNC_3( ((void*)0), ((void*)0), &VAR_9 );
    FUNC_6( VAR_5 == VAR_2, "WSAEnumProtocolsA() succeeded unexpectedly\n");
    VAR_10 = FUNC_4();
    FUNC_6( VAR_10 == VAR_4, "Expected 10055, received %d\n", VAR_10);

    VAR_9 = 0;

    VAR_5 = FUNC_3( ((void*)0), &VAR_11, &VAR_9 );
    FUNC_6( VAR_5 == VAR_2, "WSAEnumProtocolsA() succeeded unexpectedly\n");
    VAR_10 = FUNC_4();
    FUNC_6( VAR_10 == VAR_4, "Expected 10055, received %d\n", VAR_10);

    VAR_12 = FUNC_1( FUNC_0(), 0, VAR_9 );

    if (VAR_12)
    {
        VAR_5 = FUNC_3( ((void*)0), VAR_12, &VAR_9 );
        FUNC_6( VAR_5 != VAR_2, "WSAEnumProtocolsA() failed unexpectedly: %d\n",
            FUNC_4() );

        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
        {
            FUNC_6( FUNC_7( VAR_12[VAR_6].szProtocol ), "No protocol name found\n" );
            FUNC_8( VAR_12[VAR_6].iAddressFamily, VAR_12[VAR_6].iVersion,
                                VAR_12[VAR_6].iSocketType, VAR_12[VAR_6].iProtocol,
                                VAR_12[VAR_6].dwServiceFlags1);
        }

        FUNC_2( FUNC_0(), 0, VAR_12 );
    }


    VAR_5 = FUNC_3( VAR_13, ((void*)0), &VAR_9 );
    FUNC_6( VAR_5 == VAR_2, "WSAEnumProtocolsA() succeeded unexpectedly\n");
    VAR_10 = FUNC_4();
    FUNC_6( VAR_10 == VAR_4 || FUNC_5(VAR_10 == VAR_3) ,
       "Expected 10055, received %d\n", VAR_10);

    VAR_12 = FUNC_1( FUNC_0(), 0, VAR_9 );

    if (VAR_12)
    {
        VAR_5 = FUNC_3( VAR_13, VAR_12, &VAR_9 );
        FUNC_6( VAR_5 != VAR_2, "WSAEnumProtocolsA() failed unexpectedly: %d\n",
            FUNC_4() );
        FUNC_6( VAR_5 >= 2, "Expected at least 2 items, received %d\n", VAR_5);

        for (VAR_6 = VAR_8 = 0; VAR_6 < VAR_5; VAR_6++)
            for (VAR_7 = 0; VAR_7 < sizeof(VAR_13) / sizeof(VAR_13[0]); VAR_7++)
                if (VAR_12[VAR_6].iProtocol == VAR_13[VAR_7])
                {
                    VAR_8 |= 1 << VAR_7;
                    break;
                }
        FUNC_6(VAR_8 == 0x0A, "Expected 2 bits represented as 0xA, received 0x%x\n", VAR_8);

        FUNC_2( FUNC_0(), 0, VAR_12 );
    }
}
