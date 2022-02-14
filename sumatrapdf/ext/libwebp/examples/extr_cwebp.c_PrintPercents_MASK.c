
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int const) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const int VAR_1[4]) {
  int VAR_2;
  const int VAR_3 = VAR_1[0] + VAR_1[1] + VAR_1[2] + VAR_1[3];
  for (VAR_2 = 0; VAR_2 < 4; ++VAR_2) {
    FUNC_0(VAR_0, "|      %2d%%", (int)(100. * VAR_1[VAR_2] / VAR_3 + .5));
  }
  FUNC_0(VAR_0, "| %7d\n", VAR_3);
}
