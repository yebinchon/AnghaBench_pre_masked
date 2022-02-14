
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int ,int const*,int ,int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static double FUNC_1(const uint8_t* VAR_5, const uint8_t* VAR_6) {
  int VAR_7, VAR_8;
  double VAR_9 = 0.;


  for (VAR_8 = VAR_2; VAR_8 < 16 - VAR_2; VAR_8++) {
    for (VAR_7 = VAR_2; VAR_7 < 16 - VAR_2; VAR_7++) {
      VAR_9 += FUNC_0(VAR_5 + VAR_4, VAR_0, VAR_6 + VAR_4, VAR_0,
                               VAR_7, VAR_8, 16, 16);
    }
  }
  for (VAR_7 = 1; VAR_7 < 7; VAR_7++) {
    for (VAR_8 = 1; VAR_8 < 7; VAR_8++) {
      VAR_9 += FUNC_0(VAR_5 + VAR_1, VAR_0, VAR_6 + VAR_1, VAR_0,
                               VAR_7, VAR_8, 8, 8);
      VAR_9 += FUNC_0(VAR_5 + VAR_3, VAR_0, VAR_6 + VAR_3, VAR_0,
                               VAR_7, VAR_8, 8, 8);
    }
  }
  return VAR_9;
}
