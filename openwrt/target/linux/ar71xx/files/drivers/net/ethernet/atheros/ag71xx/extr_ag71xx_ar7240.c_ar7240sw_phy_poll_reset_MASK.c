
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mii_bus*,int,int ) ;
 int FUNC_1 (unsigned int const) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct mii_bus *VAR_4)
{
 const unsigned int VAR_5 = 20;
 int VAR_6, VAR_7, VAR_8;

 for (VAR_7 = VAR_5; VAR_7 <= 600;
      VAR_7 += VAR_5) {
  FUNC_1(VAR_5);
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   VAR_6 = FUNC_0(VAR_4, VAR_8, VAR_3);
   if (VAR_6 < 0)
    return VAR_6;
   if (VAR_6 & VAR_1)
    break;
   if (VAR_8 == VAR_0 - 1) {
    FUNC_2(1000, 2000);
    return 0;
   }
  }
 }
 return -VAR_2;
}
