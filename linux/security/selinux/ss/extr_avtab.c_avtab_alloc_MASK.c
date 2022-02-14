
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct avtab {scalar_t__ nslot; scalar_t__ mask; scalar_t__ nel; int htable; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;

int FUNC_2(struct avtab *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = VAR_4;
 u32 VAR_8 = 0;

 if (VAR_4 == 0)
  goto avtab_alloc_out;

 while (VAR_7) {
  VAR_7 = VAR_7 >> 1;
  VAR_6++;
 }
 if (VAR_6 > 2)
  VAR_6 = VAR_6 - 2;
 VAR_8 = 1 << VAR_6;
 if (VAR_8 > VAR_2)
  VAR_8 = VAR_2;
 VAR_5 = VAR_8 - 1;

 VAR_3->htable = FUNC_0(VAR_8, sizeof(void *), VAR_1);
 if (!VAR_3->htable)
  return -VAR_0;

 avtab_alloc_out:
 VAR_3->nel = 0;
 VAR_3->nslot = VAR_8;
 VAR_3->mask = VAR_5;
 FUNC_1("SELinux: %d avtab hash slots, %d rules.\n",
        VAR_3->nslot, VAR_4);
 return 0;
}
