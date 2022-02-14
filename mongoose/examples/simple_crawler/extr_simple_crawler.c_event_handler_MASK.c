
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdata {char* url; } ;
struct mg_connection {char* user_data; int flags; } ;
struct http_message {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct mg_connection*,struct http_message*) ;
 int FUNC_2 (char*,char*,char*) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct http_message *VAR_4 = (struct http_message *) VAR_3;
  int VAR_5;

  switch (VAR_2) {
    case 129:
      VAR_5 = *(int *) VAR_3;
      if (VAR_5 != 0) {
        FUNC_2("Error while loading page: %s, error: %s\n",
               ((struct userdata *) VAR_1->user_data)->url,
               FUNC_3(VAR_5));
      }
      break;
    case 130:
      FUNC_0(((struct userdata *) VAR_1->user_data)->url);
      FUNC_0(VAR_1->user_data);
      break;
    case 128:
      FUNC_1(VAR_1, VAR_4);
      VAR_1->flags |= VAR_0;
      break;
    default:
      break;
  }
}
