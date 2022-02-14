
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef int uchar ;



__attribute__((used)) static void FUNC_0 (uchar *VAR_0, ushort *VAR_1,
                             int VAR_2, int VAR_3) {
  int VAR_4, VAR_5;


  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) VAR_0[VAR_4] = 0;
  for (VAR_4 = 0; VAR_4 < 30 - VAR_2; ++VAR_4) VAR_0[VAR_4 + VAR_2] = VAR_4 / VAR_2;


  for (VAR_5 = VAR_3, VAR_4 = 0; VAR_4 < 30; ++VAR_4) {
    VAR_1[VAR_4] = VAR_5;
    VAR_5 += 1 << VAR_0[VAR_4];
  }
}
