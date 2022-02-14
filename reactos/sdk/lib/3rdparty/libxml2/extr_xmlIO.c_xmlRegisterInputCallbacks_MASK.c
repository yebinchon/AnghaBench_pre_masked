
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xmlInputReadCallback ;
typedef int xmlInputOpenCallback ;
typedef int xmlInputMatchCallback ;
typedef int xmlInputCloseCallback ;
struct TYPE_2__ {int closecallback; int readcallback; int opencallback; int matchcallback; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;

int
FUNC_0(xmlInputMatchCallback VAR_4,
 xmlInputOpenCallback VAR_5, xmlInputReadCallback VAR_6,
 xmlInputCloseCallback VAR_7) {
    if (VAR_2 >= VAR_0) {
 return(-1);
    }
    VAR_3[VAR_2].matchcallback = VAR_4;
    VAR_3[VAR_2].opencallback = VAR_5;
    VAR_3[VAR_2].readcallback = VAR_6;
    VAR_3[VAR_2].closecallback = VAR_7;
    VAR_1 = 1;
    return(VAR_2++);
}
