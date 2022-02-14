
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int USHORT ;
typedef int ULONG ;
struct TYPE_12__ {int ReservedSectors; int SectorsPerFAT; int NumberOfFATs; int MediaDescriptor; int RootEntries; } ;
struct TYPE_10__ {int BootSignature; int * FileSystemType; int * VolumeLabel; int VolumeSerialNumber; } ;
struct TYPE_11__ {TYPE_1__ exbpb; int bpb; int * oemid; int * jump; } ;
typedef int* PUCHAR ;
typedef TYPE_2__* PDOS_PBR ;
typedef int DWORD ;
typedef TYPE_3__ DOS_BPB ;


 int FUNC_0 (int *,TYPE_3__ const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;
 TYPE_3__ const* VAR_4 ;
 int VAR_5 ;
 TYPE_3__ const* VAR_6 ;
 TYPE_3__ const* VAR_7 ;
 int FUNC_5 (int) ;
 TYPE_3__ const* VAR_8 ;
 int FUNC_6 (int*,int) ;

DWORD FUNC_7(
 PUCHAR VAR_9,
 ULONG VAR_10)
{
 const DOS_BPB *VAR_11;
 PDOS_PBR VAR_12;
 PUCHAR VAR_13;
 USHORT VAR_14;

 FUNC_4(0,
  ("[VFD] VfdFormatImage - IN\n"));




 VAR_11 = FUNC_3((USHORT)VAR_10);

 if (!VAR_11) {
  FUNC_4(0,
   ("[VFD] Unsupported media size %lu\n",
   VAR_10));
  return VAR_0;
 }




 FUNC_1(VAR_9,
  FUNC_5(VAR_10),
  VAR_5);




 FUNC_6(VAR_9, VAR_3);

 VAR_12 = (PDOS_PBR)VAR_9;

 FUNC_0(VAR_12->jump, VAR_6, sizeof(VAR_12->jump));
 FUNC_0(VAR_12->oemid, VAR_7, sizeof(VAR_12->oemid));
 FUNC_0(&VAR_12->bpb, VAR_11, sizeof(VAR_12->bpb));



 VAR_12->exbpb.BootSignature = 0x29;


 VAR_12->exbpb.VolumeSerialNumber = FUNC_2();

 FUNC_0(VAR_12->exbpb.VolumeLabel,
  VAR_8, sizeof(VAR_12->exbpb.VolumeLabel));

 FUNC_0(VAR_12->exbpb.FileSystemType,
  VAR_4, sizeof(VAR_12->exbpb.FileSystemType));



 *(VAR_9 + VAR_3 - 2) = 0x55;
 *(VAR_9 + VAR_3 - 1) = 0xaa;




 VAR_13 = VAR_9 + FUNC_5(VAR_11->ReservedSectors);

 FUNC_6(
  VAR_13,
  FUNC_5(VAR_11->SectorsPerFAT * VAR_11->NumberOfFATs));




 for (VAR_14 = 0; VAR_14 < VAR_11->NumberOfFATs; VAR_14++) {
  *VAR_13 = VAR_11->MediaDescriptor;
  *(VAR_13 + 1) = 0xff;
  *(VAR_13 + 2) = 0xff;

  VAR_13 += FUNC_5(VAR_11->SectorsPerFAT);
 }




 FUNC_6(VAR_13, VAR_11->RootEntries * VAR_2);

 FUNC_4(0,
  ("[VFD] VfdFormatImage - OUT\n"));

 return VAR_1;
}
