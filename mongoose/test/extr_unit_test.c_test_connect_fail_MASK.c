
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {char* user_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mg_connection* FUNC_1 (struct mg_mgr*,char*,int ) ;
 int FUNC_2 (struct mg_mgr*) ;
 int FUNC_3 (struct mg_mgr*,int *) ;
 int FUNC_4 (struct mg_mgr*,int,int ,char*,void*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static const char *FUNC_6(void) {
  struct mg_mgr VAR_2;
  struct mg_connection *VAR_3;
  char VAR_4[100] = "0";

  FUNC_3(&VAR_2, ((void*)0));
  FUNC_0((VAR_3 = FUNC_1(&VAR_2, "127.0.0.1:33211", VAR_1)) != ((void*)0));
  VAR_3->user_data = VAR_4;
  FUNC_4(&VAR_2, 1, VAR_0, VAR_4, (void *) "0");
  FUNC_2(&VAR_2);




  FUNC_0(FUNC_5(VAR_4, "0") != 0);


  return ((void*)0);
}
