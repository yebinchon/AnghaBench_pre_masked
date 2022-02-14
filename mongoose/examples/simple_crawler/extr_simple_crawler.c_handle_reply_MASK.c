
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct userdata {char* url; int depth; } ;
struct slre_cap {int len; int ptr; } ;
struct mg_connection {int mgr; scalar_t__ user_data; } ;
struct TYPE_2__ {char* p; } ;
struct http_message {TYPE_1__ body; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char const*,int,struct slre_cap*,int,int ) ;
 int FUNC_3 (char const*) ;

void FUNC_4(struct mg_connection *VAR_3, struct http_message *VAR_4) {
  struct userdata *VAR_5 = (struct userdata *) VAR_3->user_data;
  const char *VAR_6 = VAR_4->body.p;

  int VAR_7, VAR_8 = 2, VAR_9 = 0, VAR_10 = FUNC_3(VAR_6);
  struct slre_cap VAR_11[VAR_8];

  FUNC_1("Loaded url: %s at depth %d\n", VAR_5->url, VAR_5->depth);
  if (VAR_5->depth == VAR_1) {
    return;
  }

  while (VAR_9 < VAR_10 &&
         (VAR_7 = FUNC_2(VAR_2, VAR_6 + VAR_9, VAR_10 - VAR_9, VAR_11,
                              VAR_8, VAR_0)) > 0) {
    FUNC_0(VAR_3->mgr, VAR_11[0].ptr, VAR_11[0].len, VAR_5->depth + 1);
    VAR_9 += VAR_7;
  }
}
