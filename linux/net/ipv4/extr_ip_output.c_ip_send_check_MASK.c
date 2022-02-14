
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iphdr {int ihl; scalar_t__ check; } ;


 scalar_t__ FUNC_0 (unsigned char*,int ) ;

void FUNC_1(struct iphdr *VAR_0)
{
 VAR_0->check = 0;
 VAR_0->check = FUNC_0((unsigned char *)VAR_0, VAR_0->ihl);
}
