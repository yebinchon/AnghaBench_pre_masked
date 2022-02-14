
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long bfd_vma ;
typedef scalar_t__ bfd_byte ;



__attribute__((used)) static bfd_vma FUNC_0 (const void *VAR_0) {
  const bfd_byte *VAR_1 = VAR_0;
  unsigned long VAR_2;

  VAR_2 = (unsigned long) VAR_1[0] << 24;
  VAR_2 |= (unsigned long) VAR_1[1] << 16;
  VAR_2 |= (unsigned long) VAR_1[2] << 8;
  VAR_2 |= (unsigned long) VAR_1[3];
  return VAR_2;
}
