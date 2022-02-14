
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tWriteWlanPin ;
typedef int tWlanReadInteruptPin ;
typedef int tWlanInterruptEnable ;
typedef int tWlanInterruptDisable ;
typedef int tWlanCB ;
typedef int tFWPatches ;
typedef int tDriverPatches ;
typedef int tBootLoaderPatches ;
struct TYPE_2__ {int InformHostOnTxComplete; int sWlanCB; int WriteWlanPin; int WlanInterruptDisable; int WlanInterruptEnable; int ReadWlanInterruptPin; int sBootLoaderPatches; int sDriverPatches; int sFWPatches; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0( tWlanCB VAR_1,
 tFWPatches VAR_2,
 tDriverPatches VAR_3,
 tBootLoaderPatches VAR_4,
 tWlanReadInteruptPin VAR_5,
 tWlanInterruptEnable VAR_6,
 tWlanInterruptDisable VAR_7,
 tWriteWlanPin VAR_8)
{

 VAR_0.sFWPatches = VAR_2;
 VAR_0.sDriverPatches = VAR_3;
 VAR_0.sBootLoaderPatches = VAR_4;


 VAR_0.ReadWlanInterruptPin = VAR_5;
 VAR_0.WlanInterruptEnable = VAR_6;
 VAR_0.WlanInterruptDisable = VAR_7;
 VAR_0.WriteWlanPin = VAR_8;


 VAR_0.sWlanCB= VAR_1;


 VAR_0.InformHostOnTxComplete = 1;
}
