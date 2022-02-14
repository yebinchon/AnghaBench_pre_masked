
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ip_addr_t ;


 int VAR_0 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(void) {
  static uint32_t VAR_2 = 129;
  uint32_t VAR_3 = FUNC_3();
  if (VAR_3 != VAR_2) {
    switch (VAR_3) {
      case 129: {
        FUNC_1("Link down.\r\n");
        FUNC_0(VAR_0, 0);
        break;
      }
      case 128: {
        FUNC_1("Link up.\r\n");
        FUNC_0(VAR_0, 0);
        break;
      }
      default: {
        FUNC_1("IP: http://%s/\r\n", FUNC_2((const ip_addr_t *) &VAR_3));
        FUNC_0(VAR_0, VAR_0);
        break;
      }
    }
    VAR_2 = VAR_3;
  }

  FUNC_4(&VAR_1, 0);
}
