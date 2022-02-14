
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int * array; int len; } ;



__attribute__((used)) static inline bool FUNC_0(const struct dstr *VAR_0)
{
 if (!VAR_0->array || !VAR_0->len)
  return 1;
 if (!*VAR_0->array)
  return 1;

 return 0;
}
