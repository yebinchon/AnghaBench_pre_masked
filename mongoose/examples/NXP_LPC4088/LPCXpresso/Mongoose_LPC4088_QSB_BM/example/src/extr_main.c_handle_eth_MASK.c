
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct netif {TYPE_1__* dhcp; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (struct netif*) ;
 int FUNC_7 (struct netif*) ;
 int FUNC_8 (struct netif*) ;
 int FUNC_9 (struct netif*) ;
 int FUNC_10 (char*) ;

void FUNC_11(struct netif *VAR_6) {

  uint32_t VAR_7 = FUNC_5();

  if (VAR_7 & VAR_2) {
    if (VAR_7 & VAR_3) {
      FUNC_0(0, 1);

      if (VAR_7 & VAR_5) {
        FUNC_1(VAR_1);
      } else {
        FUNC_2(VAR_1);
      }
      if (VAR_7 & VAR_4) {
        FUNC_3(VAR_1);
      } else {
        FUNC_4(VAR_1);
      }

      FUNC_9(VAR_6);
      FUNC_10("Link up\r\n");
    } else {
      FUNC_0(0, 0);
      FUNC_8(VAR_6);
      FUNC_10("Link down\r\n");
    }
  }

  FUNC_0(1, (VAR_6->dhcp->state == VAR_0));


  FUNC_6(VAR_6);


  FUNC_7(VAR_6);
}
