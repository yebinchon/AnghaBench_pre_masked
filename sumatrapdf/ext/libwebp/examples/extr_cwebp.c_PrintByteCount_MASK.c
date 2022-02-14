
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int const,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const int VAR_1[4], int VAR_2,
                           int* const VAR_3) {
  int VAR_4;
  int VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
    FUNC_0(VAR_0, "| %7d ", VAR_1[VAR_4]);
    VAR_5 += VAR_1[VAR_4];
    if (VAR_3) VAR_3[VAR_4] += VAR_1[VAR_4];
  }
  FUNC_0(VAR_0, "| %7d  (%.1f%%)\n", VAR_5, 100.f * VAR_5 / VAR_2);
}
