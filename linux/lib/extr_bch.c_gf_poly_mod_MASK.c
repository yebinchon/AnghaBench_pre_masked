
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf_poly {unsigned int* c; unsigned int deg; } ;
struct bch_control {int* cache; unsigned int* a_pow_tab; } ;


 int FUNC_0 (struct bch_control*,unsigned int) ;
 int FUNC_1 (struct bch_control*,struct gf_poly const*,int*) ;
 size_t FUNC_2 (struct bch_control*,int) ;

__attribute__((used)) static void FUNC_3(struct bch_control *VAR_0, struct gf_poly *VAR_1,
   const struct gf_poly *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8, *VAR_9 = VAR_1->c;
 const unsigned int VAR_10 = VAR_2->deg;

 if (VAR_1->deg < VAR_10)
  return;


 if (!VAR_3) {
  VAR_3 = VAR_0->cache;
  FUNC_1(VAR_0, VAR_2, VAR_3);
 }

 for (VAR_8 = VAR_1->deg; VAR_8 >= VAR_10; VAR_8--) {
  if (VAR_9[VAR_8]) {
   VAR_4 = FUNC_0(VAR_0, VAR_9[VAR_8]);
   VAR_5 = VAR_8-VAR_10;
   for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++, VAR_5++) {
    VAR_6 = VAR_3[VAR_7];
    if (VAR_6 >= 0)
     VAR_9[VAR_5] ^= VAR_0->a_pow_tab[FUNC_2(VAR_0,
             VAR_6+VAR_4)];
   }
  }
 }
 VAR_1->deg = VAR_10-1;
 while (!VAR_9[VAR_1->deg] && VAR_1->deg)
  VAR_1->deg--;
}
