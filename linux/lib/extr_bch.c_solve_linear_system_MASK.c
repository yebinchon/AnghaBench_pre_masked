
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bch_control {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bch_control*) ;
 int const FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct bch_control *VAR_1, unsigned int *VAR_2,
          unsigned int *VAR_3, int VAR_4)
{
 const int VAR_5 = FUNC_0(VAR_1);
 unsigned int VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13[VAR_0];

 VAR_12 = 0;
 VAR_7 = 1 << VAR_5;


 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8 = 0;
  VAR_11 = VAR_9-VAR_12;

  for (VAR_10 = VAR_11; VAR_10 < VAR_5; VAR_10++) {
   if (VAR_2[VAR_10] & VAR_7) {
    if (VAR_10 != VAR_11) {
     VAR_6 = VAR_2[VAR_10];
     VAR_2[VAR_10] = VAR_2[VAR_11];
     VAR_2[VAR_11] = VAR_6;
    }
    VAR_8 = VAR_10+1;
    break;
   }
  }
  if (VAR_8) {

   VAR_6 = VAR_2[VAR_11];
   for (VAR_10 = VAR_8; VAR_10 < VAR_5; VAR_10++) {
    if (VAR_2[VAR_10] & VAR_7)
     VAR_2[VAR_10] ^= VAR_6;
   }
  } else {

   VAR_13[VAR_12++] = VAR_9;
  }
  VAR_7 >>= 1;
 }

 if (VAR_12 > 0) {
  VAR_11 = VAR_12;
  for (VAR_10 = VAR_5-1; VAR_10 >= 0; VAR_10--) {
   if ((VAR_10 > VAR_5-1-VAR_12) && VAR_2[VAR_10])

    return 0;

   VAR_2[VAR_10] = (VAR_11 && (VAR_10 == VAR_13[VAR_11-1])) ?
    VAR_11--, 1u << (VAR_5-VAR_10) : VAR_2[VAR_10-VAR_11];
  }
 }

 if (VAR_4 != (1 << VAR_12))

  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {

  for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
   VAR_2[VAR_13[VAR_9]] = (VAR_2[VAR_13[VAR_9]] & ~1)|((VAR_11 >> VAR_9) & 1);


  VAR_6 = 0;
  for (VAR_10 = VAR_5-1; VAR_10 >= 0; VAR_10--) {
   VAR_7 = VAR_2[VAR_10] & (VAR_6|1);
   VAR_6 |= FUNC_1(VAR_7) << (VAR_5-VAR_10);
  }
  VAR_3[VAR_11] = VAR_6 >> 1;
 }
 return VAR_4;
}
