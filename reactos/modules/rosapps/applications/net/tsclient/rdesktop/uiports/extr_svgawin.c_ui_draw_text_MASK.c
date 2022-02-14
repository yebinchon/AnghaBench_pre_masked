
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
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int,int*,int) ;
 int FUNC_3 (int,int,int,int,int ) ;
 scalar_t__ FUNC_4 (int,int,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int,int,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_9(uint8 VAR_6, uint8 VAR_7, uint8 VAR_8, int VAR_9,
                  int VAR_10, int VAR_11,
                  int VAR_12, int VAR_13, int VAR_14, int VAR_15,
                  int VAR_16, int VAR_17, int VAR_18, int VAR_19, BRUSH * VAR_20,
                  int VAR_21, int VAR_22, uint8* VAR_23, uint8 VAR_24)
{
  int VAR_25;
  int VAR_26;
  int VAR_27;
  DATABLOB* VAR_28;
  FONTGLYPH* VAR_29;

  if (VAR_18 > 1)
  {
    if (FUNC_4(VAR_16, VAR_17, VAR_18, VAR_19))
      FUNC_5(VAR_4, VAR_5);
    FUNC_8(VAR_16, VAR_17, VAR_18, VAR_19, VAR_21, 0xc);
  }
  else
  {
    if (FUNC_4(VAR_12, VAR_13, VAR_14, VAR_15))
      FUNC_5(VAR_4, VAR_5);
    if (VAR_9 == VAR_0)
      FUNC_8(VAR_12, VAR_13, VAR_14, VAR_15, VAR_21, 0xc);
  }


  for (VAR_25 = 0; VAR_25 < VAR_24;)
  {
    switch (VAR_23[VAR_25])
    {
      case 0xff:
        if (VAR_25 + 2 < VAR_24)
          FUNC_2(VAR_23[VAR_25 + 1], VAR_23, VAR_23[VAR_25 + 2]);
        else
        {
          FUNC_6("this shouldn't be happening\n");
          FUNC_7(1);
        }

        VAR_24 -= VAR_25 + 3;
        VAR_23 = &(VAR_23[VAR_25 + 3]);
        VAR_25 = 0;
        break;

      case 0xfe:
        VAR_28 = FUNC_1(VAR_23[VAR_25 + 1]);
        if (VAR_28 != ((void*)0))
        {
          if ((((uint8 *) (VAR_28->data))[1] == 0) && (!(VAR_7 & VAR_1)))
          {
            if (VAR_7 & VAR_2)
              VAR_11 += VAR_23[VAR_25 + 2];
            else
              VAR_10 += VAR_23[VAR_25 + 2];
          }
          for (VAR_26 = 0; VAR_26 < VAR_28->size; VAR_26++)
            FUNC_0(((uint8 *) (VAR_28->data)), VAR_26);
        }
        if (VAR_25 + 2 < VAR_24)
          VAR_25 += 3;
        else
          VAR_25 += 2;
        VAR_24 -= VAR_25;

        VAR_23 = &(VAR_23[VAR_25]);
        VAR_25 = 0;
        break;

      default:
        FUNC_0(VAR_23, VAR_25);
        VAR_25++;
        break;
    }
  }
  if (VAR_18 > 1)
    FUNC_3(VAR_16, VAR_17, VAR_18, VAR_19, VAR_3);
  else
    FUNC_3(VAR_12, VAR_13, VAR_14, VAR_15, VAR_3);
}
