
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;
struct mg_bind_opts {char const** error_string; } ;
typedef int opts ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct mg_bind_opts*,int,int) ;
 struct mg_connection* FUNC_4 (struct mg_mgr*,char*,int ,struct mg_bind_opts) ;
 int FUNC_5 (struct mg_mgr*,int *) ;
 int FUNC_6 (struct mg_mgr*,int ) ;
 int FUNC_7 (struct mg_connection*) ;
 int FUNC_8 (char*,char const*) ;
 int VAR_1 ;

int FUNC_9(void) {
  FUNC_2(VAR_1);

  FUNC_0();

  {
    struct mg_mgr VAR_2;

    FUNC_5(&VAR_2, ((void*)0));



    const char *VAR_3;
    struct mg_bind_opts VAR_4;
    struct mg_connection *VAR_5 = ((void*)0);
    FUNC_3(&VAR_4, 0x00, sizeof(VAR_4));
    VAR_4.error_string = &VAR_3;
    VAR_5 = FUNC_4(
        &VAR_2, "80", VAR_0,
        VAR_4);
    if (VAR_5 == ((void*)0)) {
      FUNC_8("Failed to create listener: %s\n", VAR_3);
      return 1;
    }
    FUNC_7(VAR_5);

    for (;;) {
      FUNC_1();
      FUNC_6(&VAR_2, 0);
    }
  }
}
