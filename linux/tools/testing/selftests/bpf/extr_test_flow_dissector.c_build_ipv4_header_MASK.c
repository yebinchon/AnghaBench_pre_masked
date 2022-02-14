
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef void* uint32_t ;
struct iphdr {int ihl; int version; int ttl; int check; void* daddr; void* saddr; void* protocol; void* id; void* tot_len; void* tos; } ;


 int FUNC_0 (void*,int,int ) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint8_t VAR_1,
         uint32_t VAR_2, uint32_t VAR_3,
         int VAR_4, uint8_t VAR_5)
{
 struct iphdr *VAR_6 = VAR_0;

 VAR_6->ihl = 5;
 VAR_6->version = 4;
 VAR_6->tos = VAR_5;
 VAR_6->ttl = 8;
 VAR_6->tot_len = FUNC_1(sizeof(*VAR_6) + VAR_4);
 VAR_6->id = FUNC_1(1337);
 VAR_6->protocol = VAR_1;
 VAR_6->saddr = VAR_2;
 VAR_6->daddr = VAR_3;
 VAR_6->check = FUNC_0((void *) VAR_6, VAR_6->ihl << 1, 0);
}
