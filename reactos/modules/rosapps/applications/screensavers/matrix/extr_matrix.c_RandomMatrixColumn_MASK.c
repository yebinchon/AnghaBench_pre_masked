
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* glyph; int length; } ;
typedef TYPE_1__ MATRIX_COLUMN ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

void FUNC_2(MATRIX_COLUMN *VAR_3)
{
 int VAR_4, VAR_5;

 for(VAR_4 = 1, VAR_5 = 0; VAR_4 < 16; VAR_4++)
 {

  while(FUNC_0(VAR_3->glyph[VAR_5]) < VAR_1-1 && VAR_5 < VAR_3->length)
   VAR_5++;

  if(VAR_5 >= VAR_3->length)
   break;

  VAR_3->glyph[VAR_5] = (VAR_3->glyph[VAR_5] & 0xff00) | (FUNC_1() % VAR_2);
  VAR_3->glyph[VAR_5] |= VAR_0;

  VAR_5 += FUNC_1() % 10;
 }
}
