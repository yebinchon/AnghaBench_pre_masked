
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ check; void* len; void* source; void* dest; } ;
struct iphdr {int ttl; int ihl; int version; scalar_t__ check; void* tot_len; int protocol; void* daddr; void* saddr; } ;
struct ethhdr {void* h_proto; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (void*,char,size_t) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, size_t VAR_4, char VAR_5)
{
 struct udphdr *VAR_6;
 struct ethhdr *VAR_7;
 struct iphdr *VAR_8;
 size_t VAR_9 = 0;

 FUNC_2(VAR_3, 0, VAR_4);

 VAR_7 = VAR_3;
 VAR_7->h_proto = FUNC_1(VAR_0);

 VAR_9 += sizeof(*VAR_7);
 VAR_8 = VAR_3 + VAR_9;
 VAR_8->ttl = 8;
 VAR_8->ihl = 5;
 VAR_8->version = 4;
 VAR_8->saddr = FUNC_0(VAR_1);
 VAR_8->daddr = FUNC_0(VAR_1 + 1);
 VAR_8->protocol = VAR_2;
 VAR_8->tot_len = FUNC_1(VAR_4 - VAR_9);
 VAR_8->check = 0;

 VAR_9 += sizeof(*VAR_8);
 VAR_6 = VAR_3 + VAR_9;
 VAR_6->dest = FUNC_1(8000);
 VAR_6->source = FUNC_1(8001);
 VAR_6->len = FUNC_1(VAR_4 - VAR_9);
 VAR_6->check = 0;

 VAR_9 += sizeof(*VAR_6);
 FUNC_2(VAR_3 + VAR_9, VAR_5, VAR_4 - VAR_9);
}
