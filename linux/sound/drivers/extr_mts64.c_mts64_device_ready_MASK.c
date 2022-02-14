
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct parport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct parport*) ;

__attribute__((used)) static int FUNC_1(struct parport *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 for (VAR_2 = 0; VAR_2 < 0xffff; ++VAR_2) {
  VAR_3 = FUNC_0(VAR_1);
  VAR_3 &= VAR_0;
  if (VAR_3 != 0)
   return 1;
 }

 return 0;
}
