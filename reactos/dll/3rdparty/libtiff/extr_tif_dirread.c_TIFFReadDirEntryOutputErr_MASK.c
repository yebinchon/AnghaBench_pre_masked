
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_3__ {int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char const*,char*,char const*) ;







 int FUNC_1 (int ,char const*,char*,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(TIFF* VAR_0, enum TIFFReadDirEntryErr VAR_1, const char* VAR_2, const char* VAR_3, int VAR_4)
{
 if (!VAR_4) {
  switch (VAR_1) {
   case 133:
    FUNC_0(VAR_0->tif_clientdata, VAR_2,
          "Incorrect count for \"%s\"",
          VAR_3);
    break;
   case 128:
    FUNC_0(VAR_0->tif_clientdata, VAR_2,
          "Incompatible type for \"%s\"",
          VAR_3);
    break;
   case 132:
    FUNC_0(VAR_0->tif_clientdata, VAR_2,
          "IO error during reading of \"%s\"",
          VAR_3);
    break;
   case 130:
    FUNC_0(VAR_0->tif_clientdata, VAR_2,
          "Incorrect value for \"%s\"",
          VAR_3);
    break;
   case 131:
    FUNC_0(VAR_0->tif_clientdata, VAR_2,
   "Cannot handle different values per sample for \"%s\"",
          VAR_3);
    break;
   case 129:
    FUNC_0(VAR_0->tif_clientdata, VAR_2,
    "Sanity check on size of \"%s\" value failed",
          VAR_3);
    break;
   case 134:
    FUNC_0(VAR_0->tif_clientdata, VAR_2,
          "Out of memory reading of \"%s\"",
          VAR_3);
    break;
   default:
    FUNC_2(0);
    break;
  }
 } else {
  switch (VAR_1) {
   case 133:
    FUNC_1(VAR_0->tif_clientdata, VAR_2,
    "Incorrect count for \"%s\"; tag ignored",
          VAR_3);
    break;
   case 128:
    FUNC_1(VAR_0->tif_clientdata, VAR_2,
    "Incompatible type for \"%s\"; tag ignored",
            VAR_3);
    break;
   case 132:
    FUNC_1(VAR_0->tif_clientdata, VAR_2,
   "IO error during reading of \"%s\"; tag ignored",
            VAR_3);
    break;
   case 130:
    FUNC_1(VAR_0->tif_clientdata, VAR_2,
    "Incorrect value for \"%s\"; tag ignored",
            VAR_3);
    break;
   case 131:
    FUNC_1(VAR_0->tif_clientdata, VAR_2,
 "Cannot handle different values per sample for \"%s\"; tag ignored",
            VAR_3);
    break;
   case 129:
    FUNC_1(VAR_0->tif_clientdata, VAR_2,
  "Sanity check on size of \"%s\" value failed; tag ignored",
            VAR_3);
    break;
   case 134:
    FUNC_1(VAR_0->tif_clientdata, VAR_2,
    "Out of memory reading of \"%s\"; tag ignored",
            VAR_3);
    break;
   default:
    FUNC_2(0);
    break;
  }
 }
}
