
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
typedef int tmsize_t ;
struct TYPE_9__ {int tif_clientdata; } ;
struct TYPE_8__ {int rowsize; int (* decodepfunc ) (TYPE_2__*,int *,int) ;scalar_t__ (* decodetile ) (TYPE_2__*,int *,int,int ) ;} ;
typedef TYPE_1__ TIFFPredictorState ;
typedef TYPE_2__ TIFF ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int
FUNC_5(TIFF* VAR_0, uint8* VAR_1, tmsize_t VAR_2, uint16 VAR_3)
{
 TIFFPredictorState *VAR_4 = FUNC_0(VAR_0);

 FUNC_2(VAR_4 != ((void*)0));
 FUNC_2(VAR_4->decodetile != ((void*)0));

 if ((*VAR_4->decodetile)(VAR_0, VAR_1, VAR_2, VAR_3)) {
  tmsize_t VAR_5 = VAR_4->rowsize;
  FUNC_2(VAR_5 > 0);
  if((VAR_2%VAR_5) !=0)
        {
            FUNC_1(VAR_0->tif_clientdata, "PredictorDecodeTile",
                         "%s", "occ0%rowsize != 0");
            return 0;
        }
  FUNC_2(VAR_4->decodepfunc != ((void*)0));
  while (VAR_2 > 0) {
   if( !(*VAR_4->decodepfunc)(VAR_0, VAR_1, VAR_5) )
                return 0;
   VAR_2 -= VAR_5;
   VAR_1 += VAR_5;
  }
  return 1;
 } else
  return 0;
}
