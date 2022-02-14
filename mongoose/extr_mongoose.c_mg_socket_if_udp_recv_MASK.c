
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union socket_address {int sa; } ;
struct mg_connection {int sock; } ;
typedef size_t socklen_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,void*,size_t,int ,int *,size_t*) ;

__attribute__((used)) static int FUNC_2(struct mg_connection *VAR_0, void *VAR_1,
                                 size_t VAR_2, union socket_address *VAR_3,
                                 size_t *VAR_4) {
  socklen_t VAR_5 = *VAR_4;
  int VAR_6 = FUNC_1(VAR_0->sock, VAR_1, VAR_2, 0, &VAR_3->sa, &VAR_5);
  *VAR_4 = VAR_5;
  if (VAR_6 < 0 && !FUNC_0()) VAR_6 = 0;
  return VAR_6;
}
