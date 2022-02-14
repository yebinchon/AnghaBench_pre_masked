
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char JSAMPLE ;



void FUNC_0(JSAMPLE *VAR_0, int VAR_1, int VAR_2, unsigned char *VAR_3,
 int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  int VAR_8;
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
      VAR_0[VAR_1*VAR_9 + VAR_8] = VAR_3[VAR_4*VAR_9 + VAR_8];
    }
  }
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
      VAR_0[VAR_1*VAR_2 + (VAR_1/2)*VAR_9 + VAR_8] =
       VAR_3[VAR_4*VAR_5 + VAR_6*VAR_9 + VAR_8];
      VAR_0[VAR_1*VAR_2 + (VAR_1/2)*((VAR_2/2) + VAR_9) + VAR_8] =
       VAR_3[VAR_4*VAR_5 + VAR_6*(VAR_7 + VAR_9) + VAR_8];
    }
  }


  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
    for (VAR_8 = VAR_4; VAR_8 < VAR_1; VAR_8++) {
      VAR_0[VAR_1*VAR_9 + VAR_8] = VAR_0[VAR_1*VAR_9 + (VAR_8 - 1)];
    }
  }
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
    for (VAR_8 = VAR_6; VAR_8 < VAR_1/2; VAR_8++) {
      VAR_0[VAR_1*VAR_2 + (VAR_1/2)*VAR_9 + VAR_8] =
       VAR_0[VAR_1*VAR_2 + (VAR_1/2)*VAR_9 + (VAR_8 - 1)];
      VAR_0[VAR_1*VAR_2 + (VAR_1/2)*((VAR_2/2) + VAR_9) + VAR_8] =
       VAR_0[VAR_1*VAR_2 + (VAR_1/2)*((VAR_2/2) + VAR_9) + (VAR_8 - 1)];
    }
  }


  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    for (VAR_9 = VAR_5; VAR_9 < VAR_2; VAR_9++) {
      VAR_0[VAR_1*VAR_9 + VAR_8] = VAR_0[VAR_1*(VAR_9 - 1) + VAR_8];
    }
  }
  for (VAR_8 = 0; VAR_8 < VAR_1/2; VAR_8++) {
    for (VAR_9 = VAR_7; VAR_9 < VAR_2/2; VAR_9++) {
      VAR_0[VAR_1*VAR_2 + (VAR_1/2)*VAR_9 + VAR_8] =
       VAR_0[VAR_1*VAR_2 + (VAR_1/2)*(VAR_9 - 1) + VAR_8];
      VAR_0[VAR_1*VAR_2 + (VAR_1/2)*((VAR_2/2) + VAR_9) + VAR_8] =
       VAR_0[VAR_1*VAR_2 + (VAR_1/2)*((VAR_2/2) + (VAR_9 - 1)) + VAR_8];
    }
  }
}
