
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bch_control {int* mod8_tab; int* ecc_buf; } ;
typedef int r ;


 int VAR_0 ;
 int FUNC_0 (struct bch_control*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bch_control*,int const*,unsigned int,int*) ;
 int FUNC_4 (struct bch_control*,int*,int *) ;
 int FUNC_5 (int*,int*,size_t const) ;
 int FUNC_6 (int*,int ,size_t const) ;
 int FUNC_7 (struct bch_control*,int *,int*) ;

void FUNC_8(struct bch_control *VAR_1, const uint8_t *VAR_2,
  unsigned int VAR_3, uint8_t *VAR_4)
{
 const unsigned int VAR_5 = FUNC_0(VAR_1)-1;
 unsigned int VAR_6, VAR_7;
 unsigned long VAR_8;
 uint32_t VAR_9, VAR_10[VAR_0];
 const size_t VAR_11 = FUNC_0(VAR_1) * sizeof(*VAR_10);
 const uint32_t * const VAR_12 = VAR_1->mod8_tab;
 const uint32_t * const VAR_13 = VAR_12 + 256*(VAR_5+1);
 const uint32_t * const VAR_14 = VAR_13 + 256*(VAR_5+1);
 const uint32_t * const VAR_15 = VAR_14 + 256*(VAR_5+1);
 const uint32_t *VAR_16, *VAR_17, *VAR_18, *VAR_19, *VAR_20;

 if (FUNC_1(VAR_11 > sizeof(VAR_10)))
  return;

 if (VAR_4) {

  FUNC_4(VAR_1, VAR_1->ecc_buf, VAR_4);
 } else {
  FUNC_6(VAR_1->ecc_buf, 0, VAR_11);
 }


 VAR_8 = ((unsigned long)VAR_2) & 3;
 if (VAR_8) {
  VAR_7 = (VAR_3 < (4-VAR_8)) ? VAR_3 : 4-VAR_8;
  FUNC_3(VAR_1, VAR_2, VAR_7, VAR_1->ecc_buf);
  VAR_2 += VAR_7;
  VAR_3 -= VAR_7;
 }


 VAR_16 = (uint32_t *)VAR_2;
 VAR_7 = VAR_3/4;
 VAR_2 += 4*VAR_7;
 VAR_3 -= 4*VAR_7;
 FUNC_5(VAR_10, VAR_1->ecc_buf, VAR_11);
 while (VAR_7--) {

  VAR_9 = VAR_10[0]^FUNC_2(*VAR_16++);
  VAR_17 = VAR_12 + (VAR_5+1)*((VAR_9 >> 0) & 0xff);
  VAR_18 = VAR_13 + (VAR_5+1)*((VAR_9 >> 8) & 0xff);
  VAR_19 = VAR_14 + (VAR_5+1)*((VAR_9 >> 16) & 0xff);
  VAR_20 = VAR_15 + (VAR_5+1)*((VAR_9 >> 24) & 0xff);

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   VAR_10[VAR_6] = VAR_10[VAR_6+1]^VAR_17[VAR_6]^VAR_18[VAR_6]^VAR_19[VAR_6]^VAR_20[VAR_6];

  VAR_10[VAR_5] = VAR_17[VAR_5]^VAR_18[VAR_5]^VAR_19[VAR_5]^VAR_20[VAR_5];
 }
 FUNC_5(VAR_1->ecc_buf, VAR_10, VAR_11);


 if (VAR_3)
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_1->ecc_buf);


 if (VAR_4)
  FUNC_7(VAR_1, VAR_4, VAR_1->ecc_buf);
}
