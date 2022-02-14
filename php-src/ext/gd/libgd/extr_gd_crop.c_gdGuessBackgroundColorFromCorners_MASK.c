
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdImagePtr ;


 int FUNC_0 (int ,int const) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,int,int,int,int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int const) ;
 int FUNC_5 (int ,int const) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(gdImagePtr VAR_0, int *VAR_1)
{
 const int VAR_2 = FUNC_3(VAR_0, 0, 0);
 const int VAR_3 = FUNC_3(VAR_0, FUNC_6(VAR_0) - 1, 0);
 const int VAR_4 = FUNC_3(VAR_0, 0, FUNC_7(VAR_0) -1);
 const int VAR_5 = FUNC_3(VAR_0, FUNC_6(VAR_0) - 1, FUNC_7(VAR_0) -1);

 if (VAR_3 == VAR_4 && VAR_3 == VAR_5) {
  *VAR_1 = VAR_3;
  return 3;
 } else if (VAR_2 == VAR_4 && VAR_2 == VAR_5) {
  *VAR_1 = VAR_2;
  return 3;
 } else if (VAR_2 == VAR_3 && VAR_2 == VAR_5) {
  *VAR_1 = VAR_2;
  return 3;
 } else if (VAR_2 == VAR_3 && VAR_2 == VAR_4) {
  *VAR_1 = VAR_2;
  return 3;
 } else if (VAR_2 == VAR_3 || VAR_2 == VAR_4 || VAR_2 == VAR_5) {
  *VAR_1 = VAR_2;
  return 2;
 } else if (VAR_3 == VAR_4 || VAR_3 == VAR_5) {
  *VAR_1 = VAR_3;
  return 2;
 } else if (VAR_5 == VAR_4) {
  *VAR_1 = VAR_4;
  return 2;
 } else {
  register int VAR_6,VAR_7,VAR_8,VAR_9;

  VAR_6 = (int)(0.5f + (FUNC_5(VAR_0, VAR_2) + FUNC_5(VAR_0, VAR_3) + FUNC_5(VAR_0, VAR_4) + FUNC_5(VAR_0, VAR_5)) / 4);
  VAR_8 = (int)(0.5f + (FUNC_4(VAR_0, VAR_2) + FUNC_4(VAR_0, VAR_3) + FUNC_4(VAR_0, VAR_4) + FUNC_4(VAR_0, VAR_5)) / 4);
  VAR_7 = (int)(0.5f + (FUNC_1(VAR_0, VAR_2) + FUNC_1(VAR_0, VAR_3) + FUNC_1(VAR_0, VAR_4) + FUNC_1(VAR_0, VAR_5)) / 4);
  VAR_9 = (int)(0.5f + (FUNC_0(VAR_0, VAR_2) + FUNC_0(VAR_0, VAR_3) + FUNC_0(VAR_0, VAR_4) + FUNC_0(VAR_0, VAR_5)) / 4);
  *VAR_1 = FUNC_2(VAR_0, VAR_6, VAR_8, VAR_7, VAR_9);
  return 0;
 }
}
