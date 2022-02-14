
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int * xmlDocPtr ;
typedef int * xmlCharEncodingHandlerPtr ;
typedef int xmlChar ;
struct TYPE_9__ {int * myDoc; scalar_t__ recovery; scalar_t__ wellFormed; TYPE_1__* input; } ;
struct TYPE_8__ {char* filename; } ;


 int FUNC_0 (TYPE_2__*,int,char const*) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (TYPE_2__*,int *) ;

__attribute__((used)) static xmlDocPtr
FUNC_7(xmlParserCtxtPtr VAR_0, const char *VAR_1, const char *VAR_2,
          int VAR_3, int VAR_4)
{
    xmlDocPtr VAR_5;

    FUNC_0(VAR_0, VAR_3, VAR_2);
    if (VAR_2 != ((void*)0)) {
        xmlCharEncodingHandlerPtr VAR_6;

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 != ((void*)0))
     FUNC_6(VAR_0, VAR_6);
    }
    if ((VAR_1 != ((void*)0)) && (VAR_0->input != ((void*)0)) &&
        (VAR_0->input->filename == ((void*)0)))
        VAR_0->input->filename = (char *) FUNC_5((const xmlChar *) VAR_1);
    FUNC_4(VAR_0);
    if ((VAR_0->wellFormed) || VAR_0->recovery)
        VAR_5 = VAR_0->myDoc;
    else {
        VAR_5 = ((void*)0);
 if (VAR_0->myDoc != ((void*)0)) {
     FUNC_2(VAR_0->myDoc);
 }
    }
    VAR_0->myDoc = ((void*)0);
    if (!VAR_4) {
 FUNC_3(VAR_0);
    }

    return (VAR_5);
}
