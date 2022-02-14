
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_md {scalar_t__ data; scalar_t__ data_end; } ;
struct iphdr {int daddr; int saddr; } ;
struct icmphdr {scalar_t__ checksum; int type; } ;
struct ethhdr {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xdp_md*,int ) ;
 scalar_t__ FUNC_1 (struct icmphdr*,int ) ;
 int FUNC_2 (void*) ;

int FUNC_3(struct xdp_md *VAR_4)
{
 void *VAR_5 = (void *)(long)VAR_4->data_end;
 void *VAR_6 = (void *)(long)VAR_4->data;
 struct ethhdr *VAR_7 = VAR_6;
 struct icmphdr *VAR_8;
 struct iphdr *VAR_9;
 __be32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_4, VAR_0);

 if (VAR_11 != VAR_3)
  return VAR_11;

 VAR_9 = VAR_6 + sizeof(*VAR_7);
 VAR_8 = VAR_6 + sizeof(*VAR_7) + sizeof(*VAR_9);
 VAR_10 = VAR_9->saddr;


 FUNC_2(VAR_6);
 VAR_9->saddr = VAR_9->daddr;
 VAR_9->daddr = VAR_10;
 VAR_8->type = VAR_1;
 VAR_8->checksum = 0;
 VAR_8->checksum = FUNC_1(VAR_8, VAR_2);

 return VAR_3;
}
