
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(double VAR_1, double VAR_2, double VAR_3) {
  const double VAR_4 = VAR_2 - VAR_1;
  if (VAR_4 > 0.) {
    const double VAR_5 = VAR_3 - VAR_1;
    return (int)((VAR_0 - 1e-6) * VAR_5 / VAR_4);
  } else {
    return 0;
  }
}
