
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {scalar_t__ cb_dns_ref; int wait_dns; } ;
struct TYPE_8__ {scalar_t__ type; scalar_t__ self_ref; TYPE_1__ client; } ;
typedef TYPE_2__ lnet_userdata ;
typedef int ip_addr_t ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char const*,int *,int (*) (char const*,int *,TYPE_2__*),TYPE_2__*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (char const*,int *,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (int *) ;

int FUNC_11( lua_State *VAR_5 ) {
  lnet_userdata *VAR_6 = FUNC_10(VAR_5);
  if (!VAR_6 || VAR_6->type == VAR_4)
    return FUNC_2(VAR_5, "invalid user data");
  size_t VAR_7 = 0;
  const char *VAR_8 = FUNC_1(VAR_5, 2, &VAR_7);
  if (!VAR_8)
    return FUNC_2(VAR_5, "no domain specified");
  if (FUNC_5(VAR_5, 3) || FUNC_6(VAR_5, 3)) {
    FUNC_4(VAR_5, VAR_3, VAR_6->client.cb_dns_ref);
    FUNC_7(VAR_5, 3);
    VAR_6->client.cb_dns_ref = FUNC_3(VAR_5, VAR_3);
  }
  if (VAR_6->client.cb_dns_ref == VAR_2)
    return FUNC_2(VAR_5, "no callback specified");
  VAR_6->client.wait_dns ++;
  int VAR_9 = 0;
  if (VAR_6->self_ref == VAR_2) {
    VAR_9 = 1;
    FUNC_7(VAR_5, 1);
    VAR_6->self_ref = FUNC_3(VAR_5, VAR_3);
  }
  ip_addr_t VAR_10;
  err_t VAR_11 = FUNC_0(VAR_8, &VAR_10, FUNC_9, VAR_6);
  if (VAR_11 == VAR_1) {
    FUNC_9(VAR_8, &VAR_10, VAR_6);
  } else if (VAR_11 != VAR_0) {
    VAR_6->client.wait_dns --;
    if (VAR_9) {
      FUNC_4(VAR_5, VAR_3, VAR_6->self_ref);
      VAR_6->self_ref = VAR_2;
    }
    return FUNC_8(VAR_5, VAR_11);
  }
  return 0;
}
