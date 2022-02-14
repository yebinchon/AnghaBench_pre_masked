
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf_poly {size_t* c; } ;
struct bch_control {int* a_log_tab; unsigned int* xi_tab; } ;


 int FUNC_0 (struct bch_control*) ;
 unsigned int FUNC_1 (struct bch_control*,int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct bch_control*,unsigned int) ;
 unsigned int FUNC_4 (struct bch_control*,int) ;

__attribute__((used)) static int FUNC_5(struct bch_control *VAR_0, struct gf_poly *VAR_1,
    unsigned int *VAR_2)
{
 int VAR_3 = 0, VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;

 if (VAR_1->c[0] && VAR_1->c[1]) {

  VAR_5 = VAR_0->a_log_tab[VAR_1->c[0]];
  VAR_6 = VAR_0->a_log_tab[VAR_1->c[1]];
  VAR_7 = VAR_0->a_log_tab[VAR_1->c[2]];


  VAR_8 = FUNC_1(VAR_0, VAR_5+VAR_7+2*(FUNC_0(VAR_0)-VAR_6));






  VAR_10 = 0;
  VAR_9 = VAR_8;
  while (VAR_9) {
   VAR_4 = FUNC_2(VAR_9);
   VAR_10 ^= VAR_0->xi_tab[VAR_4];
   VAR_9 ^= (1 << VAR_4);
  }

  if ((FUNC_3(VAR_0, VAR_10)^VAR_10) == VAR_8) {

   VAR_2[VAR_3++] = FUNC_4(VAR_0, 2*FUNC_0(VAR_0)-VAR_6-
         VAR_0->a_log_tab[VAR_10]+VAR_7);
   VAR_2[VAR_3++] = FUNC_4(VAR_0, 2*FUNC_0(VAR_0)-VAR_6-
         VAR_0->a_log_tab[VAR_10^1]+VAR_7);
  }
 }
 return VAR_3;
}
