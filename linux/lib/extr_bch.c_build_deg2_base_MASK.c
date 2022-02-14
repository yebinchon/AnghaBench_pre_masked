
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xi ;
struct bch_control {unsigned int* a_pow_tab; unsigned int* xi_tab; } ;


 int VAR_0 ;
 int FUNC_0 (struct bch_control*) ;
 unsigned int FUNC_1 (struct bch_control*) ;
 int FUNC_2 (struct bch_control*,unsigned int) ;
 unsigned int FUNC_3 (struct bch_control*,int) ;
 int FUNC_4 (char*,int,unsigned int) ;
 unsigned int FUNC_5 (struct bch_control*,unsigned int) ;
 int FUNC_6 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct bch_control *VAR_1)
{
 const int VAR_2 = FUNC_0(VAR_1);
 int VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = 0, VAR_11[VAR_0];


 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  for (VAR_4 = 0, VAR_6 = 0; VAR_4 < VAR_2; VAR_4++)
   VAR_6 ^= FUNC_3(VAR_1, VAR_3*(1 << VAR_4));

  if (VAR_6) {
   VAR_10 = VAR_1->a_pow_tab[VAR_3];
   break;
  }
 }

 VAR_9 = VAR_2;
 FUNC_6(VAR_11, 0, sizeof(VAR_11));

 for (VAR_7 = 0; (VAR_7 <= FUNC_1(VAR_1)) && VAR_9; VAR_7++) {
  VAR_8 = FUNC_5(VAR_1, VAR_7)^VAR_7;
  for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
   VAR_5 = FUNC_2(VAR_1, VAR_8);
   if (VAR_8 && (VAR_5 < VAR_2) && !VAR_11[VAR_5]) {
    VAR_1->xi_tab[VAR_5] = VAR_7;
    VAR_11[VAR_5] = 1;
    VAR_9--;
    FUNC_4("x%d = %x\n", VAR_5, VAR_7);
    break;
   }
   VAR_8 ^= VAR_10;
  }
 }

 return VAR_9 ? -1 : 0;
}
