
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcg_state_setseq_128 {int dummy; } ;
typedef int pcg128_t ;


 int FUNC_0 (struct pcg_state_setseq_128*) ;

inline pcg128_t
FUNC_1(struct pcg_state_setseq_128 *VAR_0,
                                          pcg128_t VAR_1) {
  pcg128_t VAR_2 = -VAR_1 % VAR_1;
  for (;;) {
    pcg128_t VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 >= VAR_2)
      return VAR_3 % VAR_1;
  }
}
