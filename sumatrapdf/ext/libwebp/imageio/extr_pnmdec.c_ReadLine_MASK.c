
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 size_t VAR_0 ;

__attribute__((used)) static size_t FUNC_0(const uint8_t* const VAR_1, size_t VAR_2, size_t VAR_3,
                       char VAR_4[VAR_0 + 1], size_t* const VAR_5) {
  size_t VAR_6 = 0;
  *VAR_5 = 0;
 redo:
  for (VAR_6 = 0; VAR_6 < VAR_0 && VAR_2 < VAR_3; ++VAR_6) {
    VAR_4[VAR_6] = VAR_1[VAR_2++];
    if (VAR_4[VAR_6] == '\n') break;
  }
  if (VAR_2 < VAR_3) {
    if (VAR_6 == 0) goto redo;
    if (VAR_4[0] == '#') goto redo;
  }
  VAR_4[VAR_6] = 0;
  *VAR_5 = VAR_6;
  return VAR_2;
}
