
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ blockno; } ;
typedef TYPE_1__ PagetableEntry ;
typedef scalar_t__ BlockNumber ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 BlockNumber VAR_2 = (*((PagetableEntry *const *) VAR_0))->blockno;
 BlockNumber VAR_3 = (*((PagetableEntry *const *) VAR_1))->blockno;

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return 1;
 return 0;
}
