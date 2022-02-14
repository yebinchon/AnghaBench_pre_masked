
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {void* user_data; int flags; } ;
struct mg_connect_opts {int flags; void* user_data; } ;
typedef int opts ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mg_connect_opts*,int ,int) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char*,int ,struct mg_connect_opts) ;
 int FUNC_3 (struct mg_mgr*) ;
 int FUNC_4 (struct mg_mgr*,int *) ;

__attribute__((used)) static const char *FUNC_5(void) {
  struct mg_mgr VAR_3;
  struct mg_connection *VAR_4;
  struct mg_connect_opts VAR_5;

  FUNC_1(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.user_data = (void *) 0xdeadbeef;
  VAR_5.flags = VAR_0;
  VAR_5.flags |= VAR_1;

  FUNC_4(&VAR_3, ((void*)0));
  FUNC_0((VAR_4 = FUNC_2(&VAR_3, "127.0.0.1:33211", VAR_2, VAR_5)) != ((void*)0));
  FUNC_0(VAR_4->user_data == (void *) 0xdeadbeef);
  FUNC_0(VAR_4->flags & VAR_0);
  FUNC_0(!(VAR_4->flags & VAR_1));






  FUNC_3(&VAR_3);
  return ((void*)0);
}
