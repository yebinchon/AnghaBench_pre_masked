
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int pcg128_t ;



inline pcg128_t FUNC_0(pcg128_t VAR_0, unsigned int VAR_1) {
  return (VAR_0 >> VAR_1) | (VAR_0 << ((-VAR_1) & 127));
}
