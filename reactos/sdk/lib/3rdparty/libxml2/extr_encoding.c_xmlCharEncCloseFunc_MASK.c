
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* name; int * uconv_in; int * uconv_out; int * iconv_in; int * iconv_out; } ;
typedef TYPE_1__ xmlCharEncodingHandler ;


 int FUNC_0 (int *) ;
 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;

int
FUNC_4(xmlCharEncodingHandler *VAR_3) {
    int VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6, VAR_7 = 0;

    if (VAR_3 == ((void*)0)) return(-1);
    if (VAR_3->name == ((void*)0)) return(-1);
    if (VAR_0 != ((void*)0)) {
        for (VAR_6 = 0;VAR_6 < VAR_1; VAR_6++) {
            if (VAR_3 == VAR_0[VAR_6]) {
         VAR_7 = 1;
  break;
     }
 }
    }
    if (VAR_5) {

        if (VAR_3->name != ((void*)0))
            FUNC_2(VAR_3->name);
        VAR_3->name = ((void*)0);
        FUNC_2(VAR_3);
    }
    return(VAR_4);
}
