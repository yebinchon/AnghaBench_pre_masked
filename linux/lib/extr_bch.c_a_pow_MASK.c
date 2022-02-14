
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bch_control {unsigned int* a_pow_tab; } ;


 size_t FUNC_0 (struct bch_control*,int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct bch_control *VAR_0, int VAR_1)
{
 return VAR_0->a_pow_tab[FUNC_0(VAR_0, VAR_1)];
}
