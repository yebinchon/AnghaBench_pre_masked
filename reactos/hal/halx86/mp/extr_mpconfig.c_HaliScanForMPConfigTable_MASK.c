
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
typedef scalar_t__ UCHAR ;
struct TYPE_3__ {scalar_t__ Signature; int Length; int Specification; int Feature2; int Feature1; } ;
typedef scalar_t__ PULONG ;
typedef int PUCHAR ;
typedef TYPE_1__ MP_FLOATING_POINTER ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOLEAN
FUNC_2(ULONG VAR_5,
    ULONG VAR_6)
{
   PULONG VAR_7 = (PULONG)VAR_5;
   MP_FLOATING_POINTER* VAR_8;
   UCHAR VAR_9;

   while (VAR_6 > 0)
   {
      VAR_8 = (MP_FLOATING_POINTER*)VAR_7;
      if (VAR_8->Signature == VAR_2)
      {
  VAR_9 = FUNC_1((PUCHAR)VAR_7, 16);
  FUNC_0("Found MPF signature at %x, checksum %x\n", VAR_7, VAR_9);
         if (VAR_9 == 0 &&
      VAR_8->Length == 1)
         {
            FUNC_0("Intel MultiProcessor Specification v1.%d compliant system.\n",
                   VAR_8->Specification);

            if (VAR_8->Feature2 & VAR_1)
     {
               FUNC_0("Running in IMCR and PIC compatibility mode.\n");
            }
     else
     {
               FUNC_0("Running in Virtual Wire compatibility mode.\n");
     }


            switch (VAR_8->Feature1)
            {
               case 0:

                  break;
               case 1:
                  FUNC_0("ISA\n");
                  break;
               case 2:
                  FUNC_0("EISA with no IRQ8 chaining\n");
                  break;
               case 3:
                  FUNC_0("EISA\n");
                  break;
               case 4:
                  FUNC_0("MCA\n");
                  break;
               case 5:
                  FUNC_0("ISA and PCI\n");
                  break;
               case 6:
                  FUNC_0("EISA and PCI\n");
                  break;
               case 7:
                  FUNC_0("MCA and PCI\n");
                  break;
               default:
                  FUNC_0("Unknown standard configuration %d\n", VAR_8->Feature1);
                  return VAR_0;
            }
            VAR_3 = VAR_8;
            return VAR_4;
         }
      }
      VAR_7 += 4;
      VAR_6 -= 16;
   }
   return VAR_0;
}
