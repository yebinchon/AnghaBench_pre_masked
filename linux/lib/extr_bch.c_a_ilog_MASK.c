
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bch_control {scalar_t__* a_log_tab; } ;


 scalar_t__ FUNC_0 (struct bch_control*) ;
 int FUNC_1 (struct bch_control*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct bch_control *VAR_0, unsigned int VAR_1)
{
 return FUNC_1(VAR_0, FUNC_0(VAR_0)-VAR_0->a_log_tab[VAR_1]);
}
