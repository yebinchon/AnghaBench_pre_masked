
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int schema_sent; } ;
typedef TYPE_1__ RelationSyncEntry ;
typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_1(Datum VAR_2, Oid VAR_3)
{
 RelationSyncEntry *VAR_4;






 if (VAR_1 == ((void*)0))
  return;
 VAR_4 = (RelationSyncEntry *) FUNC_0(VAR_1, &VAR_3,
             VAR_0, ((void*)0));




 if (VAR_4 != ((void*)0))
  VAR_4->schema_sent = 0;
}
