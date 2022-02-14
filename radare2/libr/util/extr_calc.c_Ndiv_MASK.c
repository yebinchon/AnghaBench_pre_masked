
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int d; int n; } ;
typedef TYPE_1__ RNumCalcValue ;



__attribute__((used)) static inline RNumCalcValue FUNC_0(RNumCalcValue VAR_0, RNumCalcValue VAR_1) {
 if (VAR_1.d) {
  VAR_0.d /= VAR_1.d;
 } else {
  VAR_0.d = 0;
 }
 if (VAR_1.n) {
  VAR_0.n /= VAR_1.n;
 } else {
  VAR_0.n = 0;
 }
 return VAR_0;
}
