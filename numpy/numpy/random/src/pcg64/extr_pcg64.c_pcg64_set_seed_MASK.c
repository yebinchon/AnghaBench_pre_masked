
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int pcg_state; } ;
typedef TYPE_1__ pcg64_state ;
typedef int pcg128_t ;


 int FUNC_0 (int ,int,int) ;

extern void FUNC_1(pcg64_state *VAR_0, uint64_t *VAR_1, uint64_t *VAR_2) {
  pcg128_t VAR_3, VAR_4;

  VAR_3 = (((pcg128_t)VAR_1[0]) << 64) | VAR_1[1];
  VAR_4 = (((pcg128_t)VAR_2[0]) << 64) | VAR_2[1];






  FUNC_0(VAR_0->pcg_state, VAR_3, VAR_4);
}
