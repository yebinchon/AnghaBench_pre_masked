
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ len; int p; } ;


 struct mg_str FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mg_str const,struct mg_str) ;

int FUNC_2(struct mg_str VAR_0, struct mg_str VAR_1) {
  const struct mg_str VAR_2 = FUNC_0(VAR_0.p, VAR_1.len);
  if (VAR_0.len < VAR_1.len) return 0;
  return (FUNC_1(VAR_2, VAR_1) == 0);
}
