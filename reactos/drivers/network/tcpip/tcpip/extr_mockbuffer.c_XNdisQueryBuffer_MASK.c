
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int ByteCount; } ;
struct TYPE_4__ {int MappedSystemVa; } ;
typedef int PVOID ;
typedef int * PUINT ;
typedef TYPE_1__* PNDIS_BUFFER ;
typedef TYPE_2__* PMDL ;



VOID FUNC_0
(PNDIS_BUFFER VAR_0,
 PVOID *VAR_1,
 PUINT VAR_2)
{
 if (VAR_1 != ((void*)0))
     *(PVOID*)VAR_1 = VAR_0->MappedSystemVa;

 *VAR_2 = ((PMDL)VAR_0)->ByteCount;
}
