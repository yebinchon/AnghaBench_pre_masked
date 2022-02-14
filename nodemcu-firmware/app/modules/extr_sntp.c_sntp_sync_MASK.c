
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct netif {TYPE_1__* dhcp; } ;
typedef int lua_State ;
struct TYPE_7__ {scalar_t__ addr; } ;
typedef TYPE_2__ ip_addr_t ;
struct TYPE_8__ {scalar_t__ pcb; void* list_ref; void* err_cb_ref; void* sync_cb_ref; } ;
struct TYPE_6__ {TYPE_2__ offered_ntp_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 char* FUNC_2 (TYPE_2__) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,char const*) ;
 void* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,void*) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,char const*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,char*,int) ;
 TYPE_3__* VAR_2 ;
 char* FUNC_17 (int *) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (scalar_t__) ;

__attribute__((used)) static int FUNC_20 (lua_State *VAR_3)
{
  FUNC_14(VAR_3, 0);

  const char *VAR_4 = 0;


  if (VAR_2)
    return FUNC_4 (VAR_3, "sync in progress");

  char *VAR_5;
  VAR_5 = FUNC_17(VAR_3);
  if (VAR_5) {
    do { VAR_4 = VAR_5; goto error; } while (0);
  }

  if (!FUNC_7 (VAR_3, 2))
  {
    FUNC_12 (VAR_3, 2);
    VAR_2->sync_cb_ref = FUNC_5 (VAR_3, VAR_0);
  }

  if (!FUNC_7 (VAR_3, 3))
  {
    FUNC_12 (VAR_3, 3);
    VAR_2->err_cb_ref = FUNC_5 (VAR_3, VAR_0);
  }


  if (!FUNC_7 (VAR_3, 1))
  {
    VAR_1 = 0;
    if (FUNC_8(VAR_3, 1)) {

      FUNC_12(VAR_3, 1);
    } else {
      size_t VAR_6;
      const char *VAR_7 = FUNC_3(VAR_3, 1, &VAR_6);
      if (VAR_6>128 || VAR_7 == ((void*)0))
        do { VAR_4 = "need <128 hostname"; goto error; } while (0);


      FUNC_9(VAR_3);
      FUNC_10(VAR_3, 1);
      FUNC_11(VAR_3, VAR_7);
      FUNC_13(VAR_3, -3);
    }
  } else if (VAR_1 == 0) {
    FUNC_9(VAR_3);
    struct netif *VAR_8 = (struct netif *)FUNC_0(0x00);
    if (VAR_8->dhcp && VAR_8->dhcp->offered_ntp_addr.addr) {
  ip_addr_t VAR_9 = VAR_8->dhcp->offered_ntp_addr;
        FUNC_10(VAR_3, 1);
        FUNC_11(VAR_3, FUNC_2(VAR_9));
        FUNC_13(VAR_3, -3);
    } else {

      int VAR_10;
      for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
        FUNC_10(VAR_3, VAR_10 + 1);
        char VAR_11[64];
        FUNC_16(VAR_11, "%d.nodemcu.pool.ntp.org", VAR_10);
        FUNC_11(VAR_3, VAR_11);
        FUNC_13(VAR_3, -3);
      }
    }
  }

  FUNC_6 (VAR_3, VAR_0, VAR_2->list_ref);
  VAR_2->list_ref = FUNC_5(VAR_3, VAR_0);
  FUNC_15(VAR_3);

  if (!FUNC_7(VAR_3, 4)) {
    FUNC_14(VAR_3, 1);
  }

  return 0;

error:
  if (VAR_2)
  {
    if (VAR_2->pcb)
      FUNC_19 (VAR_2->pcb);
    FUNC_1 (VAR_2);
    VAR_2 = 0;
  }
  return FUNC_4 (VAR_3, VAR_4);
}
