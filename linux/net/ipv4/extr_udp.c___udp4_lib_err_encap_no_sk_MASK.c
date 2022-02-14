
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ip_tunnel_encap_ops {int (* err_handler ) (struct sk_buff*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 struct ip_tunnel_encap_ops* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_3, u32 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  int (*VAR_6)(struct sk_buff *VAR_7, u32 VAR_8);
  const struct ip_tunnel_encap_ops *VAR_9;

  VAR_9 = FUNC_0(VAR_2[VAR_5]);
  if (!VAR_9)
   continue;
  VAR_6 = VAR_9->err_handler;
  if (VAR_6 && !VAR_6(VAR_3, VAR_4))
   return 0;
 }

 return -VAR_0;
}
