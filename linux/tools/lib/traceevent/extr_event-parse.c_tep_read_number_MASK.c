
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;


 int FUNC_0 (unsigned long long*,void const*,int) ;
 unsigned long long FUNC_1 (struct tep_handle*,unsigned short) ;
 unsigned long long FUNC_2 (struct tep_handle*,unsigned int) ;
 unsigned long long FUNC_3 (struct tep_handle*,unsigned long long) ;

unsigned long long FUNC_4(struct tep_handle *VAR_0,
       const void *VAR_1, int VAR_2)
{
 unsigned long long VAR_3;

 switch (VAR_2) {
 case 1:
  return *(unsigned char *)VAR_1;
 case 2:
  return FUNC_1(VAR_0, *(unsigned short *)VAR_1);
 case 4:
  return FUNC_2(VAR_0, *(unsigned int *)VAR_1);
 case 8:
  FUNC_0(&VAR_3, (VAR_1), sizeof(unsigned long long));
  return FUNC_3(VAR_0, VAR_3);
 default:

  return 0;
 }
}
