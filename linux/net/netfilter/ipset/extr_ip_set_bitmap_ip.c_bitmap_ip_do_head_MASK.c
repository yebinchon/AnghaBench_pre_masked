
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct bitmap_ip {int netmask; int last_ip; int first_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int) ;

__attribute__((used)) static inline int
FUNC_3(struct sk_buff *VAR_3, const struct bitmap_ip *VAR_4)
{
 return FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_4->first_ip)) ||
        FUNC_1(VAR_3, VAR_1, FUNC_0(VAR_4->last_ip)) ||
        (VAR_4->netmask != 32 &&
  FUNC_2(VAR_3, VAR_2, VAR_4->netmask));
}
