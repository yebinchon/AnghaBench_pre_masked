
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputPtr ;
typedef int xmlParserCtxtPtr ;
typedef TYPE_2__* xmlEntityPtr ;
typedef int xmlChar ;
struct TYPE_8__ {int etype; scalar_t__ length; int * content; int * URI; int * name; scalar_t__ ExternalID; } ;
struct TYPE_7__ {char* filename; scalar_t__ length; int * end; int * cur; int * base; } ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,char*,int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (char*,char*,int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

xmlParserInputPtr
FUNC_6(xmlParserCtxtPtr VAR_2, xmlEntityPtr VAR_3) {
    xmlParserInputPtr VAR_4;

    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_2, "xmlNewEntityInputStream entity = NULL\n",
                ((void*)0));
 return(((void*)0));
    }
    if (VAR_1)
 FUNC_1(VAR_0,
  "new input from entity: %s\n", VAR_3->name);
    if (VAR_3->content == ((void*)0)) {
 switch (VAR_3->etype) {
            case 132:
         FUNC_0(VAR_2, "Cannot parse entity %s\n",
                 VAR_3->name);
                break;
            case 133:
            case 131:
  return(FUNC_2((char *) VAR_3->URI,
         (char *) VAR_3->ExternalID, VAR_2));
            case 130:
         FUNC_0(VAR_2,
        "Internal entity %s without content !\n",
                 VAR_3->name);
                break;
            case 129:
         FUNC_0(VAR_2,
        "Internal parameter entity %s without content !\n",
                 VAR_3->name);
                break;
            case 128:
         FUNC_0(VAR_2,
        "Predefined entity %s without content !\n",
                 VAR_3->name);
                break;
 }
 return(((void*)0));
    }
    VAR_4 = FUNC_3(VAR_2);
    if (VAR_4 == ((void*)0)) {
 return(((void*)0));
    }
    if (VAR_3->URI != ((void*)0))
 VAR_4->filename = (char *) FUNC_4((xmlChar *) VAR_3->URI);
    VAR_4->base = VAR_3->content;
    if (VAR_3->length == 0)
        VAR_3->length = FUNC_5(VAR_3->content);
    VAR_4->cur = VAR_3->content;
    VAR_4->length = VAR_3->length;
    VAR_4->end = &VAR_3->content[VAR_4->length];
    return(VAR_4);
}
