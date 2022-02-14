
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
struct in6_addr {int* s6_addr; } ;


 int FUNC_0 (int*,int *,int) ;
 int FUNC_1 (struct in6_addr*,int ,int) ;

__attribute__((used)) static void FUNC_2(const struct in_addr *VAR_0, struct in6_addr *VAR_1) {
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->s6_addr[10]=0xff;
 VAR_1->s6_addr[11]=0xff;
 FUNC_0(&VAR_1->s6_addr[12], &VAR_0->s_addr, 4);
}
