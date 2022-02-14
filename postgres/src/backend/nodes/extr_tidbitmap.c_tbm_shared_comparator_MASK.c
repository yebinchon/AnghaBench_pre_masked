
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ blockno; } ;
typedef TYPE_1__ PagetableEntry ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 PagetableEntry *VAR_3 = (PagetableEntry *) VAR_2;
 PagetableEntry *VAR_4 = &VAR_3[*(int *) VAR_0];
 PagetableEntry *VAR_5 = &VAR_3[*(int *) VAR_1];

 if (VAR_4->blockno < VAR_5->blockno)
  return -1;
 else if (VAR_4->blockno > VAR_5->blockno)
  return 1;
 return 0;
}
