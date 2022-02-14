
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static char *FUNC_1(char *VAR_1, unsigned int VAR_2) {
  int VAR_3 = (VAR_2 + 2) / 3 * 4;

  char *VAR_4 = (char *) FUNC_0(1,VAR_3 + 1);
  VAR_4[VAR_3] = '\0';
  int VAR_5 = 0, VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += 3) {
    int VAR_7 = VAR_1[VAR_6];
    int VAR_8 = (VAR_6 + 1 < VAR_2) ? VAR_1[VAR_6 + 1] : 0;
    int VAR_9 = (VAR_6 + 2 < VAR_2) ? VAR_1[VAR_6 + 2] : 0;
    VAR_4[VAR_5++] = VAR_0[VAR_7 >> 2];
    VAR_4[VAR_5++] = VAR_0[((VAR_7 & 3) << 4) | (VAR_8 >> 4)];
    VAR_4[VAR_5++] = (VAR_6 + 1 < VAR_2) ? VAR_0[((VAR_8 & 15) << 2) | (VAR_9 >> 6)] : 61;
    VAR_4[VAR_5++] = (VAR_6 + 2 < VAR_2) ? VAR_0[(VAR_9 & 63)] : 61;
  }

  return VAR_4;
}
