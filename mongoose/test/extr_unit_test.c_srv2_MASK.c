
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_connection {scalar_t__ user_data; int flags; } ;
struct TYPE_2__ {size_t len; scalar_t__ p; } ;
struct http_message {TYPE_1__ body; } ;
typedef int sig1 ;
typedef int cs_md5_ctx ;





 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 char* FUNC_5 (char*,size_t*) ;

__attribute__((used)) static void FUNC_6(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  static cs_md5_ctx VAR_4, VAR_5;
  struct http_message *VAR_6 = (struct http_message *) VAR_3;

  switch (VAR_2) {
    case 130:
      FUNC_1(&VAR_4);
      FUNC_1(&VAR_5);
      break;
    case 129:
      FUNC_2(&VAR_4, (const unsigned char *) VAR_6->body.p, VAR_6->body.len);
      VAR_1->flags |= VAR_0;
      break;
    case 128: {
      unsigned char VAR_7[16], VAR_8[sizeof(VAR_7)];
      size_t VAR_9;
      char *VAR_10 = FUNC_5("unit_test.c", &VAR_9);
      if (VAR_10 != ((void*)0)) FUNC_2(&VAR_5, (const unsigned char *) VAR_10, VAR_9);
      FUNC_3(VAR_10);
      FUNC_0(VAR_7, &VAR_4);
      FUNC_0(VAR_8, &VAR_5);
      *(int *) VAR_1->user_data = (FUNC_4(VAR_7, VAR_8, sizeof(VAR_7)) == 0) ? 1 : 2;
      break;
    }
  }
}
