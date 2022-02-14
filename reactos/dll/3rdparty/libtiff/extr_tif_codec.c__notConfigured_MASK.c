
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int td_compression; } ;
struct TYPE_8__ {int tif_name; int tif_clientdata; TYPE_1__ tif_dir; } ;
struct TYPE_7__ {char* name; } ;
typedef TYPE_2__ TIFFCodec ;
typedef TYPE_3__ TIFF ;


 int FUNC_0 (int ,int ,char*,char*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(TIFF* VAR_0)
{
 const TIFFCodec* VAR_1 = FUNC_1(VAR_0->tif_dir.td_compression);
        char VAR_2[20];

        FUNC_2(VAR_2, "%d",VAR_0->tif_dir.td_compression );
 FUNC_0(VAR_0->tif_clientdata, VAR_0->tif_name,
                     "%s compression support is not configured",
                     VAR_1 ? VAR_1->name : VAR_2 );
 return (0);
}
