
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int * xmlParserInputPtr ;
typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_8__ {char* directory; scalar_t__ input_id; int _private; int options; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int const*,int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (char*,char*,TYPE_1__*) ;
 TYPE_1__* FUNC_5 () ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static xmlParserCtxtPtr
FUNC_7(const xmlChar *VAR_0, const xmlChar *VAR_1,
                   const xmlChar *VAR_2, xmlParserCtxtPtr VAR_3) {
    xmlParserCtxtPtr VAR_4;
    xmlParserInputPtr VAR_5;
    char *VAR_6 = ((void*)0);
    xmlChar *VAR_7;

    VAR_4 = FUNC_5();
    if (VAR_4 == ((void*)0)) {
 return(((void*)0));
    }

    if (VAR_3 != ((void*)0)) {
        VAR_4->options = VAR_3->options;
        VAR_4->_private = VAR_3->_private;




 VAR_4->input_id = VAR_3->input_id + 1;
    }

    VAR_7 = FUNC_1(VAR_0, VAR_2);

    if (VAR_7 == ((void*)0)) {
 VAR_5 = FUNC_4((char *)VAR_0, (char *)VAR_1, VAR_4);
 if (VAR_5 == ((void*)0)) {
     FUNC_3(VAR_4);
     return(((void*)0));
 }

 FUNC_0(VAR_4, VAR_5);

 if ((VAR_4->directory == ((void*)0)) && (VAR_6 == ((void*)0)))
     VAR_6 = FUNC_6((char *)VAR_0);
 if ((VAR_4->directory == ((void*)0)) && (VAR_6 != ((void*)0)))
     VAR_4->directory = VAR_6;
    } else {
 VAR_5 = FUNC_4((char *)VAR_7, (char *)VAR_1, VAR_4);
 if (VAR_5 == ((void*)0)) {
     FUNC_2(VAR_7);
     FUNC_3(VAR_4);
     return(((void*)0));
 }

 FUNC_0(VAR_4, VAR_5);

 if ((VAR_4->directory == ((void*)0)) && (VAR_6 == ((void*)0)))
     VAR_6 = FUNC_6((char *)VAR_7);
 if ((VAR_4->directory == ((void*)0)) && (VAR_6 != ((void*)0)))
     VAR_4->directory = VAR_6;
 FUNC_2(VAR_7);
    }
    return(VAR_4);
}
