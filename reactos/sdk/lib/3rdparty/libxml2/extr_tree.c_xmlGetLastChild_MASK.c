
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xmlNodePtr ;
struct TYPE_3__ {scalar_t__ type; int * last; } ;
typedef TYPE_1__ xmlNode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;

xmlNodePtr
FUNC_1(const xmlNode *VAR_2) {
    if ((VAR_2 == ((void*)0)) || (VAR_2->type == VAR_0)) {




 return(((void*)0));
    }
    return(VAR_2->last);
}
