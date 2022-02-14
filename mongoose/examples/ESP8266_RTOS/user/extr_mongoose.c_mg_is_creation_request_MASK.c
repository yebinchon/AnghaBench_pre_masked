
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_message {int method; } ;


 scalar_t__ FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(const struct http_message *VAR_0) {
  return FUNC_0(&VAR_0->method, "MKCOL") == 0 || FUNC_0(&VAR_0->method, "PUT") == 0;
}
