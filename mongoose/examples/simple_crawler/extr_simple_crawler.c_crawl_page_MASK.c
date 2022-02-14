
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdata {char* url; int depth; } ;
struct mg_mgr {int dummy; } ;
struct mg_connection {struct userdata* user_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct userdata*) ;
 struct userdata* FUNC_1 (size_t) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,int ,char const*,int *,int *) ;
 int FUNC_3 (char*,char const*) ;
 size_t FUNC_4 (char const*) ;
 char* FUNC_5 (struct userdata*,char const*,size_t) ;

void FUNC_6(struct mg_mgr *VAR_1, const char *VAR_2, size_t VAR_3,
                int VAR_4) {
  struct mg_connection *VAR_5;
  struct userdata *VAR_6 = FUNC_1(sizeof(struct userdata));

  if (VAR_3 == (size_t) ~0) {
    VAR_3 = FUNC_4(VAR_2);
  }

  VAR_6->url = FUNC_5(FUNC_1(VAR_3 + 1), VAR_2, VAR_3);
  VAR_6->url[VAR_3] = '\0';
  VAR_6->depth = VAR_4;

  VAR_5 = FUNC_2(VAR_1, VAR_0, VAR_2, ((void*)0), ((void*)0));
  if (VAR_5 != ((void*)0)) {
    VAR_5->user_data = VAR_6;
  } else {
    FUNC_3("Error connecting to [%s]\n", VAR_2);
    FUNC_0(VAR_6);
  }
}
