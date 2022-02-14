
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int savedcxt; } ;
typedef int Size ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,char*) ;

void *
FUNC_2(Size VAR_2)
{
 if (VAR_1 == ((void*)0))
  FUNC_1(VAR_0, "SPI_palloc called while not connected to SPI");

 return FUNC_0(VAR_1->savedcxt, VAR_2);
}
