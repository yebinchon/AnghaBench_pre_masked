
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long FUNC_0(unsigned long VAR_0) {
  VAR_0 += ~(VAR_0 << 15);
  VAR_0 ^= (VAR_0 >> 10);
  VAR_0 += (VAR_0 << 3);
  VAR_0 ^= (VAR_0 >> 6);
  VAR_0 += ~(VAR_0 << 11);
  VAR_0 ^= (VAR_0 >> 16);
  return VAR_0;
}
