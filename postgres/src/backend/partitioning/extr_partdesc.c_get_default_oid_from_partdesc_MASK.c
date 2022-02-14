
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t default_index; } ;
struct TYPE_4__ {TYPE_2__* boundinfo; int * oids; } ;
typedef TYPE_1__* PartitionDesc ;
typedef int Oid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

Oid
FUNC_1(PartitionDesc VAR_1)
{
 if (VAR_1 && VAR_1->boundinfo &&
  FUNC_0(VAR_1->boundinfo))
  return VAR_1->oids[VAR_1->boundinfo->default_index];

 return VAR_0;
}
