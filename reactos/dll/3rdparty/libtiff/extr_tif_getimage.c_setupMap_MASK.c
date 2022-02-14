
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {int tif_clientdata; } ;
struct TYPE_5__ {long bitspersample; void** Map; scalar_t__ photometric; TYPE_4__* tif; } ;
typedef void* TIFFRGBValue ;
typedef TYPE_1__ TIFFRGBAImage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (void**) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(TIFFRGBAImage* VAR_2)
{
    int32 VAR_3, VAR_4;

    VAR_4 = (int32)((1L<<VAR_2->bitspersample)-1);


    if( VAR_2->bitspersample == 16 )
        VAR_4 = (int32) 255;

    VAR_2->Map = (TIFFRGBValue*) FUNC_3((VAR_4+1) * sizeof (TIFFRGBValue));
    if (VAR_2->Map == ((void*)0)) {
  FUNC_0(VAR_2->tif->tif_clientdata, FUNC_1(VAR_2->tif),
   "No space for photometric conversion table");
  return (0);
    }
    if (VAR_2->photometric == VAR_1) {
 for (VAR_3 = 0; VAR_3 <= VAR_4; VAR_3++)
     VAR_2->Map[VAR_3] = (TIFFRGBValue) (((VAR_4 - VAR_3) * 255) / VAR_4);
    } else {
 for (VAR_3 = 0; VAR_3 <= VAR_4; VAR_3++)
     VAR_2->Map[VAR_3] = (TIFFRGBValue) ((VAR_3 * 255) / VAR_4);
    }
    if (VAR_2->bitspersample <= 16 &&
 (VAR_2->photometric == VAR_0 ||
  VAR_2->photometric == VAR_1)) {




 if (!FUNC_4(VAR_2))
     return (0);

 FUNC_2(VAR_2->Map);
 VAR_2->Map = ((void*)0);
    }
    return (1);
}
