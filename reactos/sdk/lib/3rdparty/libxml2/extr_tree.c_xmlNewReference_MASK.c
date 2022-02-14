
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int xmlNode ;
typedef TYPE_2__* xmlEntityPtr ;
typedef int xmlDoc ;
typedef char xmlChar ;
struct TYPE_8__ {int content; } ;
struct TYPE_7__ {struct TYPE_7__* last; struct TYPE_7__* children; int content; void* name; int * doc; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_2__* FUNC_1 (int const*,void*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 void* FUNC_6 (char const*,int) ;
 int FUNC_7 (char*) ;

xmlNodePtr
FUNC_8(const xmlDoc *VAR_2, const xmlChar *VAR_3) {
    xmlNodePtr VAR_4;
    xmlEntityPtr VAR_5;

    if (VAR_3 == ((void*)0))
        return(((void*)0));




    VAR_4 = (xmlNodePtr) FUNC_2(sizeof(xmlNode));
    if (VAR_4 == ((void*)0)) {
 FUNC_7("building reference");
 return(((void*)0));
    }
    FUNC_0(VAR_4, 0, sizeof(xmlNode));
    VAR_4->type = VAR_0;

    VAR_4->doc = (xmlDoc *)VAR_2;
    if (VAR_3[0] == '&') {
        int VAR_6;
        VAR_3++;
 VAR_6 = FUNC_5(VAR_3);
 if (VAR_3[VAR_6 - 1] == ';')
     VAR_4->name = FUNC_6(VAR_3, VAR_6 - 1);
 else
     VAR_4->name = FUNC_6(VAR_3, VAR_6);
    } else
 VAR_4->name = FUNC_4(VAR_3);

    VAR_5 = FUNC_1(VAR_2, VAR_4->name);
    if (VAR_5 != ((void*)0)) {
 VAR_4->content = VAR_5->content;





 VAR_4->children = (xmlNodePtr) VAR_5;
 VAR_4->last = (xmlNodePtr) VAR_5;
    }

    if ((VAR_1) && (&FUNC_3))
 FUNC_3(VAR_4);
    return(VAR_4);
}
