
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf_poly {unsigned int* c; } ;
struct bch_control {int dummy; } ;


 int FUNC_0 (struct bch_control*) ;
 unsigned int FUNC_1 (struct bch_control*,unsigned int) ;
 int FUNC_2 (struct bch_control*,unsigned int) ;
 unsigned int FUNC_3 (struct bch_control*,int) ;
 int FUNC_4 (struct bch_control*,unsigned int,unsigned int,unsigned int,unsigned int*) ;
 unsigned int FUNC_5 (struct bch_control*,unsigned int,unsigned int) ;
 unsigned int FUNC_6 (struct bch_control*,unsigned int) ;
 unsigned int FUNC_7 (struct bch_control*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct bch_control *VAR_0, struct gf_poly *VAR_1,
    unsigned int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = 0, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_1->c[0] == 0)
  return 0;


 VAR_15 = VAR_1->c[4];
 VAR_9 = FUNC_5(VAR_0, VAR_1->c[0], VAR_15);
 VAR_8 = FUNC_5(VAR_0, VAR_1->c[1], VAR_15);
 VAR_7 = FUNC_5(VAR_0, VAR_1->c[2], VAR_15);
 VAR_6 = FUNC_5(VAR_0, VAR_1->c[3], VAR_15);


 if (VAR_6) {

  if (VAR_8) {

   VAR_11 = FUNC_5(VAR_0, VAR_8, VAR_6);
   VAR_4 = FUNC_2(VAR_0, VAR_11);
   VAR_4 += (VAR_4 & 1) ? FUNC_0(VAR_0) : 0;
   VAR_10 = FUNC_3(VAR_0, VAR_4/2);







   VAR_9 = FUNC_3(VAR_0, 2*VAR_4)^FUNC_7(VAR_0, VAR_7, VAR_11)^VAR_9;
   VAR_7 = FUNC_7(VAR_0, VAR_6, VAR_10)^VAR_7;
  }

  if (VAR_9 == 0)

   return 0;

  VAR_14 = FUNC_6(VAR_0, VAR_9);
  VAR_13 = FUNC_5(VAR_0, VAR_6, VAR_9);
  VAR_12 = FUNC_5(VAR_0, VAR_7, VAR_9);
 } else {

  VAR_14 = VAR_9;
  VAR_13 = VAR_8;
  VAR_12 = VAR_7;
 }

 if (FUNC_4(VAR_0, VAR_12, VAR_13, VAR_14, VAR_2) == 4) {
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {

   VAR_11 = VAR_6 ? FUNC_6(VAR_0, VAR_2[VAR_3]) : VAR_2[VAR_3];
   VAR_2[VAR_3] = FUNC_1(VAR_0, VAR_11^VAR_10);
  }
  VAR_5 = 4;
 }
 return VAR_5;
}
