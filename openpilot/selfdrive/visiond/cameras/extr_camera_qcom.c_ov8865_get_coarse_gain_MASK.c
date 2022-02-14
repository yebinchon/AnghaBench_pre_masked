
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const*) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0) {
  static const int VAR_1[] = {0, 256, 384, 448, 480};
  int VAR_2;

  for (VAR_2 = 1; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
    if (VAR_0 >= VAR_1[VAR_2 - 1] && VAR_0 < VAR_1[VAR_2])
      break;
  }

  return VAR_2 - 1;
}
