
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {char* user_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char*,int ) ;
 struct mg_connection* FUNC_3 (struct mg_mgr*,int ,char*,int *,int *) ;
 int FUNC_4 (struct mg_mgr*) ;
 int FUNC_5 (struct mg_mgr*,int *) ;
 int FUNC_6 (struct mg_connection*) ;
 int FUNC_7 (struct mg_mgr*,int,int ,char*,void*) ;

__attribute__((used)) static const char *FUNC_8(void) {
  struct mg_mgr VAR_3;
  struct mg_connection *VAR_4;
  const char *VAR_5[] = {"ws://127.0.0.1:7778/ws", "http://127.0.0.1:7778/ws",
                        "127.0.0.1:7778/ws", ((void*)0)};
  const char **VAR_6;

  FUNC_5(&VAR_3, ((void*)0));

  FUNC_0((VAR_4 = FUNC_2(&VAR_3, "127.0.0.1:7778", VAR_1)) != ((void*)0));
  FUNC_6(VAR_4);

  for (VAR_6 = VAR_5; *VAR_6 != ((void*)0); VAR_6++) {
    char VAR_7[20] = "";
    FUNC_0((VAR_4 = FUNC_3(&VAR_3, VAR_2, "ws://127.0.0.1:7778/ws", ((void*)0),
                               ((void*)0))) != ((void*)0));
    VAR_4->user_data = VAR_7;
    FUNC_7(&VAR_3, 1, VAR_0, VAR_7, (void *) "");
    FUNC_1(VAR_7, "A");
  }

  FUNC_4(&VAR_3);

  return ((void*)0);
}
