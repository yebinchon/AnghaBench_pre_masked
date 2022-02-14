
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample_t {int* values; int min; int max; } ;



void FUNC_0(struct sample_t *VAR_0, int VAR_1) {
  int VAR_2 = sizeof(VAR_0->values) / sizeof(VAR_0->values[0]);
  for (int VAR_3 = VAR_2 - 1; VAR_3 > 0; VAR_3--) {
    VAR_0->values[VAR_3] = VAR_0->values[VAR_3-1];
  }
  VAR_0->values[0] = VAR_1;


  VAR_0->min = VAR_0->values[0];
  VAR_0->max = VAR_0->values[0];
  for (int VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
    if (VAR_0->values[VAR_4] < VAR_0->min) {
      VAR_0->min = VAR_0->values[VAR_4];
    }
    if (VAR_0->values[VAR_4] > VAR_0->max) {
      VAR_0->max = VAR_0->values[VAR_4];
    }
  }
}
