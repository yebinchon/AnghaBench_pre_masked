
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
struct TYPE_7__ {int (* tif_decoderow ) (TYPE_1__*,int *,int ,int ) ;int tif_scanlinesize; int (* tif_postdecode ) (TYPE_1__*,int *,int ) ;scalar_t__ tif_row; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;

int
FUNC_4(TIFF* VAR_0, void* VAR_1, uint32 VAR_2, uint16 VAR_3)
{
 int VAR_4;

 if (!FUNC_0(VAR_0, 0))
  return (-1);
 if( (VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3)) != 0) {



  VAR_4 = (*VAR_0->tif_decoderow)
      (VAR_0, (uint8*) VAR_1, VAR_0->tif_scanlinesize, VAR_3);


  VAR_0->tif_row = VAR_2 + 1;

  if (VAR_4)
   (*VAR_0->tif_postdecode)(VAR_0, (uint8*) VAR_1,
       VAR_0->tif_scanlinesize);
 }
 return (VAR_4 > 0 ? 1 : -1);
}
