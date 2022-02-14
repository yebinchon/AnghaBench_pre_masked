
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_3__ {int* s; } ;
typedef TYPE_1__ sfc64_state ;


 int FUNC_0 (int*) ;

extern void FUNC_1(sfc64_state *VAR_0, uint64_t *VAR_1) {



  int VAR_2;

  VAR_0->s[0] = VAR_1[0];
  VAR_0->s[1] = VAR_1[1];
  VAR_0->s[2] = VAR_1[2];
  VAR_0->s[3] = 1;

  for (VAR_2=0; VAR_2<12; VAR_2++) {
    (void)FUNC_0(VAR_0->s);
  }
}
