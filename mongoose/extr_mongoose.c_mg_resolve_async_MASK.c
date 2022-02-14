
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_resolve_async_opts {int dummy; } ;
struct mg_mgr {int dummy; } ;
typedef int opts ;
typedef int mg_resolve_callback_t ;


 int FUNC_0 (struct mg_resolve_async_opts*,int ,int) ;
 int FUNC_1 (struct mg_mgr*,char const*,int,int ,void*,struct mg_resolve_async_opts) ;

int FUNC_2(struct mg_mgr *VAR_0, const char *VAR_1, int VAR_2,
                     mg_resolve_callback_t VAR_3, void *VAR_4) {
  struct mg_resolve_async_opts VAR_5;
  FUNC_0(&VAR_5, 0, sizeof(VAR_5));
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
