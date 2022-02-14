
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int size; scalar_t__ data; } ;
typedef int FONTGLYPH ;
typedef TYPE_1__ DATABLOB ;
typedef int BRUSH ;


 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,int,int,int,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int,int*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int,int,int,int) ;

void
FUNC_7(uint8 VAR_4, uint8 VAR_5, uint8 VAR_6, int VAR_7,
             int VAR_8, int VAR_9,
             int VAR_10, int VAR_11, int VAR_12, int VAR_13,
             int VAR_14, int VAR_15, int VAR_16, int VAR_17, BRUSH * VAR_18,
             int VAR_19, int VAR_20, uint8 * VAR_21, uint8 VAR_22)
{
  int VAR_23;
  int VAR_24;
  int VAR_25;
  DATABLOB * VAR_26;
  FONTGLYPH * VAR_27;

  if (VAR_14 + VAR_16 > VAR_3)
  {
    VAR_16 = VAR_3 - VAR_14;
  }
  if (VAR_16 > 1)
  {
    FUNC_1(VAR_14, VAR_15, VAR_16, VAR_17, VAR_19, 0xc);
  }
  else
  {
    if (VAR_7 == VAR_0)
    {
      FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_19, 0xc);
    }
  }

  for (VAR_23 = 0; VAR_23 < VAR_22;)
  {
    switch (VAR_21[VAR_23])
    {
      case 0xff:
        if (VAR_23 + 2 < VAR_22)
        {
          FUNC_3(VAR_21[VAR_23 + 1], VAR_21, VAR_21[VAR_23 + 2]);
        }
        else
        {
          FUNC_4("this shouldn't be happening\n");
          FUNC_5(1);
        }


        VAR_22 -= VAR_23 + 3;
        VAR_21 = &(VAR_21[VAR_23 + 3]);
        VAR_23 = 0;
        break;
      case 0xfe:
        VAR_26 = FUNC_2(VAR_21[VAR_23 + 1]);
        if (VAR_26 != ((void*)0))
        {
          if ((((uint8 *) (VAR_26->data))[1] == 0) &&
                              (!(VAR_5 & VAR_1)))
          {
            if (VAR_5 & VAR_2)
            {
              VAR_9 += VAR_21[VAR_23 + 2];
            }
            else
            {
              VAR_8 += VAR_21[VAR_23 + 2];
            }
          }
          for (VAR_24 = 0; VAR_24 < VAR_26->size; VAR_24++)
          {
            FUNC_0(((uint8 *) (VAR_26->data)), VAR_24);
          }
        }
        if (VAR_23 + 2 < VAR_22)
        {
          VAR_23 += 3;
        }
        else
        {
          VAR_23 += 2;
        }
        VAR_22 -= VAR_23;


        VAR_21 = &(VAR_21[VAR_23]);
        VAR_23 = 0;
        break;
      default:
        FUNC_0(VAR_21, VAR_23);
        VAR_23++;
        break;
    }
  }
  if (VAR_16 > 1)
  {
    FUNC_6(VAR_14, VAR_15, VAR_16, VAR_17);
  }
  else
  {
    FUNC_6(VAR_10, VAR_11, VAR_12, VAR_13);
  }
}
