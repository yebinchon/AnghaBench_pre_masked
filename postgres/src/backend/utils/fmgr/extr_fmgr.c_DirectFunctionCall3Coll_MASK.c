
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ isnull; TYPE_1__* args; } ;
struct TYPE_8__ {int isnull; void* value; } ;
typedef void* (* PGFunction ) (TYPE_2__*) ;
typedef int Oid ;
typedef void* Datum ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__,int *,int,int ,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,char*,void*) ;
 TYPE_2__* VAR_1 ;
 void* FUNC_3 (TYPE_2__*) ;

Datum
FUNC_4(PGFunction VAR_2, Oid VAR_3, Datum VAR_4, Datum VAR_5,
      Datum VAR_6)
{
 FUNC_1(VAR_1, 3);
 Datum VAR_7;

 FUNC_0(*VAR_1, ((void*)0), 3, VAR_3, ((void*)0), ((void*)0));

 VAR_1->args[0].value = VAR_4;
 VAR_1->args[0].isnull = 0;
 VAR_1->args[1].value = VAR_5;
 VAR_1->args[1].isnull = 0;
 VAR_1->args[2].value = VAR_6;
 VAR_1->args[2].isnull = 0;

 VAR_7 = (*VAR_2) (VAR_1);


 if (VAR_1->isnull)
  FUNC_2(VAR_0, "function %p returned NULL", (void *) VAR_2);

 return VAR_7;
}
