
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_10__ {int ReservedMaskPosition; int ReservedMaskSize; int BlueMaskPosition; int BlueMaskSize; int GreenMaskPosition; int GreenMaskSize; int RedMaskPosition; int RedMaskSize; int NumberOfImagePanes; int BankSize; int MemoryModel; int NumberOfBanks; int BitsPerPixel; int NumberOfMemoryPlanes; int CharacterHeightInPixels; int CharacterWidthInPixels; int HeightInPixels; int WidthInPixels; int BytesPerScanLine; int WindowPositioningFunction; int WindowBStartSegment; int WindowAStartSegment; int WindowSize; int WindowGranularity; int WindowsAttributesB; int WindowAttributesA; int ModeAttributes; } ;
struct TYPE_8__ {int ax; int di; int es; int cx; } ;
struct TYPE_9__ {TYPE_1__ w; } ;
typedef int SVGA_MODE_INFORMATION ;
typedef TYPE_2__ REGS ;
typedef int PVOID ;
typedef TYPE_3__* PSVGA_MODE_INFORMATION ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,...) ;
 int VAR_4 ;

__attribute__((used)) static BOOLEAN
FUNC_4(USHORT VAR_5, PSVGA_MODE_INFORMATION VAR_6)
{
  REGS VAR_7;

  FUNC_2((PVOID)VAR_0, 256);
  VAR_7.w.ax = 0x4F01;
  VAR_7.w.cx = VAR_5;
  VAR_7.w.es = VAR_2;
  VAR_7.w.di = VAR_1;
  FUNC_0(0x10, &VAR_7, &VAR_7);

  if (VAR_7.w.ax != 0x004F)
    {
      return VAR_3;
    }

  FUNC_1(VAR_6, (PVOID)VAR_0, sizeof(SVGA_MODE_INFORMATION));

  FUNC_3("\n");
  FUNC_3("BiosVesaGetSVGAModeInformation() mode 0x%x\n", VAR_5);
  FUNC_3("ModeAttributes = 0x%x\n", VAR_6->ModeAttributes);
  FUNC_3("WindowAttributesA = 0x%x\n", VAR_6->WindowAttributesA);
  FUNC_3("WindowAttributesB = 0x%x\n", VAR_6->WindowsAttributesB);
  FUNC_3("WindowGranularity = %dKB\n", VAR_6->WindowGranularity);
  FUNC_3("WindowSize = %dKB\n", VAR_6->WindowSize);
  FUNC_3("WindowAStartSegment = 0x%x\n", VAR_6->WindowAStartSegment);
  FUNC_3("WindowBStartSegment = 0x%x\n", VAR_6->WindowBStartSegment);
  FUNC_3("WindowPositioningFunction = 0x%x\n", VAR_6->WindowPositioningFunction);
  FUNC_3("BytesPerScanLine = %d\n", VAR_6->BytesPerScanLine);
  FUNC_3("WidthInPixels = %d\n", VAR_6->WidthInPixels);
  FUNC_3("HeightInPixels = %d\n", VAR_6->HeightInPixels);
  FUNC_3("CharacterWidthInPixels = %d\n", VAR_6->CharacterWidthInPixels);
  FUNC_3("CharacterHeightInPixels = %d\n", VAR_6->CharacterHeightInPixels);
  FUNC_3("NumberOfMemoryPlanes = %d\n", VAR_6->NumberOfMemoryPlanes);
  FUNC_3("BitsPerPixel = %d\n", VAR_6->BitsPerPixel);
  FUNC_3("NumberOfBanks = %d\n", VAR_6->NumberOfBanks);
  FUNC_3("MemoryModel = %d\n", VAR_6->MemoryModel);
  FUNC_3("BankSize = %d\n", VAR_6->BankSize);
  FUNC_3("NumberOfImagePlanes = %d\n", VAR_6->NumberOfImagePanes);
  FUNC_3("---VBE v1.2+ ---\n");
  FUNC_3("RedMaskSize = %d\n", VAR_6->RedMaskSize);
  FUNC_3("RedMaskPosition = %d\n", VAR_6->RedMaskPosition);
  FUNC_3("GreenMaskSize = %d\n", VAR_6->GreenMaskSize);
  FUNC_3("GreenMaskPosition = %d\n", VAR_6->GreenMaskPosition);
  FUNC_3("BlueMaskSize = %d\n", VAR_6->BlueMaskSize);
  FUNC_3("BlueMaskPosition = %d\n", VAR_6->BlueMaskPosition);
  FUNC_3("ReservedMaskSize = %d\n", VAR_6->ReservedMaskSize);
  FUNC_3("ReservedMaskPosition = %d\n", VAR_6->ReservedMaskPosition);
  FUNC_3("\n");

  return VAR_4;
}
