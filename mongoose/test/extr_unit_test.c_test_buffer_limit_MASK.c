
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int recv_mbuf_limit; void* handler; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char const*,int ) ;
 struct mg_connection* FUNC_3 (struct mg_mgr*,char const*,int *) ;
 int FUNC_4 (struct mg_mgr*) ;
 int FUNC_5 (struct mg_mgr*,int*) ;
 int FUNC_6 (struct mg_connection*,char*) ;
 int FUNC_7 (struct mg_connection*) ;
 int FUNC_8 (struct mg_mgr*,int,int ,int*,void*) ;

__attribute__((used)) static const char *FUNC_9(void) {
  struct mg_mgr VAR_3;
  struct mg_connection *VAR_4, *VAR_5;
  const char *VAR_6 = "tcp://127.0.0.1:7878";
  int VAR_7 = 0;

  FUNC_5(&VAR_3, &VAR_7);
  FUNC_0((VAR_5 = FUNC_2(&VAR_3, VAR_6, VAR_1)) != ((void*)0));
  VAR_5->recv_mbuf_limit = 1;
  FUNC_0((VAR_4 = FUNC_3(&VAR_3, VAR_6, ((void*)0))) != ((void*)0));
  FUNC_6(VAR_4, "abcd");

  FUNC_8(&VAR_3, 1, VAR_0, &VAR_7, (void *) 4);


  FUNC_1(VAR_7, 4);





  VAR_7 = 0;
  VAR_5->handler = VAR_2;
  FUNC_0((VAR_4 = FUNC_3(&VAR_3, VAR_6, ((void*)0))) != ((void*)0));
  FUNC_6(VAR_4, "abcd");
  FUNC_8(&VAR_3, 1, VAR_0, &VAR_7, (void *) 1);
  FUNC_1(VAR_7, 0);





  VAR_7 = 0;
  VAR_5->handler = VAR_2;
  FUNC_7(VAR_5);
  FUNC_0((VAR_4 = FUNC_3(&VAR_3, VAR_6, ((void*)0))) != ((void*)0));
  FUNC_6(VAR_4, "abcd");
  FUNC_8(&VAR_3, 1, VAR_0, &VAR_7, (void *) 1);
  FUNC_1(VAR_7, 1);

  FUNC_4(&VAR_3);
  return ((void*)0);
}
