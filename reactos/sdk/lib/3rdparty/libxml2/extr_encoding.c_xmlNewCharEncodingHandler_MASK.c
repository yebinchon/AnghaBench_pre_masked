
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xmlCharEncodingOutputFunc ;
typedef int xmlCharEncodingInputFunc ;
typedef TYPE_1__* xmlCharEncodingHandlerPtr ;
typedef int xmlCharEncodingHandler ;
struct TYPE_5__ {char* name; int * uconv_out; int * uconv_in; int * iconv_out; int * iconv_in; int output; int input; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 char FUNC_1 (char const) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,char const*) ;
 int VAR_1 ;
 char* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (int) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*) ;

xmlCharEncodingHandlerPtr
FUNC_10(const char *VAR_2,
                          xmlCharEncodingInputFunc VAR_3,
                          xmlCharEncodingOutputFunc VAR_4) {
    xmlCharEncodingHandlerPtr VAR_5;
    const char *VAR_6;
    char VAR_7[500];
    int VAR_8;
    char *VAR_9 = ((void*)0);




    VAR_6 = FUNC_6(VAR_2);
    if (VAR_6 != ((void*)0))
 VAR_2 = VAR_6;




    if (VAR_2 == ((void*)0)) {
        FUNC_2(VAR_0,
         "xmlNewCharEncodingHandler : no name !\n", ((void*)0));
 return(((void*)0));
    }
    for (VAR_8 = 0;VAR_8 < 499;VAR_8++) {
        VAR_7[VAR_8] = FUNC_1(VAR_2[VAR_8]);
 if (VAR_7[VAR_8] == 0) break;
    }
    VAR_7[VAR_8] = 0;
    VAR_9 = FUNC_8(VAR_7);
    if (VAR_9 == ((void*)0)) {
        FUNC_3("xmlNewCharEncodingHandler : out of memory !\n");
 return(((void*)0));
    }




    VAR_5 = (xmlCharEncodingHandlerPtr)
              FUNC_7(sizeof(xmlCharEncodingHandler));
    if (VAR_5 == ((void*)0)) {
        FUNC_4(VAR_9);
        FUNC_3("xmlNewCharEncodingHandler : out of memory !\n");
 return(((void*)0));
    }
    FUNC_0(VAR_5, 0, sizeof(xmlCharEncodingHandler));
    VAR_5->input = VAR_3;
    VAR_5->output = VAR_4;
    VAR_5->name = VAR_9;
    FUNC_9(VAR_5);




    return(VAR_5);
}
