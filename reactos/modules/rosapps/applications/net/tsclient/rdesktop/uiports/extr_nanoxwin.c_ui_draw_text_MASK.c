
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


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int,int,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int,int*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_10(uint8 VAR_9, uint8 VAR_10, uint8 VAR_11, int VAR_12,
                  int VAR_13, int VAR_14,
                  int VAR_15, int VAR_16, int VAR_17, int VAR_18,
                  int VAR_19, int VAR_20, int VAR_21, int VAR_22, BRUSH * VAR_23,
                  int VAR_24, int VAR_25, uint8 * VAR_26, uint8 VAR_27)
{
  FONTGLYPH * VAR_28;
  int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
  DATABLOB * VAR_34;

  FUNC_4(VAR_5, VAR_0);
  FUNC_5(VAR_5, 0);
  if (VAR_6 == 16 && VAR_4 == 32)
  {
    VAR_25 = FUNC_0(VAR_25);
    VAR_24 = FUNC_0(VAR_24);
  }
  FUNC_3(VAR_5, VAR_24);
  if (VAR_19 + VAR_21 > VAR_7)
  {
    VAR_21 = VAR_7 - VAR_19;
  }
  if (VAR_21 > 1)
  {
    FUNC_2(VAR_8, VAR_5, VAR_19, VAR_20, VAR_21, VAR_22);
  }
  else if (VAR_12 == VAR_1)
  {
    FUNC_2(VAR_8, VAR_5, VAR_15, VAR_16, VAR_17, VAR_18);
  }
  FUNC_3(VAR_5, VAR_25);

  for (VAR_29 = 0; VAR_29 < VAR_27;)
  {
    switch (VAR_26[VAR_29])
    {
      case 0xff:
        if (VAR_29 + 2 < VAR_27)
        {
          FUNC_7(VAR_26[VAR_29 + 1], VAR_26, VAR_26[VAR_29 + 2]);
        }
        else
        {
          FUNC_8("this shouldn't be happening\n");
          FUNC_9(1);
        }


        VAR_27 -= VAR_29 + 3;
        VAR_26 = &(VAR_26[VAR_29 + 3]);
        VAR_29 = 0;
        break;
      case 0xfe:
        VAR_34 = FUNC_6(VAR_26[VAR_29 + 1]);
        if (VAR_34 != ((void*)0))
        {
          if ((((uint8 *) (VAR_34->data))[1] == 0) &&
                                (!(VAR_10 & VAR_2)))
          {
            if (VAR_10 & VAR_3)
            {
              VAR_14 += VAR_26[VAR_29 + 2];
            }
            else
            {
              VAR_13 += VAR_26[VAR_29 + 2];
            }
          }
          for (VAR_30 = 0; VAR_30 < VAR_34->size; VAR_30++)
          {
            FUNC_1(((uint8 *) (VAR_34->data)), VAR_30);
          }
        }
        if (VAR_29 + 2 < VAR_27)
        {
          VAR_29 += 3;
        }
        else
        {
          VAR_29 += 2;
        }
        VAR_27 -= VAR_29;


        VAR_26 = &(VAR_26[VAR_29]);
        VAR_29 = 0;
        break;
      default:
        FUNC_1(VAR_26, VAR_29);
        VAR_29++;
        break;
    }
  }
}
