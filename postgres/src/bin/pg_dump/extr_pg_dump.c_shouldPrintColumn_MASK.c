
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ispartition; scalar_t__* attislocal; scalar_t__* attisdropped; } ;
typedef TYPE_1__ TableInfo ;
struct TYPE_6__ {scalar_t__ binary_upgrade; } ;
typedef TYPE_2__ DumpOptions ;



bool
FUNC_0(DumpOptions *VAR_0, TableInfo *VAR_1, int VAR_2)
{
 if (VAR_0->binary_upgrade)
  return 1;
 if (VAR_1->attisdropped[VAR_2])
  return 0;
 return (VAR_1->attislocal[VAR_2] || VAR_1->ispartition);
}
