
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_4__ {scalar_t__ tif_rawcc; scalar_t__ tif_rawdatasize; int * tif_rawcp; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(TIFF* VAR_0, uint8* VAR_1, tmsize_t VAR_2, uint16 VAR_3)
{
 (void) VAR_3;
 while (VAR_2 > 0) {
  tmsize_t VAR_4;

  VAR_4 = VAR_2;
  if (VAR_0->tif_rawcc + VAR_4 > VAR_0->tif_rawdatasize)
   VAR_4 = VAR_0->tif_rawdatasize - VAR_0->tif_rawcc;

  FUNC_2( VAR_4 > 0 );





  if (VAR_0->tif_rawcp != VAR_1)
   FUNC_1(VAR_0->tif_rawcp, VAR_1, VAR_4);
  VAR_0->tif_rawcp += VAR_4;
  VAR_0->tif_rawcc += VAR_4;
  VAR_1 += VAR_4;
  VAR_2 -= VAR_4;
  if (VAR_0->tif_rawcc >= VAR_0->tif_rawdatasize &&
      !FUNC_0(VAR_0))
   return (0);
 }
 return (1);
}
