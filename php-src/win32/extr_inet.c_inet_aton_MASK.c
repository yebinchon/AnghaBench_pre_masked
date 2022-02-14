
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;

int FUNC_1(const char *VAR_1, struct in_addr *VAR_2) {
  VAR_2->s_addr = FUNC_0(VAR_1);

  if (VAR_2->s_addr == VAR_0) {
          return 0;
  }

  return 1;
}
