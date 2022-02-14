
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct parport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct parport*) ;
 int FUNC_2 (struct parport*) ;
 int FUNC_3 (struct parport*,int) ;

__attribute__((used)) static int FUNC_4(struct parport *VAR_2)
{
 u8 VAR_3;

 FUNC_2(VAR_2);
 FUNC_3(VAR_2, VAR_1);

 FUNC_0(50);

 VAR_3 = FUNC_1(VAR_2);

 VAR_3 &= 0x00ff;
 if (VAR_3 != VAR_1)
  return -VAR_0;
 else
  return 0;

}
