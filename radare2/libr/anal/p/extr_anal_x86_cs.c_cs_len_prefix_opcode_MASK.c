
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0) {
 int VAR_1, VAR_2 = 0;
 for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
  VAR_2 += (VAR_0[VAR_1] != 0) ? 1 : 0;
 }
 return VAR_2;
}
