
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bch_control {struct bch_control** poly_2t; struct bch_control* elp; struct bch_control* cache; struct bch_control* syn; struct bch_control* xi_tab; struct bch_control* ecc_buf2; struct bch_control* ecc_buf; struct bch_control* mod8_tab; struct bch_control* a_log_tab; struct bch_control* a_pow_tab; } ;


 unsigned int FUNC_0 (struct bch_control**) ;
 int FUNC_1 (struct bch_control*) ;

void FUNC_2(struct bch_control *VAR_0)
{
 unsigned int VAR_1;

 if (VAR_0) {
  FUNC_1(VAR_0->a_pow_tab);
  FUNC_1(VAR_0->a_log_tab);
  FUNC_1(VAR_0->mod8_tab);
  FUNC_1(VAR_0->ecc_buf);
  FUNC_1(VAR_0->ecc_buf2);
  FUNC_1(VAR_0->xi_tab);
  FUNC_1(VAR_0->syn);
  FUNC_1(VAR_0->cache);
  FUNC_1(VAR_0->elp);

  for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->poly_2t); VAR_1++)
   FUNC_1(VAR_0->poly_2t[VAR_1]);

  FUNC_1(VAR_0);
 }
}
