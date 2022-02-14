
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_2__ {size_t SrcBusId; int IrqFlag; } ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;




 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t) ;

__attribute__((used)) static ULONG
FUNC_5(ULONG VAR_2)
{
   ULONG VAR_3 = VAR_1[VAR_2].SrcBusId;
   ULONG VAR_4;




   switch ((VAR_1[VAR_2].IrqFlag >> 2) & 3)
   {
      case 0:
  {
            switch (VAR_0[VAR_3])
     {
        case 130:
           VAR_4 = FUNC_2(VAR_2);
    break;

        case 131:
    VAR_4 = FUNC_1(VAR_2);
    break;

        case 128:
    VAR_4 = FUNC_4(VAR_2);
    break;

               case 129:
    VAR_4 = FUNC_3(VAR_2);
    break;

               default:
                  FUNC_0("Broken BIOS!!\n");
    VAR_4 = 1;
     }
  }
  break;

      case 1:
  VAR_4 = 0;
  break;

      case 2:
  FUNC_0("Broken BIOS!!\n");
  VAR_4 = 1;
  break;

      case 3:
   VAR_4 = 1;
  break;

      default:
  FUNC_0("Broken BIOS!!\n");
  VAR_4 = 0;
   }
   return VAR_4;
}
