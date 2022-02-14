
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {int version; int ihl; void* frag_off; void* protocol; void* tos; void* ttl; void* daddr; void* saddr; } ;
struct ip_tunnel_parm {TYPE_1__ iph; void* link; } ;
typedef void* __u32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ip_tunnel_parm*,int ,int) ;
 void* FUNC_2 (struct nlattr*) ;
 void* FUNC_3 (struct nlattr*) ;
 void* FUNC_4 (struct nlattr*) ;

__attribute__((used)) static void FUNC_5(struct nlattr *VAR_11[],
          struct ip_tunnel_parm *VAR_12, bool *VAR_13,
          __u32 *VAR_14)
{
 FUNC_1(VAR_12, 0, sizeof(*VAR_12));

 VAR_12->iph.version = 4;
 VAR_12->iph.protocol = VAR_9;
 VAR_12->iph.ihl = 5;
 *VAR_13 = 0;

 if (!VAR_11)
  return;

 if (VAR_11[VAR_2])
  VAR_12->link = FUNC_3(VAR_11[VAR_2]);

 if (VAR_11[VAR_3])
  VAR_12->iph.saddr = FUNC_2(VAR_11[VAR_3]);

 if (VAR_11[VAR_6])
  VAR_12->iph.daddr = FUNC_2(VAR_11[VAR_6]);

 if (VAR_11[VAR_8]) {
  VAR_12->iph.ttl = FUNC_4(VAR_11[VAR_8]);
  if (VAR_12->iph.ttl)
   VAR_12->iph.frag_off = FUNC_0(VAR_10);
 }

 if (VAR_11[VAR_7])
  VAR_12->iph.tos = FUNC_4(VAR_11[VAR_7]);

 if (VAR_11[VAR_5])
  VAR_12->iph.protocol = FUNC_4(VAR_11[VAR_5]);

 if (!VAR_11[VAR_4] || FUNC_4(VAR_11[VAR_4]))
  VAR_12->iph.frag_off = FUNC_0(VAR_10);

 if (VAR_11[VAR_0])
  *VAR_13 = 1;

 if (VAR_11[VAR_1])
  *VAR_14 = FUNC_3(VAR_11[VAR_1]);
}
