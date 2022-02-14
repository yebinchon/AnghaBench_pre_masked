
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct iphdr {int ihl; int version; int protocol; int ttl; void* daddr; void* saddr; void* tot_len; scalar_t__ frag_off; } ;
struct ethhdr {void* h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*,int,int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_5, size_t *VAR_6)
{
 int VAR_7;
 struct ethhdr *VAR_8 = VAR_5;
 struct iphdr *VAR_9 = VAR_5 + sizeof(*VAR_8);





 *VAR_6 = VAR_1 + 42;

 FUNC_2(VAR_5, 0xff, VAR_2 * 2);
 VAR_8->h_proto = FUNC_1(VAR_3);

 for (VAR_7 = 0; VAR_7 < sizeof(*VAR_9); ++VAR_7)
  ((uint8_t *) VAR_5)[VAR_7 + sizeof(*VAR_8)] = (uint8_t) FUNC_3();

 VAR_9->ihl = 5;
 VAR_9->version = 4;
 VAR_9->protocol = 0x11;
 VAR_9->frag_off = 0;
 VAR_9->ttl = 64;
 VAR_9->tot_len = FUNC_1((uint16_t) *VAR_6 - sizeof(*VAR_8));

 VAR_9->saddr = FUNC_0(VAR_4);
 VAR_9->daddr = FUNC_0(VAR_4);

 FUNC_2(VAR_5 + sizeof(*VAR_8) + sizeof(*VAR_9),
        VAR_0, VAR_1);
}
