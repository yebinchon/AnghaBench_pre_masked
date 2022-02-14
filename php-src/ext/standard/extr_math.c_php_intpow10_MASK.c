
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,double) ;

__attribute__((used)) static inline double FUNC_1(int VAR_0) {
 static const double VAR_1[] = {
  1e0, 1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7,
  1e8, 1e9, 1e10, 1e11, 1e12, 1e13, 1e14, 1e15,
  1e16, 1e17, 1e18, 1e19, 1e20, 1e21, 1e22};


 if (VAR_0 < 0 || VAR_0 > 22) {
  return FUNC_0(10.0, (double)VAR_0);
 }
 return VAR_1[VAR_0];
}
