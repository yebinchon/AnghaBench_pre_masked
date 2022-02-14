
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlCharEncodingHandlerPtr ;
typedef int xmlCharEncodingHandler ;
typedef scalar_t__ xmlCharEncoding ;
typedef int uconv_t ;
typedef scalar_t__ iconv_t ;
struct TYPE_6__ {char const* name; int * uconv_out; int * uconv_in; int * output; int * input; scalar_t__ iconv_out; scalar_t__ iconv_in; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__** VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int * FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 char FUNC_6 (char const) ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 (int ,char*,char const*) ;
 int FUNC_8 (int ,char*,char const*) ;
 int VAR_5 ;
 char* FUNC_9 (scalar_t__) ;
 char* FUNC_10 (char const*) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;
 void* FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*) ;

xmlCharEncodingHandlerPtr
FUNC_15(const char *VAR_6) {
    const char *VAR_7;
    const char *VAR_8;
    xmlCharEncoding VAR_9;
    char VAR_10[100];
    int VAR_11;

    if (VAR_2 == ((void*)0)) FUNC_11();
    if (VAR_6 == ((void*)0)) return(VAR_4);
    if (VAR_6[0] == 0) return(VAR_4);




    VAR_8 = VAR_6;
    VAR_7 = FUNC_10(VAR_6);
    if (VAR_7 != ((void*)0))
 VAR_6 = VAR_7;




    for (VAR_11 = 0;VAR_11 < 99;VAR_11++) {
        VAR_10[VAR_11] = FUNC_6(VAR_6[VAR_11]);
 if (VAR_10[VAR_11] == 0) break;
    }
    VAR_10[VAR_11] = 0;

    if (VAR_2 != ((void*)0)) {
        for (VAR_11 = 0;VAR_11 < VAR_3; VAR_11++) {
            if (!FUNC_5(VAR_10, VAR_2[VAR_11]->name)) {




                return(VAR_2[VAR_11]);
            }
        }
    }
    VAR_9 = FUNC_14(VAR_8);
    if (VAR_9 != VAR_0) {
        const char* VAR_12;
        VAR_12 = FUNC_9(VAR_9);
        if ((VAR_12 != ((void*)0)) && (FUNC_5(VAR_6, VAR_12))) {
     return(FUNC_15(VAR_12));
        }
    }


    return(((void*)0));
}
