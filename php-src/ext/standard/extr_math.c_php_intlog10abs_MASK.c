
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (double) ;

__attribute__((used)) static inline int FUNC_3(double VAR_0) {
 int VAR_1;
 VAR_0 = FUNC_0(VAR_0);

 if (VAR_0 < 1e-8 || VAR_0 > 1e22) {
  VAR_1 = (int)FUNC_1(FUNC_2(VAR_0));
 } else {
  static const double VAR_2[] = {
   1e-8, 1e-7, 1e-6, 1e-5, 1e-4, 1e-3, 1e-2, 1e-1,
   1e0, 1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7,
   1e8, 1e9, 1e10, 1e11, 1e12, 1e13, 1e14, 1e15,
   1e16, 1e17, 1e18, 1e19, 1e20, 1e21, 1e22};

  VAR_1 = 15;
  if (VAR_0 < VAR_2[VAR_1]) {
   VAR_1 -= 8;
  } else {
   VAR_1 += 8;
  }
  if (VAR_0 < VAR_2[VAR_1]) {
   VAR_1 -= 4;
  } else {
   VAR_1 += 4;
  }
  if (VAR_0 < VAR_2[VAR_1]) {
   VAR_1 -= 2;
  } else {
   VAR_1 += 2;
  }
  if (VAR_0 < VAR_2[VAR_1]) {
   VAR_1 -= 1;
  } else {
   VAR_1 += 1;
  }
  if (VAR_0 < VAR_2[VAR_1]) {
   VAR_1 -= 1;
  }
  VAR_1 -= 8;
 }
 return VAR_1;
}
