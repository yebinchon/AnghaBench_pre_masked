
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lookup_t {float* y; float* x; } ;



float FUNC_0(struct lookup_t VAR_0, float VAR_1) {

  int VAR_2 = sizeof(VAR_0.x) / sizeof(VAR_0.x[0]);
  float VAR_3 = VAR_0.y[VAR_2 - 1];


  if (VAR_1 <= VAR_0.x[0]) {
    VAR_3 = VAR_0.y[0];

  } else {

    for (int VAR_4=0; VAR_4 < (VAR_2 - 1); VAR_4++) {
      if (VAR_1 < VAR_0.x[VAR_4+1]) {
        float VAR_5 = VAR_0.x[VAR_4];
        float VAR_6 = VAR_0.y[VAR_4];
        float VAR_7 = VAR_0.x[VAR_4+1] - VAR_5;
        float VAR_8 = VAR_0.y[VAR_4+1] - VAR_6;

        if (VAR_7 <= 0.) {
          VAR_7 = 0.0001;
        }
        VAR_3 = (VAR_8 * (VAR_1 - VAR_5) / VAR_7) + VAR_6;
        break;
      }
    }
  }
  return VAR_3;
}
