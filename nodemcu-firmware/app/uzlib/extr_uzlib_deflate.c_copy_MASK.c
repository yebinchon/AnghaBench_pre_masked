
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int min; int max; int code; scalar_t__ extraBits; } ;
typedef TYPE_1__ codeRecord ;
struct TYPE_6__ {TYPE_1__* distCodes; TYPE_1__* lenCodes; } ;
struct TYPE_5__ {int compDisabled; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,int) ;

void FUNC_4 (int VAR_4, int VAR_5) {
  FUNC_0(7);
  const codeRecord *VAR_6 = VAR_1->lenCodes, *VAR_7;
  const codeRecord *VAR_8 = VAR_1->distCodes, *VAR_9;
  int VAR_10, VAR_11, VAR_12;

  FUNC_1(!VAR_3->compDisabled);

  while (VAR_5 > 0) {
    int VAR_13 = (VAR_5 > 260 ? 258 : VAR_5 <= 258 ? VAR_5 : VAR_5 - 3);
    VAR_5 -= VAR_13;




    VAR_10 = -1;
    VAR_11 = VAR_2;
    while (1) {
      FUNC_1(VAR_11 - VAR_10 >= 2);
      VAR_12 = (VAR_11 + VAR_10) / 2;
      if (VAR_13 < VAR_6[VAR_12].min)
        VAR_11 = VAR_12;
      else if (VAR_13 > VAR_6[VAR_12].max)
        VAR_10 = VAR_12;
      else {
        VAR_7 = &VAR_6[VAR_12];
        break;
      }
    }





    if (VAR_7->code <= 279) {
      FUNC_3((VAR_7->code - 256) * 2, 7);
    } else {
      FUNC_3(0xc0 - 280 + VAR_7->code, 8);
    }



    if (VAR_7->extraBits)
      FUNC_2(VAR_13 - VAR_7->min, VAR_7->extraBits);




    VAR_10 = -1;
    VAR_11 = VAR_0;
    while (1) {
      FUNC_1(VAR_11 - VAR_10 >= 2);
      VAR_12 = (VAR_11 + VAR_10) / 2;
      if (VAR_4 < VAR_8[VAR_12].min)
        VAR_11 = VAR_12;
      else if (VAR_4 > VAR_8[VAR_12].max)
        VAR_10 = VAR_12;
      else {
        VAR_9 = &VAR_8[VAR_12];
        break;
      }
    }




    FUNC_3(VAR_9->code * 8, 5);




    if (VAR_9->extraBits)
      FUNC_2(VAR_4 - VAR_9->min, VAR_9->extraBits);
  }
}
