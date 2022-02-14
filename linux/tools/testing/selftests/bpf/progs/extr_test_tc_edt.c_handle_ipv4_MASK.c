
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcphdr {int dummy; } ;
struct iphdr {int ihl; scalar_t__ protocol; } ;
struct ethhdr {int dummy; } ;
struct __sk_buff {scalar_t__ data; scalar_t__ data_end; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct __sk_buff*,struct tcphdr*) ;

__attribute__((used)) static inline int FUNC_1(struct __sk_buff *VAR_3)
{
 void *VAR_4 = (void *)(long)VAR_3->data_end;
 void *VAR_5 = (void *)(long)VAR_3->data;
 struct iphdr *VAR_6;
 uint32_t VAR_7;


 if (VAR_5 + sizeof(struct ethhdr) > VAR_4)
  return VAR_2;
 VAR_6 = (struct iphdr *)(VAR_5 + sizeof(struct ethhdr));
 if ((void *)(VAR_6 + 1) > VAR_4)
  return VAR_2;
 VAR_7 = VAR_6->ihl * 4;
 if (((void *)VAR_6) + VAR_7 > VAR_4)
  return VAR_2;

 if (VAR_6->protocol == VAR_0)
  return FUNC_0(VAR_3, (struct tcphdr *)(((void *)VAR_6) + VAR_7));

 return VAR_1;
}
