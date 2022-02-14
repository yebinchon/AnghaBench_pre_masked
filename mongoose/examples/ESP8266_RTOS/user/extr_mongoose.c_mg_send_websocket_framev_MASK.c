
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ws_mask_ctx {int dummy; } ;
struct mg_str {scalar_t__ len; int p; } ;
struct mg_connection {int flags; int send_mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mg_connection*,int ,scalar_t__) ;
 int FUNC_1 (struct mg_connection*,int,int,struct ws_mask_ctx*) ;
 int FUNC_2 (int *,struct ws_mask_ctx*) ;

void FUNC_3(struct mg_connection *VAR_2, int VAR_3,
                              const struct mg_str *VAR_4, int VAR_5) {
  struct ws_mask_ctx VAR_6;
  int VAR_7;
  int VAR_8 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
    VAR_8 += VAR_4[VAR_7].len;
  }

  FUNC_1(VAR_2, VAR_3, VAR_8, &VAR_6);

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
    FUNC_0(VAR_2, VAR_4[VAR_7].p, VAR_4[VAR_7].len);
  }

  FUNC_2(&VAR_2->send_mbuf, &VAR_6);

  if (VAR_3 == VAR_1) {
    VAR_2->flags |= VAR_0;
  }
}
