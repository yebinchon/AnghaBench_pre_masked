
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int size; scalar_t__ data; } ;
typedef int FONTGLYPH ;
typedef TYPE_1__ DATABLOB ;


 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int,int*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int,int,int,int) ;

void
FUNC_5(uint8 VAR_2, uint8 VAR_3, int VAR_4, int VAR_5, int VAR_6,
      int VAR_7, int VAR_8, int VAR_9, int VAR_10,
      int VAR_11, int VAR_12, int VAR_13, int VAR_14,
      int VAR_15, int VAR_16, uint8 * VAR_17, uint8 VAR_18)
{
 FONTGLYPH *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 DATABLOB *VAR_23;

 if (VAR_13 > 1)
 {
  FUNC_4(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
 }
 else if (VAR_4 == VAR_0)
 {
  FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, VAR_15);
 }


 for (VAR_20 = 0; VAR_20 < VAR_18;)
 {
  switch (VAR_17[VAR_20])
  {
   case 0xff:
    if (VAR_20 + 2 < VAR_18)
     FUNC_2(VAR_17[VAR_20 + 1], &(VAR_17[VAR_20 - VAR_17[VAR_20 + 2]]),
             VAR_17[VAR_20 + 2]);
    else
    {
     FUNC_3("this shouldn't be happening\n");
     break;
    }

    VAR_18 -= VAR_20 + 3;
    VAR_17 = &(VAR_17[VAR_20 + 3]);
    VAR_20 = 0;
    break;

   case 0xfe:
    VAR_23 = FUNC_1(VAR_17[VAR_20 + 1]);
    if (VAR_23 != ((void*)0))
    {
     if ((((uint8 *) (VAR_23->data))[1] == 0)
         && (!(VAR_3 & VAR_1)))
     {
      if (VAR_3 & 0x04)
       VAR_6 += VAR_17[VAR_20 + 2];
      else
       VAR_5 += VAR_17[VAR_20 + 2];
     }
     if (VAR_20 + 2 < VAR_18)
      VAR_20 += 3;
     else
      VAR_20 += 2;
     VAR_18 -= VAR_20;

     VAR_17 = &(VAR_17[VAR_20]);
     VAR_20 = 0;
     for (VAR_21 = 0; VAR_21 < VAR_23->size; VAR_21++)
      FUNC_0(((uint8 *) (VAR_23->data)), VAR_21);
    }
    break;
   default:
    FUNC_0(VAR_17, VAR_20);
    VAR_20++;
    break;
  }
 }
}
