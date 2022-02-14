
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; } ;
struct net_device {int dummy; } ;
struct dsa_port {scalar_t__ index; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct dsa_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct sk_buff *VAR_8,
          struct net_device *VAR_9)
{
 struct dsa_port *VAR_10 = FUNC_1(VAR_9);
 int VAR_11;
 u8 *VAR_12;

 VAR_11 = FUNC_2(VAR_8, VAR_2);
 if (VAR_11)
  return ((void*)0);

 FUNC_3(VAR_8, VAR_2);

 VAR_12 = VAR_8->data;
 VAR_12[0] = VAR_7;
 VAR_12[1] = VAR_0;
 VAR_12[2] = VAR_3 | VAR_5;
 VAR_12[3] = FUNC_0(VAR_10->index + VAR_6) & VAR_4;
 VAR_12[3] |= VAR_1;

 return VAR_8;
}
