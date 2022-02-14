
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
 scalar_t__ FUNC_3 (int) ;

bool FUNC_4(refcount_t *VAR_1)
{
 unsigned int VAR_2, VAR_3 = FUNC_1(&VAR_1->refs);

 do {
  VAR_2 = VAR_3 + 1;

  if (!VAR_3)
   return 0;

  if (FUNC_3(!VAR_2))
   return 1;

 } while (!FUNC_2(&VAR_1->refs, &VAR_3, VAR_2));

 FUNC_0(VAR_2 == VAR_0, "refcount_t: saturated; leaking memory.\n");

 return 1;
}
