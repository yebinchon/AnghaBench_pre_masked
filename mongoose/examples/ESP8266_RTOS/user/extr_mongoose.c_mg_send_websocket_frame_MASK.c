
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ws_mask_ctx {int dummy; } ;
struct mg_connection {int flags; int send_mbuf; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mg_connection*,void const*,size_t) ;
 int FUNC_2 (struct mg_connection*,int,size_t,struct ws_mask_ctx*) ;
 int FUNC_3 (int *,struct ws_mask_ctx*) ;

void FUNC_4(struct mg_connection *VAR_2, int VAR_3, const void *VAR_4,
                             size_t VAR_5) {
  struct ws_mask_ctx VAR_6;
  FUNC_0(("%p %d %d", VAR_2, VAR_3, (int) VAR_5));
  FUNC_2(VAR_2, VAR_3, VAR_5, &VAR_6);
  FUNC_1(VAR_2, VAR_4, VAR_5);

  FUNC_3(&VAR_2->send_mbuf, &VAR_6);

  if (VAR_3 == VAR_1) {
    VAR_2->flags |= VAR_0;
  }
}
