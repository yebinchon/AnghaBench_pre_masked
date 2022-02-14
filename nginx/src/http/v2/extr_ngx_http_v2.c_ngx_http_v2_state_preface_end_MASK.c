
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
typedef int preface ;
struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_v2_connection_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (TYPE_2__*,int ) ;
 char* FUNC_1 (TYPE_2__*,char*,char*) ;
 char* FUNC_2 (TYPE_2__*,char*,char*,char* (*) (TYPE_2__*,char*,char*)) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,int,char*) ;
 scalar_t__ FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static u_char *
FUNC_6(ngx_http_v2_connection_t *VAR_2, u_char *VAR_3,
    u_char *VAR_4)
{
    static const u_char VAR_5[] = "\r\nSM\r\n\r\n";

    if ((size_t) (VAR_4 - VAR_3) < sizeof(VAR_5) - 1) {
        return FUNC_2(VAR_2, VAR_3, VAR_4,
                                      FUNC_6);
    }

    if (FUNC_5(VAR_3, VAR_5, sizeof(VAR_5) - 1) != 0) {
        FUNC_4(VAR_1, VAR_2->connection->log, 0,
                       "invalid http2 connection preface \"%*s\"",
                       sizeof(VAR_5) - 1, VAR_3);

        return FUNC_0(VAR_2, VAR_0);
    }

    FUNC_3(VAR_1, VAR_2->connection->log, 0,
                   "http2 preface verified");

    return FUNC_1(VAR_2, VAR_3 + sizeof(VAR_5) - 1, VAR_4);
}
