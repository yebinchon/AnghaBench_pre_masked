
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pcg_state_64 {int dummy; } ;


 int FUNC_0 (struct pcg_state_64*) ;

inline uint64_t
FUNC_1(struct pcg_state_64 *VAR_0,
                                         uint64_t VAR_1) {
  uint64_t VAR_2 = -VAR_1 % VAR_1;
  for (;;) {
    uint64_t VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 >= VAR_2)
      return VAR_3 % VAR_1;
  }
}
