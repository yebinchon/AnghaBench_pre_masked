
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef TYPE_2__* xmlDocPtr ;
typedef TYPE_3__* xmlAttributePtr ;
typedef TYPE_4__* xmlAttrPtr ;
struct TYPE_12__ {int name; TYPE_2__* doc; } ;
struct TYPE_11__ {scalar_t__ atype; } ;
struct TYPE_10__ {scalar_t__ type; int * extSubset; int * intSubset; } ;
struct TYPE_9__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (int *,int ,int ) ;

int
FUNC_1(xmlDocPtr VAR_3, xmlNodePtr VAR_4, xmlAttrPtr VAR_5) {
    if (VAR_5 == ((void*)0))
        return(0);
    if (VAR_3 == ((void*)0)) {
        VAR_3 = VAR_5->doc;
 if (VAR_3 == ((void*)0)) return(0);
    }

    if ((VAR_3->intSubset == ((void*)0)) && (VAR_3->extSubset == ((void*)0))) {
        return(0);
    } else if (VAR_3->type == VAR_2) {

        return(0);
    } else {
        xmlAttributePtr VAR_6;

        if (VAR_4 == ((void*)0)) return(0);
        VAR_6 = FUNC_0(VAR_3->intSubset, VAR_4->name, VAR_5->name);
        if ((VAR_6 == ((void*)0)) && (VAR_3->extSubset != ((void*)0)))
            VAR_6 = FUNC_0(VAR_3->extSubset,
                           VAR_4->name, VAR_5->name);

 if ((VAR_6 != ((void*)0)) &&
     (VAR_6->atype == VAR_0 ||
      VAR_6->atype == VAR_1))
 return(1);
    }
    return(0);
}
