
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dev; } ;
struct dsa_port {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct dsa_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct dsa_port*,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 struct dsa_port *VAR_7 = FUNC_1(VAR_6);
 u16 *VAR_8;




 if (FUNC_5(VAR_5, VAR_2) < 0) {
  FUNC_0(&VAR_6->dev,
   "Cannot make room for the special tag. Dropping packet\n");
  return ((void*)0);
 }


 FUNC_6(VAR_5, VAR_2);


 FUNC_4(VAR_5->data, VAR_5->data + VAR_2, 2 * VAR_0);

 VAR_8 = (u16 *)(VAR_5->data + 2 * VAR_0);
 VAR_8[0] = FUNC_2(VAR_1);
 VAR_8[1] = FUNC_3(VAR_7, VAR_5->data) ?
    VAR_4 :
    VAR_7->index | VAR_3;
 VAR_8[1] = FUNC_2(VAR_8[1]);

 return VAR_5;
}
