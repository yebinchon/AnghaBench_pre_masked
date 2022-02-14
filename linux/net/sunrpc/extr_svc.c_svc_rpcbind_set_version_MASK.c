
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_program {int pg_prog; int pg_name; } ;
struct net {int dummy; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (struct net*,int ,int ,int ,int,unsigned short,unsigned short) ;
 int FUNC_1 (char*,int ,int ,char*,unsigned short,int) ;

int FUNC_2(struct net *VAR_1,
       const struct svc_program *VAR_2,
       u32 VAR_3, int VAR_4,
       unsigned short VAR_5,
       unsigned short VAR_6)
{
 FUNC_1("svc: svc_register(%sv%d, %s, %u, %u)\n",
  VAR_2->pg_name, VAR_3,
  VAR_5 == VAR_0? "udp" : "tcp",
  VAR_6, VAR_4);

 return FUNC_0(VAR_1, VAR_2->pg_name, VAR_2->pg_prog,
    VAR_3, VAR_4, VAR_5, VAR_6);

}
