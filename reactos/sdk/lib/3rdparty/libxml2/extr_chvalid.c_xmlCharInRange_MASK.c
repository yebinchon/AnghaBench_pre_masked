
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned short low; unsigned short high; } ;
typedef TYPE_1__ xmlChSRange ;
struct TYPE_6__ {int nbShortRange; int nbLongRange; TYPE_3__* longRange; TYPE_1__* shortRange; } ;
typedef TYPE_2__ xmlChRangeGroup ;
struct TYPE_7__ {unsigned int low; unsigned int high; } ;
typedef TYPE_3__ xmlChLRange ;



int
FUNC_0 (unsigned int VAR_0, const xmlChRangeGroup *VAR_1) {
    int VAR_2, VAR_3, VAR_4;
    const xmlChSRange *VAR_5;
    const xmlChLRange *VAR_6;

    if (VAR_1 == ((void*)0)) return(0);
    if (VAR_0 < 0x10000) {
 if (VAR_1->nbShortRange == 0)
     return 0;
 VAR_2 = 0;
 VAR_3 = VAR_1->nbShortRange - 1;
 VAR_5 = VAR_1->shortRange;
 while (VAR_2 <= VAR_3) {
     VAR_4 = (VAR_2 + VAR_3) / 2;
     if ((unsigned short) VAR_0 < VAR_5[VAR_4].low) {
  VAR_3 = VAR_4 - 1;
     } else {
         if ((unsigned short) VAR_0 > VAR_5[VAR_4].high) {
      VAR_2 = VAR_4 + 1;
  } else {
      return 1;
  }
     }
 }
    } else {
 if (VAR_1->nbLongRange == 0) {
     return 0;
 }
 VAR_2 = 0;
 VAR_3 = VAR_1->nbLongRange - 1;
 VAR_6 = VAR_1->longRange;
 while (VAR_2 <= VAR_3) {
     VAR_4 = (VAR_2 + VAR_3) / 2;
     if (VAR_0 < VAR_6[VAR_4].low) {
  VAR_3 = VAR_4 - 1;
     } else {
         if (VAR_0 > VAR_6[VAR_4].high) {
      VAR_2 = VAR_4 + 1;
  } else {
      return 1;
  }
     }
 }
    }
    return 0;
}
