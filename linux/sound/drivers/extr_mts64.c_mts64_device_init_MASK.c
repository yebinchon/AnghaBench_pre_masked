
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct parport*) ;
 scalar_t__ FUNC_2 (struct parport*) ;
 int FUNC_3 (struct parport*,int ) ;

__attribute__((used)) static int FUNC_4(struct parport *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_2, VAR_1);

 for (VAR_3 = 0; VAR_3 < 64; ++VAR_3) {
  FUNC_0(100);

  if (FUNC_2(VAR_2) == 0) {

   FUNC_1(VAR_2);
   return 0;
  }
 }
 FUNC_1(VAR_2);

 return -VAR_0;
}
