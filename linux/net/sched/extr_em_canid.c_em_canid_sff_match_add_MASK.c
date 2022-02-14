
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct canid_match {int match_sff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct canid_match *VAR_2, u32 VAR_3,
     u32 VAR_4)
{
 int VAR_5;





 VAR_4 &= VAR_1;
 VAR_3 &= VAR_4;


 if (VAR_4 == VAR_1) {
  FUNC_1(VAR_3, VAR_2->match_sff);
  return;
 }


 if (VAR_4 == 0) {
  FUNC_0(VAR_2->match_sff, (1 << VAR_0));
  return;
 }






 for (VAR_5 = 0; VAR_5 < (1 << VAR_0); VAR_5++) {
  if ((VAR_5 & VAR_4) == VAR_3)
   FUNC_1(VAR_5, VAR_2->match_sff);
 }
}
