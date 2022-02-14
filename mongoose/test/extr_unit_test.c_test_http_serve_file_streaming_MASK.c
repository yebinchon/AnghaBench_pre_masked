
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int* user_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char const*,int ) ;
 struct mg_connection* FUNC_3 (struct mg_mgr*,char const*,int ) ;
 int FUNC_4 (struct mg_mgr*) ;
 int FUNC_5 (struct mg_mgr*,int *) ;
 int FUNC_6 (struct mg_connection*,char*) ;
 int FUNC_7 (struct mg_connection*) ;
 int FUNC_8 (struct mg_mgr*,int,int ,int*,void*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const char *FUNC_9(void) {
  struct mg_mgr VAR_3;
  struct mg_connection *VAR_4, *VAR_5;
  const char *VAR_6 = "127.0.0.1:7732";
  int VAR_7 = 0;
  FUNC_5(&VAR_3, ((void*)0));
  FUNC_0((VAR_4 = FUNC_2(&VAR_3, VAR_6, VAR_1)) != ((void*)0));
  FUNC_7(VAR_4);
  FUNC_0((VAR_5 = FUNC_3(&VAR_3, VAR_6, VAR_2)) != ((void*)0));
  FUNC_7(VAR_5);
  VAR_5->user_data = &VAR_7;
  FUNC_6(VAR_5, "GET / HTTP/1.0\r\n\r\n");
  FUNC_8(&VAR_3, 30, VAR_0, &VAR_7, (void *) 0);
  FUNC_1(VAR_7, 1);
  FUNC_4(&VAR_3);
  return ((void*)0);
}
