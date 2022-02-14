
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ size; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_9__ {TYPE_2__ xmp; TYPE_1__ exif; TYPE_3__ iccp; } ;
typedef TYPE_4__ Metadata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(const Metadata* const VAR_4,
                              int VAR_5) {
  if (VAR_4 == ((void*)0) || VAR_5 == 0) return;

  FUNC_0(VAR_3, "Metadata:\n");
  if (VAR_5 & VAR_1) {
    FUNC_0(VAR_3, "  * ICC profile:  %6d bytes\n", (int)VAR_4->iccp.size);
  }
  if (VAR_5 & VAR_0) {
    FUNC_0(VAR_3, "  * EXIF data:    %6d bytes\n", (int)VAR_4->exif.size);
  }
  if (VAR_5 & VAR_2) {
    FUNC_0(VAR_3, "  * XMP data:     %6d bytes\n", (int)VAR_4->xmp.size);
  }
}
