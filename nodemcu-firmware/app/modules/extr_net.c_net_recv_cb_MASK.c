
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16_t ;
struct pbuf {struct pbuf* next; int len; int payload; } ;
typedef int lua_State ;
struct TYPE_6__ {scalar_t__ cb_receive_ref; } ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ self_ref; TYPE_1__ client; } ;
typedef TYPE_2__ lnet_userdata ;
struct TYPE_8__ {int addr; } ;
typedef TYPE_3__ ip_addr_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (struct pbuf*) ;

__attribute__((used)) static void FUNC_9(lnet_userdata *VAR_4, struct pbuf *VAR_5, ip_addr_t *VAR_6, u16_t VAR_7) {
  if (VAR_4->client.cb_receive_ref == VAR_1) {
    FUNC_8(VAR_5);
    return;
  }

  int VAR_8 = 2;
  char VAR_9[16] = { 0, };
  if (VAR_4->type == VAR_3)
  {
    VAR_8 += 2;
    FUNC_1(VAR_9, VAR_0, FUNC_0(&VAR_6->addr));
  }

  lua_State *VAR_10 = FUNC_3();
  struct pbuf *VAR_11 = VAR_5;
  while (VAR_11)
  {
    FUNC_7(VAR_10, VAR_2, VAR_4->client.cb_receive_ref);
    FUNC_7(VAR_10, VAR_2, VAR_4->self_ref);
    FUNC_5(VAR_10, VAR_11->payload, VAR_11->len);
    if (VAR_4->type == VAR_3) {
      FUNC_4(VAR_10, VAR_7);
      FUNC_6(VAR_10, VAR_9);
    }
    FUNC_2(VAR_10, VAR_8, 0);
    VAR_11 = VAR_11->next;
  }
  FUNC_8(VAR_5);
}
