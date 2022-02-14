
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcg_state_64 {int dummy; } ;


 int FUNC_0 (struct pcg_state_64*) ;

inline uint32_t FUNC_1(struct pcg_state_64 *VAR_0,
                                                   uint32_t VAR_1) {
  uint32_t VAR_2 = -VAR_1 % VAR_1;
  for (;;) {
    uint32_t VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 >= VAR_2)
      return VAR_3 % VAR_1;
  }
}
