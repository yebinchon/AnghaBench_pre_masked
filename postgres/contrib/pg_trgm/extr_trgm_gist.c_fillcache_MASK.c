
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allistrue; scalar_t__ sign; } ;
typedef int TRGM ;
typedef TYPE_1__ CACHESIGN ;
typedef int BITVEC ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (void*,void*,int) ;

__attribute__((used)) static void
FUNC_5(CACHESIGN *VAR_0, TRGM *VAR_1)
{
 VAR_0->allistrue = 0;
 if (FUNC_2(VAR_1))
  FUNC_3(VAR_0->sign, VAR_1);
 else if (FUNC_1(VAR_1))
  VAR_0->allistrue = 1;
 else
  FUNC_4((void *) VAR_0->sign, (void *) FUNC_0(VAR_1), sizeof(BITVEC));
}
