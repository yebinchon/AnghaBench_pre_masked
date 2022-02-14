
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hash_ctl ;
struct TYPE_10__ {int keysize; int entrysize; int hcxt; } ;
struct TYPE_9__ {int context; } ;
struct TYPE_8__ {int * toast_hash; } ;
typedef int ReorderBufferToastEnt ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef TYPE_2__ ReorderBuffer ;
typedef int Oid ;
typedef TYPE_3__ HASHCTL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (char*,int,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(ReorderBuffer *VAR_3, ReorderBufferTXN *VAR_4)
{
 HASHCTL VAR_5;

 FUNC_0(VAR_4->toast_hash == ((void*)0));

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.keysize = sizeof(Oid);
 VAR_5.entrysize = sizeof(ReorderBufferToastEnt);
 VAR_5.hcxt = VAR_3->context;
 VAR_4->toast_hash = FUNC_1("ReorderBufferToastHash", 5, &VAR_5,
          VAR_2 | VAR_0 | VAR_1);
}
