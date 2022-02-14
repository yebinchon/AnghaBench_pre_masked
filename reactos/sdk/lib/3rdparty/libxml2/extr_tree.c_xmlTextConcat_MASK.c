
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_5__ {scalar_t__ type; int * content; int * properties; TYPE_1__* doc; } ;
struct TYPE_4__ {int * dict; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int * FUNC_2 (int *,int const*,int) ;
 int * FUNC_3 (int *,int const*,int) ;

int
FUNC_4(xmlNodePtr VAR_5, const xmlChar *VAR_6, int VAR_7) {
    if (VAR_5 == ((void*)0)) return(-1);

    if ((VAR_5->type != VAR_3) &&
        (VAR_5->type != VAR_0) &&
 (VAR_5->type != VAR_1) &&
 (VAR_5->type != VAR_2)) {




        return(-1);
    }

    if ((VAR_5->content == (xmlChar *) &(VAR_5->properties)) ||
        ((VAR_5->doc != ((void*)0)) && (VAR_5->doc->dict != ((void*)0)) &&
  FUNC_0(VAR_5->doc->dict, VAR_5->content))) {
 VAR_5->content = FUNC_3(VAR_5->content, VAR_6, VAR_7);
    } else {
        VAR_5->content = FUNC_2(VAR_5->content, VAR_6, VAR_7);
    }
    VAR_5->properties = ((void*)0);
    if (VAR_5->content == ((void*)0))
        return(-1);
    return(0);
}
