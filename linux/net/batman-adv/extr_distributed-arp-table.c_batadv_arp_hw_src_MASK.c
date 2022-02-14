
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct arphdr {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 *FUNC_0(struct sk_buff *VAR_1, int VAR_2)
{
 u8 *VAR_3;

 VAR_3 = (u8 *)(VAR_1->data + VAR_2);
 VAR_3 += VAR_0 + sizeof(struct arphdr);

 return VAR_3;
}
