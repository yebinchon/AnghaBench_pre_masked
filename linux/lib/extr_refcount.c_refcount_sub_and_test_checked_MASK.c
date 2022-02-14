
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refs; } ;
typedef TYPE_1__ refcount_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,char*) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned int*,unsigned int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

bool FUNC_5(unsigned int VAR_1, refcount_t *VAR_2)
{
 unsigned int VAR_3, VAR_4 = FUNC_1(&VAR_2->refs);

 do {
  if (FUNC_4(VAR_4 == VAR_0))
   return 0;

  VAR_3 = VAR_4 - VAR_1;
  if (VAR_3 > VAR_4) {
   FUNC_0(VAR_3 > VAR_4, "refcount_t: underflow; use-after-free.\n");
   return 0;
  }

 } while (!FUNC_2(&VAR_2->refs, &VAR_4, VAR_3));

 if (!VAR_3) {
  FUNC_3();
  return 1;
 }
 return 0;

}
