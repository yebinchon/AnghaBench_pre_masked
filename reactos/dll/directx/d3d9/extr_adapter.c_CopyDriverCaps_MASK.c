
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Caps; int Caps2; int Caps3; int DevCaps; int PresentationIntervals; int PrimitiveMiscCaps; int VertexProcessingCaps; float MaxPointSize; int RasterCaps; } ;
typedef TYPE_1__ D3DCAPS9 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1(const D3DCAPS9* VAR_15, D3DCAPS9* VAR_16)
{
    *VAR_16 = *VAR_15;

    VAR_16->Caps = VAR_15->Caps & VAR_0;


    if (FUNC_0())
        VAR_16->Caps2 = VAR_15->Caps2 & VAR_4;
    else
        VAR_16->Caps2 = VAR_15->Caps2 & VAR_3;

    VAR_16->Caps3 = VAR_15->Caps3 & VAR_1;
    VAR_16->DevCaps = VAR_15->DevCaps & VAR_2;

    VAR_16->PresentationIntervals = VAR_11;
    if (VAR_15->Caps2 & VAR_6)
        VAR_16->PresentationIntervals |= (VAR_13 | VAR_12 | VAR_9);
    if (VAR_15->Caps2 & VAR_5)
        VAR_16->PresentationIntervals |= VAR_10;

    VAR_16->PrimitiveMiscCaps = VAR_15->PrimitiveMiscCaps & ~VAR_7;

    if (VAR_15->VertexProcessingCaps & VAR_14)
    {
        VAR_16->RasterCaps |= VAR_8;
        VAR_16->VertexProcessingCaps &= ~VAR_14;
    }

    if (VAR_15->MaxPointSize < 0.0f)
        VAR_16->MaxPointSize = 1.0f;
}
