
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pcg_state_setseq_32 {int dummy; } ;


 int FUNC_0 (struct pcg_state_setseq_32*) ;

inline uint16_t
FUNC_1(struct pcg_state_setseq_32 *VAR_0,
                                      uint16_t VAR_1) {
  uint16_t VAR_2 = ((uint16_t)(-VAR_1)) % VAR_1;
  for (;;) {
    uint16_t VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 >= VAR_2)
      return VAR_3 % VAR_1;
  }
}
