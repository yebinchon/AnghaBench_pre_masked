
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int savedcxt; } ;
typedef int MemoryContext ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,char*) ;

Datum
FUNC_3(Datum VAR_2, bool VAR_3, int VAR_4)
{
 MemoryContext VAR_5;
 Datum VAR_6;

 if (VAR_1 == ((void*)0))
  FUNC_2(VAR_0, "SPI_datumTransfer called while not connected to SPI");

 VAR_5 = FUNC_0(VAR_1->savedcxt);

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);

 FUNC_0(VAR_5);

 return VAR_6;
}
