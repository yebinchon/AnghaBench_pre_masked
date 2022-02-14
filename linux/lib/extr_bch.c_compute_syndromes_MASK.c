
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct bch_control {int ecc_bits; } ;


 int FUNC_0 (struct bch_control*) ;
 unsigned int FUNC_1 (struct bch_control*,int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct bch_control*,unsigned int) ;
 int FUNC_4 (unsigned int*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct bch_control *VAR_0, uint32_t *VAR_1,
         unsigned int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6;
 uint32_t VAR_7;
 const int VAR_8 = FUNC_0(VAR_0);

 VAR_5 = VAR_0->ecc_bits;


 VAR_6 = ((unsigned int)VAR_5) & 31;
 if (VAR_6)
  VAR_1[VAR_5/32] &= ~((1u << (32-VAR_6))-1);
 FUNC_4(VAR_2, 0, 2*VAR_8*sizeof(*VAR_2));


 do {
  VAR_7 = *VAR_1++;
  VAR_5 -= 32;
  while (VAR_7) {
   VAR_3 = FUNC_2(VAR_7);
   for (VAR_4 = 0; VAR_4 < 2*VAR_8; VAR_4 += 2)
    VAR_2[VAR_4] ^= FUNC_1(VAR_0, (VAR_4+1)*(VAR_3+VAR_5));

   VAR_7 ^= (1 << VAR_3);
  }
 } while (VAR_5 > 0);


 for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++)
  VAR_2[2*VAR_4+1] = FUNC_3(VAR_0, VAR_2[VAR_4]);
}
