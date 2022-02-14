
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {int len; int * array; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct strref *VAR_0)
{
 if (VAR_0->array) {
  while (FUNC_0(*VAR_0->array)) {
   VAR_0->array++;
   VAR_0->len--;
  }

  while (VAR_0->len && FUNC_0(VAR_0->array[VAR_0->len - 1]))
   VAR_0->len--;
 }
}
