
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bitmap_ipmac_elem {scalar_t__ filled; int ether; } ;
struct bitmap_ipmac_adt_elem {int ether; scalar_t__ add_mac; int id; } ;
struct bitmap_ipmac {int members; int extensions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct bitmap_ipmac_elem* FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static inline int
FUNC_6(const struct bitmap_ipmac_adt_elem *VAR_6,
      struct bitmap_ipmac *VAR_7, u32 VAR_8, size_t VAR_9)
{
 struct bitmap_ipmac_elem *VAR_10;

 VAR_10 = FUNC_3(VAR_7->extensions, VAR_6->id, VAR_9);
 if (FUNC_5(VAR_6->id, VAR_7->members)) {
  if (VAR_10->filled == VAR_4) {
   if (VAR_6->add_mac &&
       (VAR_8 & VAR_3) &&
       !FUNC_2(VAR_6->ether, VAR_10->ether)) {

    FUNC_0(VAR_6->id, VAR_7->members);
    FUNC_4();
    FUNC_1(VAR_10->ether, VAR_6->ether);
   }
   return VAR_0;
  } else if (!VAR_6->add_mac)

   return VAR_0;

  FUNC_0(VAR_6->id, VAR_7->members);
  FUNC_4();
  FUNC_1(VAR_10->ether, VAR_6->ether);
  VAR_10->filled = VAR_4;
  return VAR_1;
 } else if (VAR_6->add_mac) {

  FUNC_1(VAR_10->ether, VAR_6->ether);
  VAR_10->filled = VAR_4;
  return 0;
 }
 VAR_10->filled = VAR_5;

 return VAR_2;
}
