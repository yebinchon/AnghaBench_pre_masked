
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; int len; } ;


 scalar_t__ FUNC_0 (struct dstr const*) ;

__attribute__((used)) static inline char FUNC_1(const struct dstr *VAR_0)
{
 if (FUNC_0(VAR_0))
  return 0;

 return VAR_0->array[VAR_0->len - 1];
}
