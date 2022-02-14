
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rfbColourMap ;
struct TYPE_5__ {int ncolours; TYPE_1__* colours; } ;
struct TYPE_4__ {int blue; int green; int red; } ;
typedef int * HCOLOURMAP ;
typedef TYPE_2__ COLOURMAP ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int ,int ,int ) ;

HCOLOURMAP
FUNC_2(COLOURMAP * VAR_1)
{
 int VAR_2;
 rfbColourMap *VAR_3 = FUNC_0(VAR_0, VAR_1->ncolours);
 for (VAR_2 = 0; VAR_2 < VAR_1->ncolours; VAR_2++)
 {
  FUNC_1(VAR_3, VAR_2, VAR_1->colours[VAR_2].red,
         VAR_1->colours[VAR_2].green, VAR_1->colours[VAR_2].blue);
 }
 return VAR_3;
}
