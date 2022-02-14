
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; } ;
struct net_device {int dummy; } ;
struct dsa_port {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int*,int*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct sk_buff *VAR_5,
        struct net_device *VAR_6)
{
 struct dsa_port *VAR_7 = FUNC_0(VAR_6);
 u8 *VAR_8;
 bool VAR_9 = 1;







 if (!FUNC_4(VAR_5)) {
  if (FUNC_2(VAR_5, VAR_1) < 0)
   return ((void*)0);

  FUNC_3(VAR_5, VAR_1);
  FUNC_1(VAR_5->data, VAR_5->data + VAR_1, 2 * VAR_0);
  VAR_9 = 0;
 }

 VAR_8 = VAR_5->data + 2 * VAR_0;




 VAR_8[0] = VAR_9 ? VAR_3 :
       VAR_4;
 VAR_8[1] = (1 << VAR_7->index) & VAR_2;


 if (!VAR_9) {
  VAR_8[2] = 0;
  VAR_8[3] = 0;
 }

 return VAR_5;
}
