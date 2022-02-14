
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_4__ {int tuptables; TYPE_1__* tuptable; } ;
struct TYPE_3__ {int alloced; int tupdesc; scalar_t__ numvals; int * vals; int next; int subid; int tuptabcxt; } ;
typedef TYPE_1__ SPITupleTable ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef int DestReceiver ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int *) ;

void
FUNC_9(DestReceiver *VAR_4, int VAR_5, TupleDesc VAR_6)
{
 SPITupleTable *VAR_7;
 MemoryContext VAR_8;
 MemoryContext VAR_9;

 if (VAR_3 == ((void*)0))
  FUNC_5(VAR_2, "spi_dest_startup called while not connected to SPI");

 if (VAR_3->tuptable != ((void*)0))
  FUNC_5(VAR_2, "improper call to spi_dest_startup");



 VAR_8 = FUNC_4();

 VAR_9 = FUNC_0(VAR_1,
           "SPI TupTable",
           VAR_0);
 FUNC_3(VAR_9);

 VAR_3->tuptable = VAR_7 = (SPITupleTable *)
  FUNC_7(sizeof(SPITupleTable));
 VAR_7->tuptabcxt = VAR_9;
 VAR_7->subid = FUNC_2();






 FUNC_8(&VAR_3->tuptables, &VAR_7->next);


 VAR_7->alloced = 128;
 VAR_7->vals = (HeapTuple *) FUNC_6(VAR_7->alloced * sizeof(HeapTuple));
 VAR_7->numvals = 0;
 VAR_7->tupdesc = FUNC_1(VAR_6);

 FUNC_3(VAR_8);
}
