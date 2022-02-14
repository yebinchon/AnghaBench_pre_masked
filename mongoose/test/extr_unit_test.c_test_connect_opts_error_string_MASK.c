
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;
struct mg_connect_opts {char const** error_string; } ;
typedef int opts ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct mg_connect_opts*,int ,int) ;
 struct mg_connection* FUNC_3 (struct mg_mgr*,char*,int ,struct mg_connect_opts) ;
 int FUNC_4 (struct mg_mgr*) ;
 int FUNC_5 (struct mg_mgr*,int *) ;

__attribute__((used)) static const char *FUNC_6(void) {
  struct mg_mgr VAR_1;
  struct mg_connection *VAR_2;
  struct mg_connect_opts VAR_3;
  const char *VAR_4 = ((void*)0);

  FUNC_2(&VAR_3, 0, sizeof(VAR_3));
  VAR_3.error_string = &VAR_4;

  FUNC_5(&VAR_1, ((void*)0));
  FUNC_0((VAR_2 = FUNC_3(&VAR_1, "127.0.0.1:65537", VAR_0, VAR_3)) == ((void*)0));
  FUNC_0(VAR_4 != ((void*)0));
  FUNC_1(VAR_4, "cannot parse address");
  FUNC_4(&VAR_1);
  return ((void*)0);
}
