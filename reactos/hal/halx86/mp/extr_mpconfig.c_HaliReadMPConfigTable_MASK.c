
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
struct TYPE_3__ {scalar_t__ Signature; int Length; int Specification; int LocalAPICAddress; int ProductId; int Oem; } ;
typedef int* PUCHAR ;
typedef TYPE_1__* PMP_CONFIGURATION_TABLE ;
typedef int PMP_CONFIGURATION_PROCESSOR ;
typedef int PMP_CONFIGURATION_IOAPIC ;
typedef int PMP_CONFIGURATION_INTSRC ;
typedef int PMP_CONFIGURATION_INTLOCAL ;
typedef int PMP_CONFIGURATION_BUS ;
typedef int MP_CONFIGURATION_TABLE ;
typedef int MP_CONFIGURATION_PROCESSOR ;
typedef int MP_CONFIGURATION_IOAPIC ;
typedef int MP_CONFIGURATION_INTSRC ;
typedef int MP_CONFIGURATION_INTLOCAL ;
typedef int MP_CONFIGURATION_BUS ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int,int,int) ;





 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 (int*,int) ;
 int VAR_4 ;

__attribute__((used)) static BOOLEAN
FUNC_10(PMP_CONFIGURATION_TABLE VAR_5)




{
   PUCHAR VAR_6;
   ULONG VAR_7;

   if (VAR_5->Signature != VAR_3)
     {
       PUCHAR VAR_8 = (PUCHAR)&VAR_5->Signature;

       FUNC_2("Bad MP configuration block signature: %c%c%c%c\n",
  VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3]);
       FUNC_8(VAR_2, VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3]);
       return VAR_1;
     }

   if (FUNC_9((PUCHAR)VAR_5, VAR_5->Length))
     {
       FUNC_2("Bad MP configuration block checksum\n");
       FUNC_0(VAR_1);
       return VAR_1;
     }

   if (VAR_5->Specification != 0x01 && VAR_5->Specification != 0x04)
     {
       FUNC_2("Bad MP configuration table version (%d)\n",
        VAR_5->Specification);
       FUNC_0(VAR_1);
       return VAR_1;
     }

   if (VAR_5->LocalAPICAddress != VAR_0)
     {
       FUNC_2("APIC base address is at 0x%X. I cannot handle non-standard adresses\n",
        VAR_5->LocalAPICAddress);
       FUNC_0(VAR_1);
       return VAR_1;
     }

   FUNC_1("Oem: %.*s, ProductId: %.*s\n", 8, VAR_5->Oem, 12, VAR_5->ProductId);
   FUNC_1("APIC at: %08x\n", VAR_5->LocalAPICAddress);


   VAR_6 = (PUCHAR)((ULONG_PTR)VAR_5 + sizeof(MP_CONFIGURATION_TABLE));
   VAR_7 = 0;
   while (VAR_7 < (VAR_5->Length - sizeof(MP_CONFIGURATION_TABLE)))
   {

     switch (*VAR_6)
       {
       case 128:
         {
    FUNC_7((PMP_CONFIGURATION_PROCESSOR)VAR_6);
    VAR_6 += sizeof(MP_CONFIGURATION_PROCESSOR);
    VAR_7 += sizeof(MP_CONFIGURATION_PROCESSOR);
    break;
  }
       case 132:
  {
    FUNC_3((PMP_CONFIGURATION_BUS)VAR_6);
    VAR_6 += sizeof(MP_CONFIGURATION_BUS);
    VAR_7 += sizeof(MP_CONFIGURATION_BUS);
    break;
  }
       case 130:
  {
    FUNC_4((PMP_CONFIGURATION_IOAPIC)VAR_6);
    VAR_6 += sizeof(MP_CONFIGURATION_IOAPIC);
    VAR_7 += sizeof(MP_CONFIGURATION_IOAPIC);
    break;
  }
       case 131:
  {
    FUNC_6((PMP_CONFIGURATION_INTSRC)VAR_6);
    VAR_6 += sizeof(MP_CONFIGURATION_INTSRC);
    VAR_7 += sizeof(MP_CONFIGURATION_INTSRC);
    break;
  }
       case 129:
  {
    FUNC_5((PMP_CONFIGURATION_INTLOCAL)VAR_6);
    VAR_6 += sizeof(MP_CONFIGURATION_INTLOCAL);
    VAR_7 += sizeof(MP_CONFIGURATION_INTLOCAL);
    break;
  }
       default:
  FUNC_2("Unknown entry in MPC table\n");
  FUNC_0(VAR_1);
  return VAR_1;
       }
   }
   return VAR_4;
}
