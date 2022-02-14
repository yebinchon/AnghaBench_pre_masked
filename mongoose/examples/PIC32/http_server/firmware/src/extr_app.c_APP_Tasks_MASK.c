
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mg_connection {int dummy; } ;
struct TYPE_6__ {int state; } ;
struct TYPE_5__ {int tcpip; } ;
struct TYPE_4__ {int member_0; int* v; int Val; } ;
typedef int TCPIP_NET_HANDLE ;
typedef int SYS_STATUS ;
typedef TYPE_1__ IPV4_ADDR ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 struct mg_connection* FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct mg_connection*) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

void FUNC_11 ( void )
{
    SYS_STATUS VAR_5;
    const char *VAR_6, *VAR_7;
    static IPV4_ADDR VAR_8[2] = { {-1}, {-1} };
    IPV4_ADDR VAR_9;
    TCPIP_NET_HANDLE VAR_10;
    int VAR_11, VAR_12;


    switch ( VAR_1.state )
    {

        case 129:
        {
            VAR_5 = FUNC_7(VAR_4.tcpip);
            if(VAR_5 < 0)
            {
                FUNC_0(" APP: TCP/IP stack initialization failed!\r\n");
                VAR_1.state = 133;
            }
            else if(VAR_5 == VAR_0)
            {


                VAR_12 = FUNC_6();
                for(VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
                {

                    VAR_10 = FUNC_2(VAR_11);
                    VAR_6 = FUNC_5(VAR_10);
                    VAR_7 = FUNC_4(VAR_10);




                    FUNC_1("    Interface %s on host %s - NBNS disabled\r\n", VAR_6, VAR_7);


                }
                VAR_1.state = 128;

            }
            break;
        }
        case 128:



            VAR_12 = FUNC_6();

            for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
            {
                VAR_10 = FUNC_2(VAR_11);
                VAR_9.Val = FUNC_3(VAR_10);
                if(VAR_8[VAR_11].Val != VAR_9.Val)
                {
                    VAR_8[VAR_11].Val = VAR_9.Val;

                    FUNC_0(FUNC_5(VAR_10));
                    FUNC_0(" IP Address: ");
                    FUNC_1("%d.%d.%d.%d \r\n", VAR_9.v[0], VAR_9.v[1], VAR_9.v[2], VAR_9.v[3]);
                    if (VAR_9.v[0] != 0 && VAR_9.v[0] != 169)
                    {
                        VAR_1.state = 130;
                    }
                }
            }
            break;
        case 130:
        {
            FUNC_1("Starting listening on port 8000\r\n");
            struct mg_connection *VAR_13 = FUNC_8(&VAR_3, "8000", VAR_2);
            if (VAR_13 == ((void*)0)) {
              FUNC_1("Failed to create listener\n\r");
              VAR_1.state = 133;
              break;
            }
            FUNC_10(VAR_13);
            FUNC_1("Listener started\r\n");

            VAR_1.state = 131;
            break;
        }
        case 131:
        {
            FUNC_9(&VAR_3, 1000);
            break;
        }
        case 133:
        {
            FUNC_1("Server stopped\n\r");
            VAR_1.state = 132;
            break;
        }
        case 132:
        {
            break;
        }

        default:
        {

            break;
        }
    }
}
