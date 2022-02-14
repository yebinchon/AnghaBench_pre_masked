
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct bitmap_ip {int hosts; scalar_t__ first_ip; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct sk_buff *VAR_1, const struct bitmap_ip *VAR_2, u32 VAR_3,
    size_t VAR_4)
{
 return FUNC_1(VAR_1, VAR_0,
   FUNC_0(VAR_2->first_ip + VAR_3 * VAR_2->hosts));
}
