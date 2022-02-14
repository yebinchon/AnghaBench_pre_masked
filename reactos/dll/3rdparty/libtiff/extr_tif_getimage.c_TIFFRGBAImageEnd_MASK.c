
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * bluecmap; int * greencmap; int * redcmap; int * Bitdepth16To8; int * UaToAa; int * cielab; int * ycbcr; int * PALmap; int * BWmap; int * Map; } ;
typedef TYPE_1__ TIFFRGBAImage ;


 int FUNC_0 (int *) ;

void
FUNC_1(TIFFRGBAImage* VAR_0)
{
 if (VAR_0->Map) {
  FUNC_0(VAR_0->Map);
  VAR_0->Map = ((void*)0);
 }
 if (VAR_0->BWmap) {
  FUNC_0(VAR_0->BWmap);
  VAR_0->BWmap = ((void*)0);
 }
 if (VAR_0->PALmap) {
  FUNC_0(VAR_0->PALmap);
  VAR_0->PALmap = ((void*)0);
 }
 if (VAR_0->ycbcr) {
  FUNC_0(VAR_0->ycbcr);
  VAR_0->ycbcr = ((void*)0);
 }
 if (VAR_0->cielab) {
  FUNC_0(VAR_0->cielab);
  VAR_0->cielab = ((void*)0);
 }
 if (VAR_0->UaToAa) {
  FUNC_0(VAR_0->UaToAa);
  VAR_0->UaToAa = ((void*)0);
 }
 if (VAR_0->Bitdepth16To8) {
  FUNC_0(VAR_0->Bitdepth16To8);
  VAR_0->Bitdepth16To8 = ((void*)0);
 }

 if( VAR_0->redcmap ) {
  FUNC_0( VAR_0->redcmap );
  FUNC_0( VAR_0->greencmap );
  FUNC_0( VAR_0->bluecmap );
                VAR_0->redcmap = VAR_0->greencmap = VAR_0->bluecmap = ((void*)0);
 }
}
