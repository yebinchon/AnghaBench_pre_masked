
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct mg_mgr {int dummy; } ;
struct mg_http_endpoint_opts {char const* auth_file; char* auth_domain; } ;
struct mg_connection {char* user_data; } ;
typedef int local_addr ;
typedef int ep_opts ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mg_http_endpoint_opts*,int ,int) ;
 struct mg_connection* FUNC_1 (struct mg_mgr*,char*,int ) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char*,int ) ;
 int FUNC_3 (struct mg_mgr*) ;
 int FUNC_4 (struct mg_mgr*,int *) ;
 int FUNC_5 (struct mg_connection*,char*,int ,struct mg_http_endpoint_opts) ;
 int FUNC_6 (struct mg_connection*) ;
 int FUNC_7 (struct mg_connection*,char const*,int ) ;
 int FUNC_8 (struct mg_mgr*,int,int ,char*,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_10(char *VAR_5, const char *VAR_6,
                        const char *VAR_7, va_list VAR_8) {
  struct mg_mgr VAR_9;
  struct mg_connection *VAR_10;
  struct mg_http_endpoint_opts VAR_11;
  char VAR_12[50];


  FUNC_4(&VAR_9, ((void*)0));

  FUNC_9(VAR_12, sizeof(VAR_12), "127.0.0.1:%d", VAR_3++);
  VAR_10 = FUNC_1(&VAR_9, VAR_12, VAR_1);
  FUNC_6(VAR_10);
  FUNC_0(&VAR_11, 0, sizeof(VAR_11));
  VAR_11.auth_file = VAR_6;
  VAR_11.auth_domain = "foo.com";
  FUNC_5(VAR_10, "/secret", VAR_4, VAR_11);


  VAR_10 = FUNC_2(&VAR_9, VAR_12, VAR_2);
  FUNC_6(VAR_10);
  VAR_10->user_data = VAR_5;
  FUNC_7(VAR_10, VAR_7, VAR_8);


  VAR_5[0] = '\0';
  FUNC_8(&VAR_9, 5, VAR_0, VAR_5, (void *) "");

  FUNC_3(&VAR_9);
}
