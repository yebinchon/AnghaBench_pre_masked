
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int connectionState; int isSecure; int port; struct espconn* conn; scalar_t__ unhealthyPoints; scalar_t__ payloadOriginalOpCode; scalar_t__ payloadBufferLen; int * payloadBuffer; scalar_t__ frameBufferLen; int * frameBuffer; scalar_t__ knownFailureCode; int * expectedSecKey; void* path; void* hostname; int (* onFailure ) (TYPE_2__*,int) ;} ;
typedef TYPE_2__ ws_info ;
struct TYPE_9__ {TYPE_3__* tcp; } ;
struct espconn {TYPE_2__* reverse; TYPE_1__ proto; int state; int type; } ;
typedef int ip_addr_t ;
typedef int hostname ;
struct TYPE_11__ {int remote_port; int local_port; } ;
typedef TYPE_3__ esp_tcp ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (char*,int *,struct espconn*) ;
 scalar_t__ FUNC_4 (struct espconn*,char*,int *,int (*) (char*,int *,struct espconn*)) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char const*,scalar_t__) ;
 char* FUNC_7 (char const*,char) ;
 void* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char*,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (TYPE_2__*,int) ;

void FUNC_15(ws_info *VAR_8, const char *VAR_9) {
  FUNC_0("ws_connect called\n");

  if (VAR_8 == ((void*)0)) {
    FUNC_0("ws_connect ws_info argument is null!");
    return;
  }

  if (VAR_9 == ((void*)0)) {
    FUNC_0("url is null!");
    return;
  }


  bool VAR_10 = FUNC_10(VAR_9, VAR_7, FUNC_9(VAR_7)) == 0;

  if (VAR_10) {
    VAR_9 += FUNC_9(VAR_7);
  } else {
    if (FUNC_10(VAR_9, VAR_6, FUNC_9(VAR_6)) != 0) {
      FUNC_0("Failed to extract protocol from: %s\n", VAR_9);
      if (VAR_8->onFailure) VAR_8->onFailure(VAR_8, -1);
      return;
    }
    VAR_9 += FUNC_9(VAR_6);
  }


  char *VAR_11 = FUNC_7(VAR_9, '/');


  char VAR_12[256];
  if (VAR_11) {
    if (VAR_11 - VAR_9 >= sizeof(VAR_12)) {
      FUNC_0("Hostname too large");
      if (VAR_8->onFailure) VAR_8->onFailure(VAR_8, -2);
      return;
    }
    FUNC_6(VAR_12, VAR_9, VAR_11 - VAR_9);
    VAR_12[VAR_11 - VAR_9] = '\0';
  } else {

    FUNC_6(VAR_12, VAR_9, FUNC_9(VAR_9));
    VAR_12[FUNC_9(VAR_9)] = '\0';
    VAR_11 = "/";
  }


  char *VAR_13 = FUNC_7(VAR_12, ':');
  int VAR_14;
  if (VAR_13) {
    VAR_14 = FUNC_1(VAR_13 + 1);
    if (VAR_14 <= 0 || VAR_14 > VAR_4) {
      FUNC_0("Invalid port number\n");
      if (VAR_8->onFailure) VAR_8->onFailure(VAR_8, -3);
      return;
    }
    VAR_12[FUNC_9(VAR_12) - FUNC_9(VAR_13)] = '\0';
  } else {
    VAR_14 = VAR_10 ? VAR_5 : VAR_3;
  }

  if (FUNC_9(VAR_12) == 0) {
    FUNC_0("Failed to extract hostname\n");
    if (VAR_8->onFailure) VAR_8->onFailure(VAR_8, -4);
    return;
  }

  FUNC_0("secure protocol = %d\n", VAR_10);
  FUNC_0("hostname = %s\n", VAR_12);
  FUNC_0("port = %d\n", VAR_14);
  FUNC_0("path = %s\n", VAR_11);


  VAR_8->connectionState = 1;
  VAR_8->isSecure = VAR_10;
  VAR_8->hostname = FUNC_8(VAR_12);
  VAR_8->port = VAR_14;
  VAR_8->path = FUNC_8(VAR_11);
  VAR_8->expectedSecKey = ((void*)0);
  VAR_8->knownFailureCode = 0;
  VAR_8->frameBuffer = ((void*)0);
  VAR_8->frameBufferLen = 0;
  VAR_8->payloadBuffer = ((void*)0);
  VAR_8->payloadBufferLen = 0;
  VAR_8->payloadOriginalOpCode = 0;
  VAR_8->unhealthyPoints = 0;


  struct espconn *VAR_15 = (struct espconn *) FUNC_2(1,sizeof(struct espconn));
  VAR_15->type = VAR_2;
  VAR_15->state = VAR_1;
  VAR_15->proto.tcp = (esp_tcp *) FUNC_2(1,sizeof(esp_tcp));
  VAR_15->proto.tcp->local_port = FUNC_5();
  VAR_15->proto.tcp->remote_port = VAR_8->port;

  VAR_15->reverse = VAR_8;
  VAR_8->conn = VAR_15;


  ip_addr_t VAR_16;
  err_t VAR_17 = FUNC_4(VAR_15, VAR_12, &VAR_16, FUNC_3);

  if (VAR_17 == VAR_0) {
    FUNC_0("DNS pending\n");
  } else {
    FUNC_3(VAR_12, &VAR_16, VAR_15);
  }

  return;
}
