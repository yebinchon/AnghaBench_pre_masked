
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(unsigned long VAR_0, unsigned long VAR_1) {
 float VAR_2 = 0.0;
 if (VAR_1 <= 0)
  return VAR_2;
 if (VAR_0 >= VAR_1) {
  VAR_2 = 100.0f;
 } else {
  VAR_2=(100.0f*(float)VAR_0/(float)VAR_1);
 }
 return VAR_2;
}
