
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct sk_buff {int dummy; } ;
struct geneve_port {int dst_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct geneve_port* FUNC_0 (struct vport const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct vport *VAR_2,
         struct sk_buff *VAR_3)
{
 struct geneve_port *VAR_4 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_3, VAR_1, VAR_4->dst_port))
  return -VAR_0;
 return 0;
}
