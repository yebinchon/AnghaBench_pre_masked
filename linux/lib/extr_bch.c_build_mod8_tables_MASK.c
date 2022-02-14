
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bch_control {int* mod8_tab; scalar_t__ ecc_bits; } ;


 int FUNC_0 (struct bch_control*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct bch_control *VAR_0, const uint32_t *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, *VAR_9;
 const int VAR_10 = FUNC_0(VAR_0);
 const int VAR_11 = FUNC_1(VAR_0->ecc_bits+1, 32);
 const int VAR_12 = FUNC_1(VAR_0->ecc_bits, 32);

 FUNC_3(VAR_0->mod8_tab, 0, 4*256*VAR_10*sizeof(*VAR_0->mod8_tab));

 for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {

  for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {

   VAR_9 = VAR_0->mod8_tab + (VAR_4*256+VAR_2)*VAR_10;
   VAR_6 = VAR_2 << (8*VAR_4);
   while (VAR_6) {
    VAR_5 = FUNC_2(VAR_6);

    VAR_6 ^= VAR_1[0] >> (31-VAR_5);
    for (VAR_3 = 0; VAR_3 < VAR_12; VAR_3++) {
     VAR_7 = (VAR_5 < 31) ? VAR_1[VAR_3] << (VAR_5+1) : 0;
     VAR_8 = (VAR_3+1 < VAR_11) ?
      VAR_1[VAR_3+1] >> (31-VAR_5) : 0;
     VAR_9[VAR_3] ^= VAR_7|VAR_8;
    }
   }
  }
 }
}
