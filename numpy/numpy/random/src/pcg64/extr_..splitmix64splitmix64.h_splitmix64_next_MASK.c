
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t FUNC_0(uint64_t *VAR_0) {
  uint64_t VAR_1 = (VAR_0[0] += 0x9e3779b97f4a7c15);
  VAR_1 = (VAR_1 ^ (VAR_1 >> 30)) * 0xbf58476d1ce4e5b9;
  VAR_1 = (VAR_1 ^ (VAR_1 >> 27)) * 0x94d049bb133111eb;
  return VAR_1 ^ (VAR_1 >> 31);
}
