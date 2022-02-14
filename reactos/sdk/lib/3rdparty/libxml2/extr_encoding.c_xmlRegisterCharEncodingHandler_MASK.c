
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlCharEncodingHandlerPtr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 () ;

void
FUNC_2(xmlCharEncodingHandlerPtr VAR_5) {
    if (VAR_3 == ((void*)0)) FUNC_1();
    if ((VAR_5 == ((void*)0)) || (VAR_3 == ((void*)0))) {
        FUNC_0(VAR_2,
  "xmlRegisterCharEncodingHandler: NULL handler !\n", ((void*)0));
 return;
    }

    if (VAR_4 >= VAR_0) {
        FUNC_0(VAR_1,
 "xmlRegisterCharEncodingHandler: Too many handler registered, see %s\n",
                "MAX_ENCODING_HANDLERS");
 return;
    }
    VAR_3[VAR_4++] = VAR_5;
}
