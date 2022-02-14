
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int connectionState; scalar_t__ isSecure; int port; int hostname; int path; TYPE_2__ const* extraHeaders; int expectedSecKey; } ;
typedef TYPE_1__ ws_info ;
typedef int uint8_t ;
struct espconn {scalar_t__ reverse; } ;
struct TYPE_10__ {char* member_0; char* member_1; } ;
typedef TYPE_2__ const header_t ;


 TYPE_2__ const* VAR_0 ;
 TYPE_2__ const* VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct espconn*,int ) ;
 int FUNC_2 (struct espconn*,int *,int) ;
 int FUNC_3 (struct espconn*,int *,int) ;
 int FUNC_4 (char**,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,int ,int ,int ) ;
 char* FUNC_8 (char*,TYPE_2__ const*,TYPE_2__ const*,TYPE_2__ const*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_10(void *VAR_5) {
  FUNC_0("Connected\n");
  struct espconn *VAR_6 = (struct espconn *) VAR_5;
  ws_info *VAR_7 = (ws_info *) VAR_6->reverse;
  VAR_7->connectionState = 3;

  FUNC_1(VAR_6, VAR_4);

  char *VAR_8;
  FUNC_4(&VAR_8, &VAR_7->expectedSecKey);

  header_t VAR_9[] = {
   {"Upgrade", "websocket"},
   {"Connection", "Upgrade"},
   {"Sec-WebSocket-Key", VAR_8},
   {"Sec-WebSocket-Version", "13"},
   {0}
  };

  const header_t *VAR_10 = VAR_7->extraHeaders ? VAR_7->extraHeaders : VAR_1;

  char VAR_11[VAR_3 + FUNC_9(VAR_7->path) + FUNC_9(VAR_7->hostname) +
   FUNC_5(VAR_0) + FUNC_5(VAR_9) + FUNC_5(VAR_10) + 2];

  int VAR_12 = FUNC_7(
                  VAR_11,
                  VAR_2,
                  VAR_7->path,
                  VAR_7->hostname,
                  VAR_7->port
    );

  VAR_12 = FUNC_8(VAR_11 + VAR_12, VAR_9, VAR_10, VAR_0, 0) - VAR_11;

  FUNC_6(VAR_8);
  FUNC_0("request: %s", VAR_11);
  if (VAR_7->isSecure)
    FUNC_2(VAR_6, (uint8_t *) VAR_11, VAR_12);
  else
    FUNC_3(VAR_6, (uint8_t *) VAR_11, VAR_12);
}
