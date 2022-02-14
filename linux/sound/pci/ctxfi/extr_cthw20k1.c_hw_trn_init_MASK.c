
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct trn_conf {unsigned long vm_pgt_phys; } ;
struct hw {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hw*,int ,int) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct hw *VAR_4, const struct trn_conf *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7, VAR_8;


 if ((~0UL) == VAR_5->vm_pgt_phys) {
  FUNC_0(VAR_4->card->dev,
   "Wrong device page table page address!\n");
  return -1;
 }

 VAR_6 = 0x13;
 VAR_7 = (u32)VAR_5->vm_pgt_phys;
 VAR_8 = FUNC_2(VAR_5->vm_pgt_phys);
 if (sizeof(void *) == 8)
  VAR_6 |= (1 << 2);





 FUNC_1(VAR_4, VAR_1, VAR_7);
 FUNC_1(VAR_4, VAR_0, VAR_8);
 FUNC_1(VAR_4, VAR_2, VAR_6);
 FUNC_1(VAR_4, VAR_3, 0x200c01);

 return 0;
}
