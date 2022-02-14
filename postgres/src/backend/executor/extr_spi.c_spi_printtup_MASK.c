
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64 ;
typedef int TupleTableSlot ;
struct TYPE_4__ {TYPE_1__* tuptable; } ;
struct TYPE_3__ {int numvals; int alloced; int * vals; int tuptabcxt; } ;
typedef TYPE_1__ SPITupleTable ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef int DestReceiver ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,int) ;

bool
FUNC_4(TupleTableSlot *VAR_2, DestReceiver *VAR_3)
{
 SPITupleTable *VAR_4;
 MemoryContext VAR_5;

 if (VAR_1 == ((void*)0))
  FUNC_2(VAR_0, "spi_printtup called while not connected to SPI");

 VAR_4 = VAR_1->tuptable;
 if (VAR_4 == ((void*)0))
  FUNC_2(VAR_0, "improper call to spi_printtup");

 VAR_5 = FUNC_1(VAR_4->tuptabcxt);

 if (VAR_4->numvals >= VAR_4->alloced)
 {

  uint64 VAR_6 = VAR_4->alloced * 2;

  VAR_4->vals = (HeapTuple *) FUNC_3(VAR_4->vals,
              VAR_6 * sizeof(HeapTuple));
  VAR_4->alloced = VAR_6;
 }

 VAR_4->vals[VAR_4->numvals] = FUNC_0(VAR_2);
 (VAR_4->numvals)++;

 FUNC_1(VAR_5);

 return 1;
}
