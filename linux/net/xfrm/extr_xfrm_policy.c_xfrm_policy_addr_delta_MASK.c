
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * a6; int a4; } ;
typedef TYPE_1__ xfrm_address_t ;
typedef int u8 ;
typedef unsigned long u32 ;
typedef int u16 ;




 int FUNC_0 (int *,int *,unsigned int) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const xfrm_address_t *VAR_0,
      const xfrm_address_t *VAR_1,
      u8 VAR_2, u16 VAR_3)
{
 unsigned int VAR_4, VAR_5;
 int VAR_6 = 0;

 switch (VAR_3) {
 case 129:
  if (sizeof(long) == 4 && VAR_2 == 0)
   return FUNC_1(VAR_0->a4) - FUNC_1(VAR_1->a4);
  return (FUNC_1(VAR_0->a4) & ((~0UL << (32 - VAR_2)))) -
         (FUNC_1(VAR_1->a4) & ((~0UL << (32 - VAR_2))));
 case 128:
  VAR_4 = VAR_2 >> 5;
  VAR_5 = VAR_2 & 0x1f;

  if (VAR_4) {
   VAR_6 = FUNC_0(VAR_0->a6, VAR_1->a6, VAR_4 << 2);
   if (VAR_6)
    return VAR_6;
  }
  if (VAR_5) {
   u32 VAR_7 = ~0u << (32 - VAR_5);

   VAR_6 = (FUNC_1(VAR_0->a6[VAR_4]) & VAR_7) -
    (FUNC_1(VAR_1->a6[VAR_4]) & VAR_7);
  }
  break;
 default:
  break;
 }

 return VAR_6;
}
