
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max; void* min; } ;
typedef TYPE_1__ zend_ssa_range ;
typedef scalar_t__ zend_long ;


 void* FUNC_0 (scalar_t__,scalar_t__) ;
 void* FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 void* FUNC_2 (scalar_t__,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(zend_long VAR_0, zend_long VAR_1, zend_long VAR_2, zend_long VAR_3, zend_ssa_range *VAR_4)
{
 int VAR_5 = ((VAR_0 < 0) ? 8 : 0) |
         ((VAR_1 < 0) ? 4 : 0) |
         ((VAR_2 < 0) ? 2 : 0) |
         ((VAR_3 < 0) ? 2 : 0);
 switch (VAR_5) {
  case 0x0:
  case 0x3:
  case 0xc:
  case 0xf:
   VAR_4->min = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
   VAR_4->max = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
   break;
  case 0x2:
   VAR_4->min = FUNC_2(VAR_0, VAR_1, VAR_2, -1);
   VAR_4->max = FUNC_1(VAR_0, VAR_1, 0, VAR_3);
   break;
  case 0x8:
   VAR_4->min = FUNC_2(VAR_0, -1, VAR_2, VAR_3);
   VAR_4->max = FUNC_1(0, VAR_1, VAR_2, VAR_3);
   break;
  case 0xa:
   VAR_4->min = FUNC_0(VAR_0, VAR_2);
   VAR_4->max = FUNC_1(0, VAR_1, 0, VAR_3);
   break;
  case 0xb:
   VAR_4->min = VAR_2;
   VAR_4->max = -1;
   break;
  case 0xe:
   VAR_4->min = VAR_0;
   VAR_4->max = -1;
   break;
 }
}
