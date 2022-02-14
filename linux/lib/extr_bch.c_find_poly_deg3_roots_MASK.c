
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf_poly {int* c; } ;
struct bch_control {int dummy; } ;


 unsigned int FUNC_0 (struct bch_control*,unsigned int) ;
 int FUNC_1 (struct bch_control*,unsigned int,unsigned int,unsigned int,unsigned int*) ;
 unsigned int FUNC_2 (struct bch_control*,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (struct bch_control*,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (struct bch_control*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct bch_control *VAR_0, struct gf_poly *VAR_1,
    unsigned int *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12[4];

 if (VAR_1->c[0]) {

  VAR_11 = VAR_1->c[3];
  VAR_10 = FUNC_2(VAR_0, VAR_1->c[0], VAR_11);
  VAR_9 = FUNC_2(VAR_0, VAR_1->c[1], VAR_11);
  VAR_8 = FUNC_2(VAR_0, VAR_1->c[2], VAR_11);


  VAR_7 = FUNC_3(VAR_0, VAR_8, VAR_10);
  VAR_6 = FUNC_3(VAR_0, VAR_8, VAR_9)^VAR_10;
  VAR_5 = FUNC_4(VAR_0, VAR_8)^VAR_9;


  if (FUNC_1(VAR_0, VAR_5, VAR_6, VAR_7, VAR_12) == 4) {

   for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
    if (VAR_12[VAR_3] != VAR_8)
     VAR_2[VAR_4++] = FUNC_0(VAR_0, VAR_12[VAR_3]);
   }
  }
 }
 return VAR_4;
}
