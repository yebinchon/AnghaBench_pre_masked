
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int (* getC ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gdIOCtx ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 (TYPE_1__*) ;

int FUNC_4(signed int *VAR_1, gdIOCtx *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4 = 0;

 VAR_3 = (VAR_2->getC) (VAR_2);
 if (VAR_3 == VAR_0) {
  return 0;
 }
 VAR_4 |= (VAR_3 << 24);
 VAR_4 >>= 8;

 VAR_3 = (VAR_2->getC) (VAR_2);
 if (VAR_3 == VAR_0) {
  return 0;
 }
 VAR_4 |= (VAR_3 << 24);
 VAR_4 >>= 8;

 VAR_3 = (VAR_2->getC) (VAR_2);
 if (VAR_3 == VAR_0) {
  return 0;
 }
 VAR_4 |= (VAR_3 << 24);
 VAR_4 >>= 8;

 VAR_3 = (VAR_2->getC) (VAR_2);
 if (VAR_3 == VAR_0) {
  return 0;
 }
 VAR_4 |= (VAR_3 << 24);

 if (VAR_1) {
  *VAR_1 = (signed int)VAR_4;
 }

 return 1;
}
