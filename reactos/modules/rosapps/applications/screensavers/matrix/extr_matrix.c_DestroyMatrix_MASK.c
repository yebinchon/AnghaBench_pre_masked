
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numcols; int hbmBitmap; int hdcBitmap; TYPE_1__* column; } ;
struct TYPE_5__ {TYPE_2__* glyph; } ;
typedef TYPE_2__ MATRIX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(MATRIX *VAR_0)
{
 int VAR_1;


 for(VAR_1 = 0; VAR_1 < VAR_0->numcols; VAR_1++)
  FUNC_2(VAR_0->column[VAR_1].glyph);

 FUNC_0(VAR_0->hdcBitmap);
 FUNC_1(VAR_0->hbmBitmap);


 FUNC_2(VAR_0);
}
