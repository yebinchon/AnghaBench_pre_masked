
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tcb_state ;
struct ProtocolState {int dummy; } ;
struct InteractiveData {int member_1; int member_0; } ;
struct BannerOutput {int dummy; } ;
struct Banner1 {int dummy; } ;
struct TYPE_10__ {int (* selftest ) () ;} ;
struct TYPE_9__ {int (* selftest ) () ;} ;
struct TYPE_8__ {int (* selftest ) () ;} ;
struct TYPE_7__ {int (* selftest ) () ;} ;
struct TYPE_6__ {int (* selftest ) () ;} ;


 int VAR_0 ;
 struct Banner1* FUNC_0 () ;
 int FUNC_1 (struct Banner1*) ;
 int FUNC_2 (struct Banner1*,struct ProtocolState*,unsigned char const*,unsigned int,struct BannerOutput*,struct InteractiveData*) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (struct BannerOutput*) ;
 int FUNC_4 (struct BannerOutput*) ;
 scalar_t__ FUNC_5 () ;
 unsigned char* FUNC_6 (struct BannerOutput*,int ) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (unsigned char const*,char*,int) ;
 int FUNC_9 (struct ProtocolState*,int ,int) ;
 int FUNC_10 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (char const*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;

int
FUNC_17()
{
    unsigned VAR_7;
    struct Banner1 *VAR_8;
    struct ProtocolState VAR_9[1];
    const unsigned char *VAR_10;
    unsigned VAR_11;
    struct BannerOutput VAR_12[1];
    static const char *VAR_13 =
        "HTTP/1.0 302 Redirect\r\n"
        "Date: Tue, 03 Sep 2013 06:50:01 GMT\r\n"
        "Connection: close\r\n"
        "Via: HTTP/1.1 ir14.fp.bf1.yahoo.com (YahooTrafficServer/1.2.0.13 [c s f ])\r\n"
        "Server: YTS/1.20.13\r\n"
        "Cache-Control: no-store\r\n"
        "Content-Type: text/html\r\n"
        "Content-Language: en\r\n"
        "Location: http://failsafe.fp.yahoo.com/404.html\r\n"
        "Content-Length: 227\r\n"
        "\r\n<title>hello</title>\n";
    VAR_10 = (const unsigned char *)VAR_13;
    VAR_11 = (unsigned)FUNC_11(VAR_13);





    if (FUNC_5() != 0) {
        FUNC_7(VAR_6, "banout: failed\n");
        return 1;
    }





    VAR_8 = FUNC_0();
    FUNC_3(VAR_12);

    FUNC_9(VAR_9, 0, sizeof(VAR_9[0]));

    for (VAR_7=0; VAR_7<VAR_11; VAR_7++) {
        struct InteractiveData VAR_14 = {0,0};

        FUNC_2(
                    VAR_8,
                    VAR_9,
                    VAR_10+VAR_7, 1,
                    VAR_12,
                    &VAR_14);
    }


    {
        const unsigned char *VAR_15 = FUNC_6(VAR_12, VAR_0);
        if (FUNC_8(VAR_15, "HTTP/1.0 302", 11) != 0) {
            FUNC_10("banner1: test failed\n");
            return 1;
        }
    }
    FUNC_4(VAR_12);
    FUNC_1(VAR_8);




    VAR_8 = FUNC_0();

    FUNC_9(VAR_9, 0, sizeof(VAR_9[0]));

    FUNC_2(
                    VAR_8,
                    VAR_9,
                    VAR_10, VAR_11,
                    VAR_12,
                    0);
    FUNC_1(VAR_8);






    {
        int VAR_16 = 0;

        VAR_16 = VAR_4.selftest();
        if (VAR_16) {
            FUNC_7(VAR_6, "SSL banner: selftest failed\n");
            return 1;
        }

        VAR_16 = VAR_3();
        if (VAR_16) {
            FUNC_7(VAR_6, "SMB banner: selftest failed\n");
            return 1;
        }

        VAR_16 = VAR_1.selftest();
        if (VAR_16) {
            FUNC_7(VAR_6, "HTTP banner: selftest failed\n");
            return 1;
        }

        VAR_16 = VAR_5.selftest();
        if (VAR_16) {
            FUNC_7(VAR_6, "Telnet banner: selftest failed\n");
            return 1;
        }

        VAR_16 = VAR_2.selftest();
        if (VAR_16) {
            FUNC_7(VAR_6, "RDP banner: selftest failed\n");
            return 1;
        }

        return VAR_16;
    }
}
