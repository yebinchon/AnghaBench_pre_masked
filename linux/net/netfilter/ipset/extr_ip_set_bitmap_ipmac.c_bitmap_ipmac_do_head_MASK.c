
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct bitmap_ipmac {int last_ip; int first_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct sk_buff *VAR_2, const struct bitmap_ipmac *VAR_3)
{
 return FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_3->first_ip)) ||
        FUNC_1(VAR_2, VAR_1, FUNC_0(VAR_3->last_ip));
}
