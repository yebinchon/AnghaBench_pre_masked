
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lsn; } ;
typedef TYPE_1__ RewriteMappingFile ;
typedef int ListCell ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static int
FUNC_1(const ListCell *VAR_0, const ListCell *VAR_1)
{
 RewriteMappingFile *VAR_2 = (RewriteMappingFile *) FUNC_0(VAR_0);
 RewriteMappingFile *VAR_3 = (RewriteMappingFile *) FUNC_0(VAR_1);

 if (VAR_2->lsn < VAR_3->lsn)
  return -1;
 else if (VAR_2->lsn > VAR_3->lsn)
  return 1;
 return 0;
}
