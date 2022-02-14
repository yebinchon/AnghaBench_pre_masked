
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bitmap_ipmac_elem {scalar_t__ filled; } ;
struct bitmap_ipmac {int extensions; int members; } ;


 scalar_t__ VAR_0 ;
 struct bitmap_ipmac_elem* FUNC_0 (int ,int ,size_t) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline int
FUNC_2(u16 VAR_1, const struct bitmap_ipmac *VAR_2, size_t VAR_3)
{
 const struct bitmap_ipmac_elem *VAR_4;

 if (!FUNC_1(VAR_1, VAR_2->members))
  return 0;
 VAR_4 = FUNC_0(VAR_2->extensions, VAR_1, VAR_3);

 return VAR_4->filled == VAR_0;
}
