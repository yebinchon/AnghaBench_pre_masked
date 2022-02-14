
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
typedef size_t ULONG ;
struct TYPE_3__ {int ulSize; int pValue; int * KeyWord; } ;
typedef int * PUSHORT ;
typedef size_t* PULONG ;
typedef int LPSTR ;
typedef TYPE_1__ KEYWORDS ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_1 ;

BOOLEAN FUNC_1(LPSTR VAR_2,PULONG VAR_3,KEYWORDS* VAR_4)
{
    ULONG VAR_5;

 for(VAR_5=0;VAR_4[VAR_5].KeyWord!=((void*)0);VAR_5++)
 {
  if(FUNC_0(VAR_2,VAR_4[VAR_5].KeyWord)==0)
  {
   switch(VAR_4[VAR_5].ulSize)
   {
    case sizeof(USHORT):
     *VAR_3=(ULONG)*(PUSHORT)(VAR_4[VAR_5].pValue);
     break;
    case sizeof(ULONG):
     *VAR_3=*(PULONG)(VAR_4[VAR_5].pValue);
     break;
   }
   return VAR_1;
  }
 }
 return VAR_0;
}
