
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_4__ {int keysize; int entrysize; int hcxt; } ;
typedef int RelationSyncEntry ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_1__ HASHCTL ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int * FUNC_5 (char*,int,TYPE_1__*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_6(MemoryContext VAR_7)
{
 HASHCTL VAR_8;
 MemoryContext VAR_9;

 if (VAR_4 != ((void*)0))
  return;


 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.keysize = sizeof(Oid);
 VAR_8.entrysize = sizeof(RelationSyncEntry);
 VAR_8.hcxt = VAR_7;

 VAR_9 = FUNC_4(VAR_7);
 VAR_4 = FUNC_5("logical replication output relation cache",
         128, &VAR_8,
         VAR_2 | VAR_1 | VAR_0);
 (void) FUNC_4(VAR_9);

 FUNC_0(VAR_4 != ((void*)0));

 FUNC_1(VAR_6, (Datum) 0);
 FUNC_2(VAR_3,
          VAR_5,
          (Datum) 0);
}
