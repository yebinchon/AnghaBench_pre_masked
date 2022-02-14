
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bch_control {unsigned int* a_pow_tab; } ;


 int FUNC_0 (struct bch_control*) ;
 int FUNC_1 (struct bch_control*,unsigned int) ;
 size_t FUNC_2 (struct bch_control*,int) ;
 int FUNC_3 (struct bch_control*,unsigned int*,unsigned int*,int) ;

__attribute__((used)) static int FUNC_4(struct bch_control *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2, unsigned int VAR_3,
         unsigned int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 const int VAR_8 = FUNC_0(VAR_0);
 unsigned int VAR_9 = 0xff, VAR_10, VAR_11[16] = {0,};

 VAR_6 = FUNC_1(VAR_0, VAR_2);
 VAR_7 = FUNC_1(VAR_0, VAR_1);
 VAR_11[0] = VAR_3;


 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  VAR_11[VAR_5+1] = VAR_0->a_pow_tab[4*VAR_5]^
   (VAR_1 ? VAR_0->a_pow_tab[FUNC_2(VAR_0, VAR_7)] : 0)^
   (VAR_2 ? VAR_0->a_pow_tab[FUNC_2(VAR_0, VAR_6)] : 0);
  VAR_6++;
  VAR_7 += 2;
 }




 for (VAR_6 = 8; VAR_6 != 0; VAR_6 >>= 1, VAR_9 ^= (VAR_9 << VAR_6)) {
  for (VAR_7 = 0; VAR_7 < 16; VAR_7 = (VAR_7+VAR_6+1) & ~VAR_6) {
   VAR_10 = ((VAR_11[VAR_7] >> VAR_6)^VAR_11[VAR_7+VAR_6]) & VAR_9;
   VAR_11[VAR_7] ^= (VAR_10 << VAR_6);
   VAR_11[VAR_7+VAR_6] ^= VAR_10;
  }
 }
 return FUNC_3(VAR_0, VAR_11, VAR_4, 4);
}
