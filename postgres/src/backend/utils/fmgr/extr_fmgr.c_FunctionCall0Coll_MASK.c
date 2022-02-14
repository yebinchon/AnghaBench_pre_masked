
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ isnull; } ;
struct TYPE_8__ {int fn_oid; } ;
typedef int Oid ;
typedef TYPE_1__ FmgrInfo ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__,TYPE_1__*,int ,int ,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 TYPE_2__* VAR_1 ;

Datum
FUNC_4(FmgrInfo *VAR_2, Oid VAR_3)
{
 FUNC_2(VAR_1, 0);
 Datum VAR_4;

 FUNC_1(*VAR_1, VAR_2, 0, VAR_3, ((void*)0), ((void*)0));

 VAR_4 = FUNC_0(VAR_1);


 if (VAR_1->isnull)
  FUNC_3(VAR_0, "function %u returned NULL", VAR_2->fn_oid);

 return VAR_4;
}
