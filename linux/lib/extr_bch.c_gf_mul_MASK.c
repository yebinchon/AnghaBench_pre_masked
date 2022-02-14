
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bch_control {unsigned int* a_pow_tab; scalar_t__* a_log_tab; } ;


 size_t FUNC_0 (struct bch_control*,scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct bch_control *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2)
{
 return (VAR_1 && VAR_2) ? VAR_0->a_pow_tab[FUNC_0(VAR_0, VAR_0->a_log_tab[VAR_1]+
            VAR_0->a_log_tab[VAR_2])] : 0;
}
