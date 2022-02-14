
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int * xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_7__ {scalar_t__ type; int * children; int * content; int name; } ;
struct TYPE_6__ {int* space; TYPE_3__* node; int * myDoc; TYPE_1__* sax; } ;
struct TYPE_5__ {scalar_t__ ignorableWhitespace; scalar_t__ characters; } ;


 int FUNC_0 (int const) ;
 char FUNC_1 (int) ;
 char VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(xmlParserCtxtPtr VAR_2, const xmlChar *VAR_3, int VAR_4,
                     int VAR_5) {
    int VAR_6, VAR_7;
    xmlNodePtr VAR_8;





    if (VAR_2->sax->ignorableWhitespace == VAR_2->sax->characters)
 return(0);




    if ((VAR_2->space == ((void*)0)) || (*(VAR_2->space) == 1) ||
        (*(VAR_2->space) == -2))
 return(0);




    if (VAR_5 == 0) {
 for (VAR_6 = 0;VAR_6 < VAR_4;VAR_6++)
     if (!(FUNC_0(VAR_3[VAR_6]))) return(0);
    }




    if (VAR_2->node == ((void*)0)) return(0);
    if (VAR_2->myDoc != ((void*)0)) {
 VAR_7 = FUNC_3(VAR_2->myDoc, VAR_2->node->name);
        if (VAR_7 == 0) return(1);
        if (VAR_7 == 1) return(0);
    }




    if ((VAR_0 != '<') && (VAR_0 != 0xD)) return(0);
    if ((VAR_2->node->children == ((void*)0)) &&
 (VAR_0 == '<') && (FUNC_1(1) == '/')) return(0);

    VAR_8 = FUNC_2(VAR_2->node);
    if (VAR_8 == ((void*)0)) {
        if ((VAR_2->node->type != VAR_1) &&
            (VAR_2->node->content != ((void*)0))) return(0);
    } else if (FUNC_4(VAR_8))
        return(0);
    else if ((VAR_2->node->children != ((void*)0)) &&
             (FUNC_4(VAR_2->node->children)))
        return(0);
    return(1);
}
