
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int* glyph; int blippos; } ;
typedef TYPE_1__ MATRIX_COLUMN ;
typedef int MATRIX ;
typedef int HDC ;
typedef int GLYPH ;


 int FUNC_0 (int *,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;

void FUNC_2(MATRIX_COLUMN *VAR_3, MATRIX *VAR_4, HDC VAR_5, int VAR_6)
{
 int VAR_7;


 for(VAR_7 = 0; VAR_7 < VAR_3->length; VAR_7++)
 {
  GLYPH VAR_8 = VAR_3->glyph[VAR_7];


  if(VAR_8 & VAR_1)
  {
   if((VAR_7 == VAR_3->blippos+0 || VAR_7 == VAR_3->blippos+1 ||
    VAR_7 == VAR_3->blippos+8 || VAR_7 == VAR_3->blippos+9) &&
    FUNC_1(VAR_8) >= VAR_2-1)
    VAR_8 |= VAR_2 << 8;

   FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7 * VAR_0, VAR_8);


   VAR_3->glyph[VAR_7] &= ~VAR_1;
  }
 }
}
