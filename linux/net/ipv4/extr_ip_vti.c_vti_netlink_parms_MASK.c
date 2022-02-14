
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {void* daddr; void* saddr; int protocol; } ;
struct ip_tunnel_parm {TYPE_1__ iph; void* o_key; void* i_key; void* link; int i_flags; } ;
typedef void* __u32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ip_tunnel_parm*,int ,int) ;
 void* FUNC_1 (struct nlattr*) ;
 void* FUNC_2 (struct nlattr*) ;
 void* FUNC_3 (struct nlattr*) ;

__attribute__((used)) static void FUNC_4(struct nlattr *VAR_8[],
         struct ip_tunnel_parm *VAR_9,
         __u32 *VAR_10)
{
 FUNC_0(VAR_9, 0, sizeof(*VAR_9));

 VAR_9->iph.protocol = VAR_6;

 if (!VAR_8)
  return;

 VAR_9->i_flags = VAR_7;

 if (VAR_8[VAR_2])
  VAR_9->link = FUNC_3(VAR_8[VAR_2]);

 if (VAR_8[VAR_1])
  VAR_9->i_key = FUNC_1(VAR_8[VAR_1]);

 if (VAR_8[VAR_4])
  VAR_9->o_key = FUNC_1(VAR_8[VAR_4]);

 if (VAR_8[VAR_3])
  VAR_9->iph.saddr = FUNC_2(VAR_8[VAR_3]);

 if (VAR_8[VAR_5])
  VAR_9->iph.daddr = FUNC_2(VAR_8[VAR_5]);

 if (VAR_8[VAR_0])
  *VAR_10 = FUNC_3(VAR_8[VAR_0]);
}
