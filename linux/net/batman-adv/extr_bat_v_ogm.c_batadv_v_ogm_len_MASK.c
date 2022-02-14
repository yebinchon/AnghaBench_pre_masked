
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct batadv_ogm2_packet {int tvlv_len; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct sk_buff *VAR_1)
{
 struct batadv_ogm2_packet *VAR_2;

 VAR_2 = (struct batadv_ogm2_packet *)VAR_1->data;
 return VAR_0 + FUNC_0(VAR_2->tvlv_len);
}
