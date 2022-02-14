
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_mgr {int dummy; } ;
struct mg_connection {int sock; } ;
struct TYPE_4__ {void* s_addr; } ;
struct TYPE_3__ {void* s_addr; } ;
struct ip_mreq {TYPE_2__ imr_interface; TYPE_1__ imr_multiaddr; } ;
typedef int listen ;
typedef int group ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (char const*) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char*,int ) ;
 int FUNC_3 (struct mg_mgr*) ;
 int FUNC_4 (struct mg_mgr*,int *) ;
 int FUNC_5 (struct mg_mgr*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*,char const*) ;
 scalar_t__ FUNC_8 (int ,int ,int ,char*,int) ;
 int FUNC_9 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char**) ;

int FUNC_12(int VAR_4, char **VAR_5) {
  struct mg_mgr VAR_6;
  const char *VAR_7 = "1234";
  struct mg_connection *VAR_8;
  struct ip_mreq VAR_9;
  const char *VAR_10 = ((void*)0);
  const char *VAR_11 = VAR_2;
  int VAR_12;


  for (VAR_12 = 1; VAR_12 < VAR_4; VAR_12++) {

    if (FUNC_10(VAR_5[VAR_12], "-i") == 0) {
      VAR_10 = VAR_5[++VAR_12];
    } else if (FUNC_10(VAR_5[VAR_12], "-g") == 0) {
      VAR_11 = VAR_5[++VAR_12];
    } else if (FUNC_10(VAR_5[VAR_12], "-p") == 0) {
      VAR_7 = VAR_5[++VAR_12];
    }
  }

  if (VAR_10 == ((void*)0)) {
    FUNC_11(VAR_5);
  }

  FUNC_4(&VAR_6, ((void*)0));
  {
    char VAR_13[256];
    FUNC_9(VAR_13, sizeof(VAR_13), "udp://%s", VAR_7);
    VAR_8 = FUNC_2(&VAR_6, VAR_13, VAR_3);
  }

  if (VAR_8 == ((void*)0)) {
    FUNC_6("cannot bind\n");
    FUNC_0(1);
  }

  VAR_9.imr_multiaddr.s_addr = FUNC_1(VAR_11);
  VAR_9.imr_interface.s_addr = FUNC_1(VAR_10);
  if (FUNC_8(VAR_8->sock, VAR_0, VAR_1, (char *) &VAR_9,
                 sizeof(VAR_9)) < 0) {
    FUNC_6("Adding multicast group error");
    FUNC_0(1);
  }

  FUNC_7("Starting mcast server on port %s listening to group %s\n", VAR_7,
         VAR_11);
  for (;;) {
    FUNC_5(&VAR_6, 1000);
  }
  FUNC_3(&VAR_6);

  return 0;
}
