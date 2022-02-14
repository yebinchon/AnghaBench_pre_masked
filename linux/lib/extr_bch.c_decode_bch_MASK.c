
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bch_control {int n; unsigned int ecc_bits; unsigned int* syn; int elp; int * ecc_buf; int * ecc_buf2; } ;


 unsigned int FUNC_0 (struct bch_control*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bch_control*,unsigned int const*) ;
 int FUNC_2 (struct bch_control*,int *,unsigned int*) ;
 int FUNC_3 (struct bch_control*,int const*,unsigned int,int *) ;
 int FUNC_4 (struct bch_control*,int,int ,unsigned int*) ;
 int FUNC_5 (struct bch_control*,int *,int const*) ;

int FUNC_6(struct bch_control *VAR_2, const uint8_t *VAR_3, unsigned int VAR_4,
        const uint8_t *VAR_5, const uint8_t *VAR_6,
        const unsigned int *VAR_7, unsigned int *VAR_8)
{
 const unsigned int VAR_9 = FUNC_0(VAR_2);
 unsigned int VAR_10;
 int VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14;


 if (8*VAR_4 > (VAR_2->n-VAR_2->ecc_bits))
  return -VAR_1;


 if (!VAR_7) {
  if (!VAR_6) {

   if (!VAR_3 || !VAR_5)
    return -VAR_1;
   FUNC_3(VAR_2, VAR_3, VAR_4, ((void*)0));
  } else {

   FUNC_5(VAR_2, VAR_2->ecc_buf, VAR_6);
  }

  if (VAR_5) {
   FUNC_5(VAR_2, VAR_2->ecc_buf2, VAR_5);

   for (VAR_11 = 0, VAR_14 = 0; VAR_11 < (int)VAR_9; VAR_11++) {
    VAR_2->ecc_buf[VAR_11] ^= VAR_2->ecc_buf2[VAR_11];
    VAR_14 |= VAR_2->ecc_buf[VAR_11];
   }
   if (!VAR_14)

    return 0;
  }
  FUNC_2(VAR_2, VAR_2->ecc_buf, VAR_2->syn);
  VAR_7 = VAR_2->syn;
 }

 VAR_12 = FUNC_1(VAR_2, VAR_7);
 if (VAR_12 > 0) {
  VAR_13 = FUNC_4(VAR_2, 1, VAR_2->elp, VAR_8);
  if (VAR_12 != VAR_13)
   VAR_12 = -1;
 }
 if (VAR_12 > 0) {

  VAR_10 = (VAR_4*8)+VAR_2->ecc_bits;
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   if (VAR_8[VAR_11] >= VAR_10) {
    VAR_12 = -1;
    break;
   }
   VAR_8[VAR_11] = VAR_10-1-VAR_8[VAR_11];
   VAR_8[VAR_11] = (VAR_8[VAR_11] & ~7)|(7-(VAR_8[VAR_11] & 7));
  }
 }
 return (VAR_12 >= 0) ? VAR_12 : -VAR_0;
}
