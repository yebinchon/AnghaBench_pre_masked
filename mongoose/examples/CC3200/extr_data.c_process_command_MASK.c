
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*,int*,int*) ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_2, unsigned char *VAR_3,
                            size_t VAR_4) {

  int VAR_5, VAR_6;
  if (FUNC_4((char *) VAR_3, "{\"t\":%d,\"v\":%d}", &VAR_5, &VAR_6) != 2) {
    FUNC_3(VAR_0, ("Invalid request: %.*s", (int) VAR_4, VAR_3));
    return;
  }
  if (VAR_5 == 1) {
    switch (VAR_6) {
      case '0': {
        FUNC_0(VAR_1);
        break;
      }
      case '1': {
        FUNC_1(VAR_1);
        break;
      }
      case '2': {
        FUNC_2(VAR_1);
        break;
      }
      default: {
        FUNC_3(VAR_0, ("Invalid value: %.*s", (int) VAR_4, VAR_3));
        return;
      }
    }
  } else {
    FUNC_3(VAR_0, ("Unknown command: %.*s", (int) VAR_4, VAR_3));
    return;
  }
}
