
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ addr ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 uintptr_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_2(long VAR_3, long *VAR_4)
{
 size_t VAR_5 = ((uintptr_t) (VAR_3) % VAR_0);
 vm_offset_t VAR_6 = (uintptr_t) (VAR_3) - VAR_5;

 if (VAR_6 != VAR_2) {
  FUNC_0();
  if (0 > FUNC_1(VAR_6)) {
   return -1;
  }
 }
 *VAR_4 = * (long *) (VAR_1 + VAR_5);
 return 0;
}
