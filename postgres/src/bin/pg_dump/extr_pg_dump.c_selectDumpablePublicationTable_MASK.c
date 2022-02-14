
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* dopt; } ;
struct TYPE_9__ {int dump; } ;
struct TYPE_8__ {scalar_t__ include_everything; } ;
typedef TYPE_2__ DumpableObject ;
typedef TYPE_3__ Archive ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(DumpableObject *VAR_2, Archive *VAR_3)
{
 if (FUNC_0(VAR_2, VAR_3))
  return;

 VAR_2->dump = VAR_3->dopt->include_everything ?
  VAR_0 : VAR_1;
}
