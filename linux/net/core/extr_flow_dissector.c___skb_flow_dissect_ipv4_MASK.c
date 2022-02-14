
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iphdr {int ttl; int tos; } ;
struct flow_dissector_key_ip {int ttl; int tos; } ;
struct flow_dissector {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct flow_dissector*,int ) ;
 struct flow_dissector_key_ip* FUNC_1 (struct flow_dissector*,int ,void*) ;

__attribute__((used)) static void
FUNC_2(const struct sk_buff *VAR_1,
   struct flow_dissector *VAR_2,
   void *VAR_3, void *VAR_4, const struct iphdr *VAR_5)
{
 struct flow_dissector_key_ip *VAR_6;

 if (!FUNC_0(VAR_2, VAR_0))
  return;

 VAR_6 = FUNC_1(VAR_2,
        VAR_0,
        VAR_3);
 VAR_6->tos = VAR_5->tos;
 VAR_6->ttl = VAR_5->ttl;
}
