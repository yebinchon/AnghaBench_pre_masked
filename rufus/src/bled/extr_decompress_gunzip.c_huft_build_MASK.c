
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned short n; TYPE_2__* t; } ;
struct TYPE_6__ {unsigned char b; unsigned char e; TYPE_1__ v; } ;
typedef TYPE_2__ huft_t ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*,int ,int) ;
 TYPE_2__* FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(const unsigned *VAR_2, const unsigned VAR_3,
   const unsigned VAR_4, const unsigned short *VAR_5,
   const unsigned char *VAR_6, huft_t **VAR_7, unsigned *VAR_8)
{
 unsigned VAR_9;
 unsigned VAR_10[VAR_0 + 1];
 unsigned VAR_11;
 unsigned VAR_12;
 int VAR_13;
 int VAR_14;
 unsigned VAR_15;
 unsigned VAR_16;
 int VAR_17;
 unsigned *VAR_18;
 huft_t *VAR_19;
 huft_t VAR_20;
 huft_t *VAR_21[VAR_0];
 unsigned VAR_22[VAR_1];
 int VAR_23[VAR_0 + 1];
 int VAR_24;
 unsigned VAR_25[VAR_0 + 1];
 unsigned *VAR_26;
 int VAR_27;
 unsigned VAR_28;


 VAR_11 = VAR_3 > 256 ? VAR_2[256] : VAR_0;

 *VAR_7 = ((void*)0);


 FUNC_0(VAR_10, 0, sizeof(VAR_10));
 VAR_18 = (unsigned *) VAR_2;
 VAR_15 = VAR_3;
 do {
  VAR_10[*VAR_18]++;
  VAR_18++;
 } while (--VAR_15);
 if (VAR_10[0] == VAR_3) {
  *VAR_8 = 0;
  return 2;
 }


 for (VAR_16 = 1; (VAR_16 <= VAR_0) && (VAR_10[VAR_16] == 0); VAR_16++)
  continue;
 VAR_17 = VAR_16;
 for (VAR_15 = VAR_0; (VAR_10[VAR_15] == 0) && VAR_15; VAR_15--)
  continue;
 VAR_13 = VAR_15;
 *VAR_8 = (*VAR_8 < VAR_16) ? VAR_16 : ((*VAR_8 > VAR_15) ? VAR_15 : *VAR_8);


 for (VAR_27 = 1 << VAR_16; VAR_16 < VAR_15; VAR_16++, VAR_27 <<= 1) {
  VAR_27 -= VAR_10[VAR_16];
  if (VAR_27 < 0)
   return 2;
 }
 VAR_27 -= VAR_10[VAR_15];
 if (VAR_27 < 0)
  return 2;
 VAR_10[VAR_15] += VAR_27;


 VAR_25[1] = VAR_16 = 0;
 VAR_18 = VAR_10 + 1;
 VAR_26 = VAR_25 + 2;
 while (--VAR_15) {
  VAR_16 += *VAR_18++;
  *VAR_26++ = VAR_16;
 }


 VAR_18 = (unsigned *) VAR_2;
 VAR_15 = 0;
 do {
  VAR_16 = *VAR_18++;
  if (VAR_16 != 0) {
   VAR_22[VAR_25[VAR_16]++] = VAR_15;
  }
 } while (++VAR_15 < VAR_3);


 VAR_25[0] = VAR_15 = 0;
 VAR_18 = VAR_22;
 VAR_14 = -1;
 VAR_24 = VAR_23[0] = 0;
 VAR_21[0] = ((void*)0);
 VAR_19 = ((void*)0);
 VAR_28 = 0;


 for (; VAR_17 <= VAR_13; VAR_17++) {
  VAR_9 = VAR_10[VAR_17];
  while (VAR_9--) {


   while (VAR_17 > VAR_23[VAR_14 + 1]) {
    VAR_24 = VAR_23[++VAR_14];


    VAR_28 = VAR_13 - VAR_24;
    VAR_28 = VAR_28 > *VAR_8 ? *VAR_8 : VAR_28;
    VAR_16 = VAR_17 - VAR_24;
    VAR_12 = 1 << VAR_16;
    if (VAR_12 > VAR_9 + 1) {

     VAR_12 -= VAR_9 + 1;
     VAR_26 = VAR_10 + VAR_17;
     while (++VAR_16 < VAR_28) {
      VAR_12 <<= 1;
      if (VAR_12 <= *++VAR_26) {
       break;
      }
      VAR_12 -= *VAR_26;
     }
    }
    VAR_16 = ((VAR_24 + VAR_16) > (int)VAR_11 && VAR_24 < (int)VAR_11) ? VAR_11 - VAR_24 : VAR_16;
    VAR_28 = 1 << VAR_16;
    VAR_23[VAR_14+1] = VAR_24 + VAR_16;


    VAR_19 = FUNC_1((VAR_28 + 1) * sizeof(huft_t));
    *VAR_7 = VAR_19 + 1;
    VAR_7 = &(VAR_19->v.t);
    VAR_21[VAR_14] = ++VAR_19;


    if (VAR_14) {
     VAR_25[VAR_14] = VAR_15;
     VAR_20.b = (unsigned char) (VAR_24 - VAR_23[VAR_14 - 1]);
     VAR_20.e = (unsigned char) (16 + VAR_16);
     VAR_20.v.t = VAR_19;
     VAR_16 = (VAR_15 & ((1 << VAR_24) - 1)) >> VAR_23[VAR_14 - 1];
     VAR_21[VAR_14 - 1][VAR_16] = VAR_20;
    }
   }


   VAR_20.b = (unsigned char) (VAR_17 - VAR_24);
   if (VAR_18 >= VAR_22 + VAR_3) {
    VAR_20.e = 99;
   } else if (*VAR_18 < VAR_4) {
    VAR_20.e = (unsigned char) (*VAR_18 < 256 ? 16 : 15);
    VAR_20.v.n = (unsigned short) (*VAR_18++);
   } else {
    VAR_20.e = (unsigned char) VAR_6[*VAR_18 - VAR_4];
    VAR_20.v.n = VAR_5[*VAR_18++ - VAR_4];
   }


   VAR_12 = 1 << (VAR_17 - VAR_24);
   for (VAR_16 = VAR_15 >> VAR_24; VAR_16 < VAR_28; VAR_16 += VAR_12) {
    VAR_19[VAR_16] = VAR_20;
   }


   for (VAR_16 = 1 << (VAR_17 - 1); VAR_15 & VAR_16; VAR_16 >>= 1) {
    VAR_15 ^= VAR_16;
   }
   VAR_15 ^= VAR_16;


   while ((VAR_15 & ((1 << VAR_24) - 1)) != VAR_25[VAR_14]) {
    VAR_24 = VAR_23[--VAR_14];
   }
  }
 }


 *VAR_8 = VAR_23[1];


 return VAR_27 != 0 && VAR_13 != 1;
}
