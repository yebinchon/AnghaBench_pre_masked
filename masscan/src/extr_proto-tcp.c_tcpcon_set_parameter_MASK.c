
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TCP_ConnectionTable {unsigned int timeout_connection; unsigned int timeout_hello; struct Banner1* banner1; } ;
struct ProtocolParserStream {char* name; void* hello; void* hello_length; } ;
struct TYPE_2__ {struct ProtocolParserStream** tcp; } ;
struct Banner1 {int is_heartbleed; int is_ticketbleed; int is_poodle_sslv3; TYPE_1__ payloads; } ;


 struct ProtocolParserStream* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,...) ;
 void* FUNC_2 (size_t) ;
 struct ProtocolParserStream VAR_0 ;
 int VAR_1 ;
 struct ProtocolParserStream VAR_2 ;
 void* FUNC_3 (char*,size_t,void const*,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char const*) ;
 void* FUNC_6 (unsigned char**,unsigned int,char*,unsigned char const*,unsigned int) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (void const*,size_t) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (void*,int,int) ;
 void* FUNC_11 (int ) ;
 int VAR_3 ;
 void* FUNC_12 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_13 (char const*,char) ;
 scalar_t__ FUNC_14 (char const*,int ,int ) ;

void
FUNC_15(struct TCP_ConnectionTable *VAR_7,
                        const char *VAR_8,
                        size_t VAR_9,
                        const void *VAR_10)
{
    struct Banner1 *VAR_11 = VAR_7->banner1;







    if (FUNC_7(VAR_8, "http-user-agent")) {
        VAR_0.hello_length = FUNC_6(
                                (unsigned char**)&VAR_0.hello,
                                (unsigned)VAR_0.hello_length,
                                "User-Agent:",
                                (const unsigned char *)VAR_10,
                                (unsigned)VAR_9);
        return;
    }

    if (FUNC_7(VAR_8, "timeout") || FUNC_7(VAR_8, "connection-timeout")) {
        uint64_t VAR_12 = FUNC_8(VAR_10, VAR_9);
        VAR_7->timeout_connection = (unsigned)VAR_12;
        FUNC_1(1, "TCP connection-timeout = %u\n", VAR_7->timeout_connection);
        return;
    }
    if (FUNC_7(VAR_8, "hello-timeout")) {
        uint64_t VAR_13 = FUNC_8(VAR_10, VAR_9);
        VAR_7->timeout_hello = (unsigned)VAR_13;
        FUNC_1(1, "TCP hello-timeout = \"%.*s\"\n", (int)VAR_9, (const char *)VAR_10);
        FUNC_1(1, "TCP hello-timeout = %u\n", (unsigned)VAR_7->timeout_hello);
        return;
    }




    if (FUNC_7(VAR_8, "hello") && FUNC_7(VAR_10, "ssl")) {
        unsigned VAR_14;

        FUNC_1(2, "HELLO: setting SSL hello message\n");
        for (VAR_14=0; VAR_14<65535; VAR_14++) {
            VAR_11->payloads.tcp[VAR_14] = &VAR_2;
        }

        return;
    }




    if (FUNC_7(VAR_8, "hello") && FUNC_7(VAR_10, "http")) {
        unsigned VAR_15;

        FUNC_1(2, "HELLO: setting HTTP hello message\n");
        for (VAR_15=0; VAR_15<65535; VAR_15++) {
            VAR_11->payloads.tcp[VAR_15] = &VAR_0;
        }

        return;
    }




    if (FUNC_7(VAR_8, "hello") && FUNC_7(VAR_10, "smbv1")) {
        FUNC_9(&VAR_1);
        return;
    }




    if (FUNC_7(VAR_8, "heartbleed")) {
        unsigned VAR_16;



        VAR_2.hello = FUNC_11(VAR_3);
        VAR_2.hello_length = FUNC_12(VAR_2.hello);
        VAR_7->banner1->is_heartbleed = 1;

        for (VAR_16=0; VAR_16<65535; VAR_16++) {
            VAR_11->payloads.tcp[VAR_16] = &VAR_2;
        }

        return;
    }

    if (FUNC_7(VAR_8, "ticketbleed")) {
        unsigned VAR_17;



        VAR_2.hello = FUNC_11(VAR_5);
        VAR_2.hello_length = FUNC_12(VAR_2.hello);
        VAR_7->banner1->is_ticketbleed = 1;

        for (VAR_17=0; VAR_17<65535; VAR_17++) {
            VAR_11->payloads.tcp[VAR_17] = &VAR_2;
        }

        return;
    }




    if (FUNC_7(VAR_8, "poodle") || FUNC_7(VAR_8, "sslv3")) {
        unsigned VAR_18;
        void *VAR_19;



        VAR_19 = FUNC_11(VAR_4);
        VAR_2.hello = FUNC_10(VAR_19, 0x5600, 1);
        VAR_2.hello_length = FUNC_12(VAR_2.hello);
        VAR_7->banner1->is_poodle_sslv3 = 1;

        for (VAR_18=0; VAR_18<65535; VAR_18++) {
            VAR_11->payloads.tcp[VAR_18] = &VAR_2;
        }

        return;
    }






    if (FUNC_7(VAR_8, "hello-string")) {
        struct ProtocolParserStream *VAR_20;
        const char *VAR_21 = FUNC_13(VAR_8, '[');
        unsigned VAR_22;


        if (VAR_21 == ((void*)0)) {
            FUNC_5(VAR_6, "tcpcon: parmeter: expected array []: %s\n", VAR_8);
            FUNC_4(1);
        }
        VAR_22 = (unsigned)FUNC_14(VAR_21+1, 0, 0);

        VAR_20 = VAR_11->payloads.tcp[VAR_22];
        if (VAR_20 == ((void*)0)) {
            VAR_20 = FUNC_0(1, sizeof(*VAR_20));
            VAR_20->name = "(allocated)";
        }

        VAR_20->hello = FUNC_2(VAR_9);
        VAR_20->hello_length = FUNC_3((char*)VAR_20->hello, VAR_9, VAR_10, VAR_9);

        VAR_11->payloads.tcp[VAR_22] = VAR_20;
    }

}
