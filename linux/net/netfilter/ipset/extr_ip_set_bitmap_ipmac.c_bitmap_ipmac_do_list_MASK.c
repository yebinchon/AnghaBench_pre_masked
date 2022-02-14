
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct bitmap_ipmac_elem {scalar_t__ filled; int ether; } ;
struct bitmap_ipmac {scalar_t__ first_ip; int extensions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct bitmap_ipmac_elem* FUNC_0 (int ,scalar_t__,size_t) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline int
FUNC_4(struct sk_buff *VAR_4, const struct bitmap_ipmac *VAR_5,
       u32 VAR_6, size_t VAR_7)
{
 const struct bitmap_ipmac_elem *VAR_8 =
  FUNC_0(VAR_5->extensions, VAR_6, VAR_7);

 return FUNC_3(VAR_4, VAR_2,
          FUNC_1(VAR_5->first_ip + VAR_6)) ||
        (VAR_8->filled == VAR_3 &&
  FUNC_2(VAR_4, VAR_1, VAR_0, VAR_8->ether));
}
