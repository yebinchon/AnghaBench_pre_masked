
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {struct big_payload_params* user_data; } ;
struct big_payload_params {char* buf; int size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char const*,int ) ;
 struct mg_connection* FUNC_3 (struct mg_mgr*,char const*,int ) ;
 int FUNC_4 (struct mg_mgr*) ;
 int FUNC_5 (struct mg_mgr*,int *) ;
 int FUNC_6 (struct mg_connection*,char*,int *) ;
 int FUNC_7 (struct mg_connection*) ;
 int FUNC_8 (struct mg_mgr*,int,int ,char*,void*) ;

__attribute__((used)) static const char *FUNC_9(void) {
  struct mg_mgr VAR_3;
  struct mg_connection *VAR_4;
  const char *VAR_5 = "127.0.0.1:7778";
  char VAR_6[20] = "";
  struct big_payload_params VAR_7;
  VAR_7.buf = VAR_6;

  FUNC_5(&VAR_3, ((void*)0));

  FUNC_0((VAR_4 = FUNC_2(&VAR_3, VAR_5, VAR_1)) != ((void*)0));
  FUNC_7(VAR_4);


  FUNC_0((VAR_4 = FUNC_3(&VAR_3, VAR_5, VAR_2)) != ((void*)0));
  FUNC_7(VAR_4);
  VAR_7.size = 8192;
  VAR_4->user_data = &VAR_7;
  VAR_7.buf[0] = '\0';
  FUNC_6(VAR_4, "/ws", ((void*)0));
  FUNC_8(&VAR_3, 1, VAR_0, VAR_7.buf, (void *) "");


  FUNC_1(VAR_6, "success");


  FUNC_0((VAR_4 = FUNC_3(&VAR_3, VAR_5, VAR_2)) != ((void*)0));
  FUNC_7(VAR_4);
  VAR_7.size = 65535;
  VAR_4->user_data = &VAR_7;
  VAR_7.buf[0] = '\0';
  FUNC_6(VAR_4, "/ws", ((void*)0));
  FUNC_8(&VAR_3, 1, VAR_0, VAR_7.buf, (void *) "");
  FUNC_4(&VAR_3);


  FUNC_1(VAR_6, "success");

  return ((void*)0);
}
