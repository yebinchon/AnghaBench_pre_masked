
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {char* user_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char const*,int ) ;
 struct mg_connection* FUNC_3 (struct mg_mgr*,char const*,int ) ;
 int FUNC_4 (struct mg_mgr*) ;
 int FUNC_5 (struct mg_mgr*,int *) ;
 int FUNC_6 (struct mg_connection*,char*) ;
 int FUNC_7 (struct mg_connection*) ;
 int FUNC_8 (struct mg_mgr*,int,int ,char*,void*) ;
 int VAR_1 ;

__attribute__((used)) static const char *FUNC_9(void) {
  struct mg_mgr VAR_2;
  struct mg_connection *VAR_3, *VAR_4;
  const char *VAR_5 = "127.0.0.1:7777";
  char VAR_6[100];
  FUNC_5(&VAR_2, ((void*)0));

  FUNC_0((VAR_3 = FUNC_2(&VAR_2, VAR_5, VAR_1)) != ((void*)0));
  FUNC_7(VAR_3);
  FUNC_0((VAR_4 = FUNC_3(&VAR_2, VAR_5, VAR_1)) != ((void*)0));
  FUNC_7(VAR_4);
  VAR_6[0] = '\0';
  VAR_4->user_data = VAR_6;
  FUNC_6(VAR_4, "GET / HTTP/1.1\r\n\r\n");
  FUNC_8(&VAR_2, 5, VAR_0, VAR_6, (void *) "");
  FUNC_1(VAR_6, "success");
  FUNC_4(&VAR_2);
  return ((void*)0);
}
