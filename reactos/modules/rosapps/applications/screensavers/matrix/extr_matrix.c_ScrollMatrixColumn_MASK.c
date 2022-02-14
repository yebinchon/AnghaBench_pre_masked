
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ started; scalar_t__ countdown; int state; int length; scalar_t__ runlen; scalar_t__ blippos; scalar_t__ bliplen; int * glyph; } ;
typedef TYPE_1__ MATRIX_COLUMN ;
typedef int GLYPH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 () ;

void FUNC_5(MATRIX_COLUMN *VAR_6)
{
 int VAR_7;
 GLYPH VAR_8 = 0;
 GLYPH VAR_9;


 if(VAR_6->started == VAR_3)
 {
  if(--VAR_6->countdown <= 0)
   VAR_6->started = VAR_5;

  return;
 }


 VAR_8 = VAR_6->state ? (GLYPH)0 : (GLYPH)(VAR_4 << 8);






 for(VAR_7 = 0; VAR_7 < VAR_6->length; VAR_7++)
 {
  VAR_9 = VAR_6->glyph[VAR_7];




  if(FUNC_1(VAR_9) < FUNC_1(VAR_8) &&
   FUNC_1(VAR_9) == 0)
  {
   VAR_6->glyph[VAR_7] = FUNC_2(VAR_4 - 1);
   VAR_7++;
  }



  else if(FUNC_1(VAR_9) > FUNC_1(VAR_8))
  {
   VAR_6->glyph[VAR_7] = FUNC_0(VAR_9);



   if(FUNC_1(VAR_9) == VAR_4 - 1)
    VAR_7++;
  }

  VAR_8 = VAR_6->glyph[VAR_7];
 }


 if(--VAR_6->runlen <= 0)
 {
  if(VAR_6->state ^= 1)
   VAR_6->runlen = FUNC_4() % (3 * VAR_0/2) + VAR_2;
  else
   VAR_6->runlen = FUNC_4() % (VAR_1+1-VAR_0) + (VAR_2*2);
 }






 if(VAR_6->blippos >= 0 && VAR_6->blippos < VAR_6->length)
  FUNC_3(VAR_6->glyph, VAR_6->blippos);


 VAR_6->blippos += 2;



 if(VAR_6->blippos >= VAR_6->bliplen)
 {
  VAR_6->bliplen = VAR_6->length + FUNC_4() % 50;
  VAR_6->blippos = 0;
 }


 if(VAR_6->blippos >= 0 && VAR_6->blippos < VAR_6->length)
  FUNC_3(VAR_6->glyph, VAR_6->blippos);

}
