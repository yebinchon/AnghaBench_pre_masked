
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef size_t ULONG ;
struct TYPE_3__ {int Offset_31_16; int Offset_15_0; int DescType; int Dpl; scalar_t__ Selector; } ;
typedef TYPE_1__* PIDT ;
typedef int LPSTR ;


 int FUNC_0 (scalar_t__,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,size_t,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;

void FUNC_4(PIDT VAR_2,ULONG VAR_3)
{
    USHORT VAR_4;
    ULONG VAR_5;
    LPSTR VAR_6;

    VAR_4 = (USHORT)VAR_2[VAR_3].Selector;
    VAR_5 = (VAR_2[VAR_3].Offset_31_16<<16)|(VAR_2[VAR_3].Offset_15_0);

    switch(VAR_2[VAR_3].DescType)
 {

  case 0x5:
   FUNC_1(VAR_1,"(%0.4X) %0.4X:%0.8X %u [task]\n",VAR_3,
               VAR_4,
               FUNC_0((USHORT)VAR_4,0),
               VAR_2[VAR_3].Dpl);
   break;

  case 0x6:
  case 0xE:
   if(FUNC_3(&VAR_6,FUNC_0((USHORT)VAR_4,VAR_5)))
   {
    FUNC_1(VAR_1,"(%0.4X) %0.4X:%0.8X %u [int] (%s)\n",VAR_3,
                 VAR_4,
                 VAR_5,
                 VAR_2[VAR_3].Dpl,
                 VAR_6);
   }
   else
   {
    FUNC_1(VAR_1,"(%0.4X) %0.4X:%0.8X %u [int]\n",VAR_3,
                 VAR_4,
                 VAR_5,
                 VAR_2[VAR_3].Dpl);
   }
   break;

  case 0x7:
  case 0xF:
   if(FUNC_3(&VAR_6,FUNC_0((USHORT)VAR_4,VAR_5)))
   {
    FUNC_1(VAR_1,"(%0.4X) %0.4X:%0.8X %u [trap] (%s)\n",VAR_3,
                 VAR_4,
                 VAR_5,
                 VAR_2[VAR_3].Dpl,
                 VAR_6);
   }
   else
   {
    FUNC_1(VAR_1,"(%0.4X) %0.4X:%0.8X %u [trap]\n",VAR_3,
                 VAR_4,
                 VAR_5,
                 VAR_2[VAR_3].Dpl);
   }
   break;
  default:
   FUNC_1(VAR_1,"(%0.4X) INVALID\n",VAR_3);
   break;
 }
 FUNC_2(VAR_0,VAR_1);
}
