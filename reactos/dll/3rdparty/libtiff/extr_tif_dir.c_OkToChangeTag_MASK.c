
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_7__ {int tif_flags; int tif_name; int tif_clientdata; } ;
struct TYPE_6__ {int field_name; int field_oktochange; } ;
typedef TYPE_1__ TIFFField ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ,char*,char*,int ,char*,...) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(TIFF* VAR_3, uint32 VAR_4)
{
 const TIFFField* VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_1);
 if (!VAR_5) {
  FUNC_0(VAR_3->tif_clientdata, "TIFFSetField", "%s: Unknown %stag %u",
      VAR_3->tif_name, FUNC_2(VAR_4) ? "pseudo-" : "", VAR_4);
  return (0);
 }
 if (VAR_4 != VAR_0 && (VAR_3->tif_flags & VAR_2) &&
     !VAR_5->field_oktochange) {






  FUNC_0(VAR_3->tif_clientdata, "TIFFSetField",
      "%s: Cannot modify tag \"%s\" while writing",
      VAR_3->tif_name, VAR_5->field_name);
  return (0);
 }
 return (1);
}
