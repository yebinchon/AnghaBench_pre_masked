
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int endian; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0 (char *VAR_1, int VAR_2, int VAR_3) {
  if (VAR_3 != VAR_0.endian) {
    int VAR_4 = 0;
    while (VAR_4 < --VAR_2) {
      char VAR_5 = VAR_1[VAR_4];
      VAR_1[VAR_4++] = VAR_1[VAR_2];
      VAR_1[VAR_2] = VAR_5;
    }
  }
}
