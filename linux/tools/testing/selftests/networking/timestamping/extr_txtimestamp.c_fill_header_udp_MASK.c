
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ check; void* len; void* dest; void* source; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct udphdr*,int) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, bool VAR_3)
{
 struct udphdr *VAR_4 = VAR_2;

 VAR_4->source = FUNC_1(VAR_1 + 1);
 VAR_4->dest = FUNC_1(VAR_1);
 VAR_4->len = FUNC_1(sizeof(*VAR_4) + VAR_0);
 VAR_4->check = 0;

 VAR_4->check = FUNC_0(VAR_4, VAR_3 ? sizeof(struct in_addr) :
          sizeof(struct in6_addr));
}
