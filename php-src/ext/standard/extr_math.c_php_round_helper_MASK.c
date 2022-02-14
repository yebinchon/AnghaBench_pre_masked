
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (double) ;
 int FUNC_1 (double) ;

__attribute__((used)) static inline double FUNC_2(double VAR_3, int VAR_4) {
 double VAR_5;

 if (VAR_3 >= 0.0) {
  VAR_5 = FUNC_1(VAR_3 + 0.5);
  if ((VAR_4 == VAR_0 && VAR_3 == (-0.5 + VAR_5)) ||
   (VAR_4 == VAR_1 && VAR_3 == (0.5 + 2 * FUNC_1(VAR_5/2.0))) ||
   (VAR_4 == VAR_2 && VAR_3 == (0.5 + 2 * FUNC_1(VAR_5/2.0) - 1.0)))
  {
   VAR_5 = VAR_5 - 1.0;
  }
 } else {
  VAR_5 = FUNC_0(VAR_3 - 0.5);
  if ((VAR_4 == VAR_0 && VAR_3 == (0.5 + VAR_5)) ||
   (VAR_4 == VAR_1 && VAR_3 == (-0.5 + 2 * FUNC_0(VAR_5/2.0))) ||
   (VAR_4 == VAR_2 && VAR_3 == (-0.5 + 2 * FUNC_0(VAR_5/2.0) + 1.0)))
  {
   VAR_5 = VAR_5 + 1.0;
  }
 }

 return VAR_5;
}
