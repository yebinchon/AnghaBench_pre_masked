
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * stack; int size; } ;
typedef TYPE_1__ calldata_t ;


 size_t FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_2(const calldata_t *VAR_0, const char *VAR_1, uint8_t **VAR_2)
{
 size_t VAR_3;

 if (!VAR_0->size)
  return 0;

 *VAR_2 = VAR_0->stack;

 VAR_3 = FUNC_0(VAR_2);
 while (VAR_3 != 0) {
  const char *VAR_4 = (const char *)*VAR_2;
  size_t VAR_5;

  *VAR_2 += VAR_3;
  if (FUNC_1(VAR_4, VAR_1) == 0)
   return 1;

  VAR_5 = FUNC_0(VAR_2);
  *VAR_2 += VAR_5;

  VAR_3 = FUNC_0(VAR_2);
 }

 *VAR_2 -= sizeof(size_t);
 return 0;
}
