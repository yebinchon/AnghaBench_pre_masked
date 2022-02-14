
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm801 {int secondary_addr; int secondary; scalar_t__ multichannel; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (struct fm801*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fm801*,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct fm801 *VAR_2)
{
 unsigned short VAR_3;

 if (VAR_2->multichannel) {
  if (VAR_2->secondary_addr) {
   FUNC_2(VAR_2, VAR_2->secondary_addr,
           VAR_1, FUNC_1(50));
  } else {


   int VAR_4;
   for (VAR_4 = 3; VAR_4 > 0; VAR_4--) {
    if (!FUNC_2(VAR_2, VAR_4, VAR_1,
           FUNC_1(50))) {
     VAR_3 = FUNC_0(VAR_2, VAR_0);
     if (VAR_3 != 0xffff && VAR_3 != 0) {
      VAR_2->secondary = 1;
      VAR_2->secondary_addr = VAR_4;
      break;
     }
    }
   }
  }



  FUNC_2(VAR_2, 0, VAR_1, FUNC_1(750));
 }
}
