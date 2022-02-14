
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6hdr {int daddr; } ;
struct ila_params {int dummy; } ;
typedef int __wsum ;


 int FUNC_0 (int ,struct ila_params*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __wsum FUNC_2(struct ipv6hdr *VAR_0, struct ila_params *VAR_1)
{
 return FUNC_0(FUNC_1(&VAR_0->daddr), VAR_1);
}
