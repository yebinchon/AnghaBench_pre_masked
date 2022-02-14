
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* synctex_scanner_t ;
struct TYPE_6__ {char* output; } ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

int FUNC_4(synctex_scanner_t VAR_0,const char * VAR_1) {
 size_t VAR_2 = FUNC_2(VAR_1);
 if ((VAR_0 = FUNC_3(VAR_0)) && (0 < VAR_2)) {

  VAR_2 -= 1;
  if (!FUNC_0(VAR_1[VAR_2])) {

   int VAR_3 = FUNC_1(VAR_0,VAR_1);
   if (VAR_3) {
    return VAR_3;
   } else {


    const char * VAR_4 = VAR_1;
    const char * VAR_5 = VAR_0->output;
    while((FUNC_2(VAR_4) > 0) && (FUNC_2(VAR_5) > 0) && (*VAR_4 == *VAR_5))
    {
     VAR_4 += 1;
     VAR_5 += 1;
    }

    while(VAR_4 > VAR_1) {
     if (FUNC_0(*(VAR_4-1))) {
      break;
     }
     VAR_4 -= 1;
    }
    if ((VAR_4 > VAR_1) && (VAR_3 = FUNC_1(VAR_0,VAR_4))) {
     return VAR_3;
    }
    if (FUNC_0(VAR_1[0])) {


     while(0<VAR_2) {
      VAR_2 -= 1;
      if (FUNC_0(VAR_1[VAR_2])
        && (VAR_3 = FUNC_1(VAR_0,VAR_1+VAR_2+1))) {
       return VAR_3;
      }
     }
    }
   }
   return VAR_3;
  }
 }
 return 0;
}
