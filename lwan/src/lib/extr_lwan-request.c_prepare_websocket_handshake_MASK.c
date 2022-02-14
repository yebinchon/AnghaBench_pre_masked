
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int websocket_uuid ;
struct lwan_request {int flags; TYPE_1__* conn; } ;
typedef int sha1_context ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;
typedef int digest ;
struct TYPE_2__ {int flags; int coro; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char*,int,int *) ;
 int FUNC_2 (void*,size_t const) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_5 ;
 char* FUNC_4 (struct lwan_request*,char*) ;
 int FUNC_5 (int *,unsigned char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned char const*,size_t const) ;
 int FUNC_8 (char const*,char*) ;
 size_t FUNC_9 (char const*) ;

__attribute__((used)) static enum lwan_http_status
FUNC_10(struct lwan_request *VAR_6, char **VAR_7)
{
    static const unsigned char VAR_8[] =
        "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
    unsigned char VAR_9[20];
    sha1_context VAR_10;

    if (FUNC_0(VAR_6->flags & VAR_4))
        return VAR_2;

    if (FUNC_0(!(VAR_6->conn->flags & VAR_0)))
        return VAR_1;

    const char *VAR_11 = FUNC_4(VAR_6, "Upgrade");
    if (FUNC_0(!VAR_11 || !FUNC_8(VAR_11, "websocket")))
        return VAR_1;

    const char *VAR_12 =
        FUNC_4(VAR_6, "Sec-WebSocket-Key");
    if (FUNC_0(!VAR_12))
        return VAR_1;
    const size_t VAR_13 = FUNC_9(VAR_12);
    if (FUNC_0(!FUNC_2((void *)VAR_12, VAR_13)))
        return VAR_1;

    FUNC_6(&VAR_10);
    FUNC_7(&VAR_10, (void *)VAR_12, VAR_13);
    FUNC_7(&VAR_10, VAR_8, sizeof(VAR_8) - 1);
    FUNC_5(&VAR_10, VAR_9);

    *VAR_7 = (char *)FUNC_1(VAR_9, sizeof(VAR_9), ((void*)0));
    if (FUNC_0(!*VAR_7))
        return VAR_2;
    FUNC_3(VAR_6->conn->coro, VAR_5, *VAR_7);

    return VAR_3;
}
