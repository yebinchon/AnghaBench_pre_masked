
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef scalar_t__ ULONG_PTR ;
typedef int UINT ;
struct TYPE_6__ {int BytesLeft; int PathMTU; int HeaderSize; int Position; scalar_t__ DatagramData; TYPE_1__* Header; int Data; } ;
struct TYPE_5__ {scalar_t__ Checksum; void* TotalLength; void* FlagsFragOfs; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PIPv4_HEADER ;
typedef TYPE_2__* PIPFRAGMENT_CONTEXT ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_4 ;
 void* FUNC_3 (scalar_t__) ;

BOOLEAN FUNC_4(
    PIPFRAGMENT_CONTEXT VAR_5)
{
    UINT VAR_6;
    UINT VAR_7;
    PIPv4_HEADER VAR_8;
    BOOLEAN VAR_9;
    USHORT VAR_10;

    FUNC_2(VAR_2, ("Called. IFC (0x%X)\n", VAR_5));

    if (VAR_5->BytesLeft > 0) {

        FUNC_2(VAR_2, ("Preparing 1 fragment.\n"));

        VAR_6 = VAR_5->PathMTU - VAR_5->HeaderSize;

        VAR_6 -= VAR_6 % 8;
        if (VAR_5->BytesLeft > VAR_6) {
            VAR_7 = VAR_6;
            VAR_9 = VAR_4;
        } else {
            VAR_7 = VAR_5->BytesLeft;
            VAR_9 = VAR_0;
        }

 FUNC_2(VAR_3,("Copying data from %x to %x (%d)\n",
          VAR_5->DatagramData, VAR_5->Data, VAR_7));

        FUNC_1(VAR_5->Data, VAR_5->DatagramData, VAR_7);


        VAR_10 = (USHORT)(VAR_5->Position / 8);

        if (VAR_9)
            VAR_10 |= VAR_1;
        else
            VAR_10 &= ~VAR_1;

        VAR_8 = VAR_5->Header;
        VAR_8->FlagsFragOfs = FUNC_3(VAR_10);
        VAR_8->TotalLength = FUNC_3((USHORT)(VAR_7 + VAR_5->HeaderSize));




        VAR_8->Checksum = 0;
        VAR_8->Checksum = (USHORT)FUNC_0(VAR_8, VAR_5->HeaderSize, 0);
 FUNC_2(VAR_3,("IP Check: %x\n", VAR_8->Checksum));


        VAR_5->DatagramData = (PVOID)((ULONG_PTR)VAR_5->DatagramData + VAR_7);
        VAR_5->Position += VAR_7;
        VAR_5->BytesLeft -= VAR_7;

        return VAR_4;
    } else {
        FUNC_2(VAR_2, ("No more fragments.\n"));
        return VAR_0;
    }
}
