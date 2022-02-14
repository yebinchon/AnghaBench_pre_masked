
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TcpCfgPayloads {int port; char* payload_base64; struct TcpCfgPayloads* next; } ;
struct TYPE_2__ {struct TcpCfgPayloads* tcp; } ;
struct Masscan {TYPE_1__ payloads; scalar_t__ echo; } ;


 unsigned int FUNC_0 (char const*) ;
 int VAR_0 ;
 struct TcpCfgPayloads* FUNC_1 (int) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct Masscan *VAR_2, const char *VAR_3, const char *VAR_4)
{
    unsigned VAR_5;
    char *VAR_6;
    struct TcpCfgPayloads *VAR_7;

    if (VAR_2->echo) {
        for (VAR_7 = VAR_2->payloads.tcp; VAR_7; VAR_7 = VAR_7->next) {
            FUNC_4(VAR_2->echo, "hello-string[%u] = %s\n",
                    VAR_7->port, VAR_7->payload_base64);
        }
        return 0;
    }

    VAR_5 = FUNC_0(VAR_3);
    if (VAR_5 >= 65536) {
        FUNC_4(VAR_1, "%s: bad index\n", VAR_3);
        FUNC_3(1);
    }


    VAR_6 = FUNC_2(VAR_4);

    VAR_7 = FUNC_1(sizeof(*VAR_7));

    VAR_7->payload_base64 = VAR_6;
    VAR_7->port = VAR_5;
    VAR_7->next = VAR_2->payloads.tcp;
    VAR_2->payloads.tcp = VAR_7;
    return VAR_0;
}
