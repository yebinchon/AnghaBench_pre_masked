
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* counts; double** streaks; } ;
typedef TYPE_1__ VP8LStreaks ;


 double FUNC_0 () ;

__attribute__((used)) static double FUNC_1(const VP8LStreaks* const VAR_0) {


  double VAR_1 = FUNC_0();


  VAR_1 += VAR_0->counts[0] * 1.5625 + 0.234375 * VAR_0->streaks[0][1];


  VAR_1 += VAR_0->counts[1] * 2.578125 + 0.703125 * VAR_0->streaks[1][1];


  VAR_1 += 1.796875 * VAR_0->streaks[0][0];

  VAR_1 += 3.28125 * VAR_0->streaks[1][0];
  return VAR_1;
}
