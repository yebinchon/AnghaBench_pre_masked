
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int uint16 ;
struct TYPE_8__ {scalar_t__ tiff_diroff; } ;
struct TYPE_7__ {scalar_t__ tiff_diroff; } ;
struct TYPE_9__ {TYPE_2__ big; TYPE_1__ classic; } ;
struct TYPE_10__ {int tif_flags; int tif_clientdata; TYPE_3__ tif_header; } ;
typedef TYPE_4__ TIFF ;


 scalar_t__ FUNC_0 (TYPE_4__*,scalar_t__*,int *) ;
 int FUNC_1 (int ,char const*,char*) ;
 int VAR_0 ;

uint16
FUNC_2(TIFF* VAR_1)
{
 static const char VAR_2[] = "TIFFNumberOfDirectories";
 uint64 VAR_3;
 uint16 VAR_4;
 if (!(VAR_1->tif_flags&VAR_0))
  VAR_3 = VAR_1->tif_header.classic.tiff_diroff;
 else
  VAR_3 = VAR_1->tif_header.big.tiff_diroff;
 VAR_4 = 0;
 while (VAR_3 != 0 && FUNC_0(VAR_1, &VAR_3, ((void*)0)))
        {
                if (VAR_4 != 65535) {
                        ++VAR_4;
                }
  else
                {
                        FUNC_1(VAR_1->tif_clientdata, VAR_2,
                                     "Directory count exceeded 65535 limit,"
                                     " giving up on counting.");
                        return (65535);
                }
        }
 return (VAR_4);
}
