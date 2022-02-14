
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int td_compression; } ;
struct TYPE_8__ {TYPE_1__ tif_dir; int tif_name; int tif_clientdata; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ TIFFCodec ;
typedef TYPE_3__ TIFF ;


 int FUNC_0 (int ,int ,char*,int ,char const*) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(TIFF* VAR_0, const char* VAR_1)
{
 const TIFFCodec* VAR_2 = FUNC_1(VAR_0->tif_dir.td_compression);

 if (VAR_2) {
  FUNC_0(VAR_0->tif_clientdata, VAR_0->tif_name,
        "%s %s encoding is not implemented",
        VAR_2->name, VAR_1);
 } else {
  FUNC_0(VAR_0->tif_clientdata, VAR_0->tif_name,
   "Compression scheme %u %s encoding is not implemented",
        VAR_0->tif_dir.td_compression, VAR_1);
 }
 return (-1);
}
