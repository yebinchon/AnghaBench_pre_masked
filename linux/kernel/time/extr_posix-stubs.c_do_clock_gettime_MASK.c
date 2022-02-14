
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
typedef int clockid_t ;





 int VAR_0 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (struct timespec64*) ;
 int FUNC_2 (struct timespec64*) ;

int FUNC_3(clockid_t VAR_1, struct timespec64 *VAR_2)
{
 switch (VAR_1) {
 case 128:
  FUNC_1(VAR_2);
  break;
 case 129:
  FUNC_2(VAR_2);
  break;
 case 130:
  FUNC_0(VAR_2);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
