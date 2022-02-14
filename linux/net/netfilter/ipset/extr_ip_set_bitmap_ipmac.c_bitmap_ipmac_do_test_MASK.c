
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap_ipmac_elem {scalar_t__ filled; int ether; } ;
struct bitmap_ipmac_adt_elem {int ether; scalar_t__ add_mac; int id; } ;
struct bitmap_ipmac {int extensions; int members; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct bitmap_ipmac_elem* FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline int
FUNC_3(const struct bitmap_ipmac_adt_elem *VAR_2,
       const struct bitmap_ipmac *VAR_3, size_t VAR_4)
{
 const struct bitmap_ipmac_elem *VAR_5;

 if (!FUNC_2(VAR_2->id, VAR_3->members))
  return 0;
 VAR_5 = FUNC_1(VAR_3->extensions, VAR_2->id, VAR_4);
 if (VAR_2->add_mac && VAR_5->filled == VAR_1)
  return FUNC_0(VAR_2->ether, VAR_5->ether);

 return -VAR_0;
}
