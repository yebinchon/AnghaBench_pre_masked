
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,char*,int ,int ,int ,int ) ;

const char *FUNC_2(int VAR_3, const void *VAR_4, char *VAR_5, socklen_t VAR_6) {
  int VAR_7;
  struct in_addr *VAR_8 = (struct in_addr *) VAR_4;
  if (VAR_3 != VAR_0) {
    VAR_2 = VAR_1;
    return ((void*)0);
  }
  VAR_7 = FUNC_1(VAR_5, VAR_6, "%lu.%lu.%lu.%lu", FUNC_0(VAR_8->s_addr, 0),
                 FUNC_0(VAR_8->s_addr, 1), FUNC_0(VAR_8->s_addr, 2),
                 FUNC_0(VAR_8->s_addr, 3));
  return VAR_7 > 0 ? VAR_5 : ((void*)0);
}
