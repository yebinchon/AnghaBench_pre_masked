
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ len; int p; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct mg_str *VAR_0, const struct mg_str *VAR_1) {
  return VAR_0->len == VAR_1->len && FUNC_0(VAR_0->p, VAR_1->p, VAR_1->len) == 0;
}
