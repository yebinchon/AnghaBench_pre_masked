
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bch_control {unsigned int* a_pow_tab; unsigned int* a_log_tab; } ;


 unsigned int FUNC_0 (struct bch_control*) ;
 size_t FUNC_1 (struct bch_control*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct bch_control *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3 = 1;
 const unsigned int VAR_4 = 1 << FUNC_2(VAR_1);


 if (VAR_4 != (1u << FUNC_0(VAR_0)))
  return -1;

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0); VAR_2++) {
  VAR_0->a_pow_tab[VAR_2] = VAR_3;
  VAR_0->a_log_tab[VAR_3] = VAR_2;
  if (VAR_2 && (VAR_3 == 1))

   return -1;
  VAR_3 <<= 1;
  if (VAR_3 & VAR_4)
   VAR_3 ^= VAR_1;
 }
 VAR_0->a_pow_tab[FUNC_1(VAR_0)] = 1;
 VAR_0->a_log_tab[0] = 0;

 return 0;
}
