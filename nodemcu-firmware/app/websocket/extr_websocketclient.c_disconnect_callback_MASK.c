
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int connectionState; int knownFailureCode; int (* onFailure ) (TYPE_2__*,int) ;int * conn; struct espconn* payloadBuffer; struct espconn* frameBuffer; struct espconn* expectedSecKey; struct espconn* path; struct espconn* hostname; int timeoutTimer; } ;
typedef TYPE_2__ ws_info ;
struct TYPE_5__ {struct espconn* tcp; } ;
struct espconn {TYPE_1__ proto; scalar_t__ reverse; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct espconn*) ;
 int FUNC_2 (struct espconn*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_6(void *VAR_0) {
  FUNC_0("disconnect_callback\n");
  struct espconn *VAR_1 = (struct espconn *) VAR_0;
  ws_info *VAR_2 = (ws_info *) VAR_1->reverse;

  VAR_2->connectionState = 4;

  FUNC_3(&VAR_2->timeoutTimer);

  FUNC_0("ws->hostname %d\n", VAR_2->hostname);
  FUNC_2(VAR_2->hostname);
  FUNC_0("ws->path %d\n ", VAR_2->path);
  FUNC_2(VAR_2->path);

  if (VAR_2->expectedSecKey != ((void*)0)) {
    FUNC_2(VAR_2->expectedSecKey);
  }

  if (VAR_2->frameBuffer != ((void*)0)) {
    FUNC_2(VAR_2->frameBuffer);
  }

  if (VAR_2->payloadBuffer != ((void*)0)) {
    FUNC_2(VAR_2->payloadBuffer);
  }

  if (VAR_1->proto.tcp != ((void*)0)) {
    FUNC_2(VAR_1->proto.tcp);
  }

  FUNC_0("conn %d\n", VAR_1);
  FUNC_1(VAR_1);

  FUNC_0("freeing conn1 \n");

  FUNC_2(VAR_1);
  VAR_2->conn = ((void*)0);

  if (VAR_2->onFailure) {
    if (VAR_2->knownFailureCode) VAR_2->onFailure(VAR_2, VAR_2->knownFailureCode);
    else VAR_2->onFailure(VAR_2, -99);
  }
}
