
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tsa_entry; } ;
typedef TYPE_1__ TabStatHashEntry ;
typedef int PgStat_TableStatus ;
typedef int Oid ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int *,int ,int *) ;
 int VAR_1 ;

PgStat_TableStatus *
FUNC_1(Oid VAR_2)
{
 TabStatHashEntry *VAR_3;


 if (!VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_1, &VAR_2, VAR_0, ((void*)0));
 if (!VAR_3)
  return ((void*)0);


 return VAR_3->tsa_entry;
}
