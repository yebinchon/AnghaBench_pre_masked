
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct udphdr {scalar_t__ check; void* len; void* dest; void* source; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,struct udphdr*,int) ;
 scalar_t__ FUNC_1 (void*,struct udphdr*,int) ;
 int VAR_1 ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, int VAR_3,
        uint16_t VAR_4, int VAR_5)
{
 struct udphdr *VAR_6 = VAR_2;
 int VAR_7 = sizeof(*VAR_6) + VAR_3;

 VAR_6->source = FUNC_2(VAR_1);
 VAR_6->dest = FUNC_2(VAR_4);
 VAR_6->len = FUNC_2(VAR_7);
 VAR_6->check = 0;
 if (VAR_5 == VAR_0)
  VAR_6->check = FUNC_0(VAR_2 - sizeof(struct iphdr),
      VAR_6, VAR_7 >> 1);
 else
  VAR_6->check = FUNC_1(VAR_2 - sizeof(struct ipv6hdr),
      VAR_6, VAR_7 >> 1);
}
