
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int tif_clientdata; } ;
struct TYPE_8__ {int photometric; int bitspersample; TYPE_7__* tif; } ;
typedef TYPE_1__ TIFFRGBAImage ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(TIFFRGBAImage* VAR_0)
{
    switch (VAR_0->photometric) {
    case 130:
    case 128:
    case 129:
 if (VAR_0->bitspersample == 8)
     break;

    case 133:
    case 132:
 if (!FUNC_5(VAR_0))
     return (0);
 break;
    case 131:




 if (FUNC_2(VAR_0) == 16)
     FUNC_3(VAR_0);
 else
     FUNC_1(VAR_0->tif->tif_clientdata, FUNC_0(VAR_0->tif), "Assuming 8-bit colormap");




 if (VAR_0->bitspersample <= 8 && !FUNC_4(VAR_0))
     return (0);
 break;
    }
    return (1);
}
