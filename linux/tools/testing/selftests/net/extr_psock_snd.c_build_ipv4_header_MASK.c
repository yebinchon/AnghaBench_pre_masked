
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct iphdr {int ihl; int version; int ttl; int check; void* daddr; void* saddr; int protocol; void* id; void* tot_len; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, int VAR_2)
{
 struct iphdr *VAR_3 = VAR_1;

 VAR_3->ihl = 5;
 VAR_3->version = 4;
 VAR_3->ttl = 8;
 VAR_3->tot_len = FUNC_2(sizeof(*VAR_3) + sizeof(struct udphdr) + VAR_2);
 VAR_3->id = FUNC_2(1337);
 VAR_3->protocol = VAR_0;
 VAR_3->saddr = FUNC_1((172 << 24) | (17 << 16) | 2);
 VAR_3->daddr = FUNC_1((172 << 24) | (17 << 16) | 1);
 VAR_3->check = FUNC_0((void *) VAR_3, VAR_3->ihl << 1, 0);

 return VAR_3->ihl << 2;
}
