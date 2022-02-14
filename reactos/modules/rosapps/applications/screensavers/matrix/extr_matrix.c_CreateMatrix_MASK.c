
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numcols; int numrows; int width; int height; scalar_t__ message; int hbmBitmap; int hdcBitmap; TYPE_1__* column; } ;
struct TYPE_4__ {int length; int countdown; int state; int runlen; scalar_t__* glyph; int started; } ;
typedef int MATRIX_COLUMN ;
typedef TYPE_2__ MATRIX ;
typedef int HWND ;
typedef int HDC ;
typedef int GLYPH ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 void* FUNC_10 (int) ;

MATRIX *FUNC_11(HWND VAR_4, int VAR_5, int VAR_6)
{
 MATRIX *VAR_7;
 HDC VAR_8;
 int VAR_9, VAR_10;

 int VAR_11 = VAR_6 / VAR_1 + 1;
 int VAR_12 = VAR_5 / VAR_2 + 1;


 if((VAR_7 = FUNC_10(sizeof(MATRIX) + sizeof(MATRIX_COLUMN) * VAR_12)) == 0)
  return 0;

 VAR_7->numcols = VAR_12;
 VAR_7->numrows = VAR_11;
 VAR_7->width = VAR_5;
 VAR_7->height = VAR_6;

 for(VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
 {
  VAR_7->column[VAR_9].length = VAR_11;
  VAR_7->column[VAR_9].started = VAR_0;
  VAR_7->column[VAR_9].countdown = FUNC_9() % 100;
  VAR_7->column[VAR_9].state = FUNC_9() % 2;
  VAR_7->column[VAR_9].runlen = FUNC_9() % 20 + 3;

  VAR_7->column[VAR_9].glyph = FUNC_10(sizeof(GLYPH) * (VAR_11+16));

  for(VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
   VAR_7->column[VAR_9].glyph[VAR_10] = 0;
 }


 VAR_8 = FUNC_1(((void*)0));
 VAR_7->hbmBitmap = FUNC_5(FUNC_2(0), FUNC_6(VAR_3));
 VAR_7->hdcBitmap = FUNC_0(VAR_8);
 FUNC_8(VAR_7->hdcBitmap, VAR_7->hbmBitmap);
 FUNC_7(((void*)0), VAR_8);



 if(FUNC_3(VAR_4) == 0)
  VAR_7->message = FUNC_4(VAR_4, VAR_7->numcols, VAR_7->numrows);
 else
  VAR_7->message = 0;

 return VAR_7;
}
