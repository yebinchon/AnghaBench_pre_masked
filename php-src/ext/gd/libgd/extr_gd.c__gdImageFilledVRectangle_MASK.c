
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdImagePtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_3 (gdImagePtr VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_1 == VAR_3 && VAR_2 == VAR_4) {
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5);
  return;
 }

 if (VAR_1 > VAR_3) {
  VAR_6 = VAR_1;
  VAR_1 = VAR_3;
  VAR_3 = VAR_6;
 }

 if (VAR_2 > VAR_4) {
  VAR_7 = VAR_2;
  VAR_2 = VAR_4;
  VAR_4 = VAR_7;
 }

 if (VAR_1 < 0) {
  VAR_1 = 0;
 }

 if (VAR_3 >= FUNC_0(VAR_0)) {
  VAR_3 = FUNC_0(VAR_0) - 1;
 }

 if (VAR_2 < 0) {
  VAR_2 = 0;
 }

 if (VAR_4 >= FUNC_1(VAR_0)) {
  VAR_4 = FUNC_1(VAR_0) - 1;
 }

 for (VAR_7 = VAR_2; (VAR_7 <= VAR_4); VAR_7++) {
  for (VAR_6 = VAR_1; (VAR_6 <= VAR_3); VAR_6++) {
   FUNC_2 (VAR_0, VAR_6, VAR_7, VAR_5);
  }
 }
}
