
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int * xmlCharEncodingHandlerPtr ;
struct TYPE_5__ {int charset; int * input; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int) ;

__attribute__((used)) static int
FUNC_2(xmlParserCtxtPtr VAR_1,
                       xmlCharEncodingHandlerPtr VAR_2, int VAR_3) {
    int VAR_4 = 0;

    if (VAR_2 != ((void*)0)) {
        if (VAR_1->input != ((void*)0)) {
     VAR_4 = FUNC_1(VAR_1, VAR_1->input, VAR_2, VAR_3);
 } else {
     FUNC_0(VAR_1, "xmlSwitchToEncoding : no input\n",
                    ((void*)0));
     return(-1);
 }



 VAR_1->charset = VAR_0;
    } else
 return(-1);
    return(VAR_4);
}
