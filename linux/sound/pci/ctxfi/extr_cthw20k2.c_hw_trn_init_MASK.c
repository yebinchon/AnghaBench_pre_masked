
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct trn_conf {unsigned long vm_pgt_phys; } ;
struct hw {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hw*,scalar_t__) ;
 int FUNC_2 (struct hw*,scalar_t__,int) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hw *VAR_6, const struct trn_conf *VAR_7)
{
 u32 VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12;


 if ((~0UL) == VAR_7->vm_pgt_phys) {
  FUNC_0(VAR_6->card->dev,
     "Wrong device page table page address!!!\n");
  return -1;
 }

 VAR_8 = 0x80000C0F;
 VAR_10 = (u32)VAR_7->vm_pgt_phys;
 VAR_11 = FUNC_3(VAR_7->vm_pgt_phys);
 if (sizeof(void *) == 8)
  VAR_8 |= (3 << 8);

 for (VAR_12 = 0; VAR_12 < 64; VAR_12++) {
  FUNC_2(VAR_6, VAR_5+(16*VAR_12), VAR_10);
  FUNC_2(VAR_6, VAR_4+(16*VAR_12), VAR_11);
 }

 FUNC_2(VAR_6, VAR_3, VAR_8);

 FUNC_2(VAR_6, VAR_0, 0x03);
 FUNC_2(VAR_6, VAR_2, 0x200c01);

 VAR_9 = FUNC_1(VAR_6, VAR_1);
 FUNC_2(VAR_6, VAR_1, (VAR_9 | 0x03));

 return 0;
}
