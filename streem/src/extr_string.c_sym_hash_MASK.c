
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_key {char* ptr; int len; } ;
typedef int strm_int ;
typedef int khint_t ;



__attribute__((used)) static khint_t
FUNC_0(struct sym_key VAR_0)
{
  const char *VAR_1 = VAR_0.ptr;
  khint_t VAR_2;
  strm_int VAR_3 = VAR_0.len;

  VAR_2 = *VAR_1++;
  while (VAR_3--) {
    VAR_2 = (VAR_2 << 5) - VAR_2 + (khint_t)*VAR_1++;
  }
  return VAR_2;
}
