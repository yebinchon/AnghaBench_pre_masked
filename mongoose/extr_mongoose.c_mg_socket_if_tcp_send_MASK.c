
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int sock; } ;


 scalar_t__ FUNC_0 (int ,void const*,size_t,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct mg_connection *VAR_0, const void *VAR_1,
                                 size_t VAR_2) {
  int VAR_3 = (int) FUNC_0(VAR_0->sock, VAR_1, VAR_2, 0);
  if (VAR_3 < 0 && !FUNC_1()) VAR_3 = 0;
  return VAR_3;
}
