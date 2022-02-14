
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ ack; scalar_t__ fin; scalar_t__ syn; scalar_t__ rst; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static unsigned int FUNC_0(const struct tcphdr *VAR_6)
{
 if (VAR_6->rst) return VAR_3;
 else if (VAR_6->syn) return (VAR_6->ack ? VAR_4 : VAR_5);
 else if (VAR_6->fin) return VAR_1;
 else if (VAR_6->ack) return VAR_0;
 else return VAR_2;
}
