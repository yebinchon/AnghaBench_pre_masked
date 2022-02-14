
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nZoomNumerator; int nZoomDenominator; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

BOOL
FUNC_1(ME_TextEditor *VAR_2, int VAR_3, int VAR_4)
{


  if (VAR_3 == 0 && VAR_4 == 0)
  {
    VAR_2->nZoomNumerator = VAR_2->nZoomDenominator = 0;
    return VAR_1;
  }
  if (VAR_3 <= 0 || VAR_4 <= 0)
    return VAR_0;
  if (VAR_3 * 64 <= VAR_4 || VAR_3 / VAR_4 >= 64)
    return VAR_0;

  VAR_2->nZoomNumerator = VAR_3;
  VAR_2->nZoomDenominator = VAR_4;

  FUNC_0(VAR_2);
  return VAR_1;
}
