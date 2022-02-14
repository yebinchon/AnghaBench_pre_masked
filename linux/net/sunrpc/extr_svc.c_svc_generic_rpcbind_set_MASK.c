
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct svc_version {scalar_t__ vs_rpcb_optnl; scalar_t__ vs_need_cong_ctrl; scalar_t__ vs_hidden; } ;
struct svc_program {int pg_name; struct svc_version** pg_vers; } ;
struct net {int dummy; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (char*,int ,size_t,char*,unsigned short,int) ;
 int FUNC_1 (struct net*,struct svc_program const*,size_t,int,unsigned short,unsigned short) ;

int FUNC_2(struct net *VAR_1,
       const struct svc_program *VAR_2,
       u32 VAR_3, int VAR_4,
       unsigned short VAR_5,
       unsigned short VAR_6)
{
 const struct svc_version *VAR_7 = VAR_2->pg_vers[VAR_3];
 int VAR_8;

 if (VAR_7 == ((void*)0))
  return 0;

 if (VAR_7->vs_hidden) {
  FUNC_0("svc: svc_register(%sv%d, %s, %u, %u)"
   " (but not telling portmap)\n",
   VAR_2->pg_name, VAR_3,
   VAR_5 == VAR_0? "udp" : "tcp",
   VAR_6, VAR_4);
  return 0;
 }





 if (VAR_7->vs_need_cong_ctrl && VAR_5 == VAR_0)
  return 0;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6);

 return (VAR_7->vs_rpcb_optnl) ? 0 : VAR_8;
}
