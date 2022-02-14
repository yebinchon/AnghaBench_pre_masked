
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct TYPE_8__ {scalar_t__ type; scalar_t__ name; int content; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

xmlNodePtr
FUNC_3(xmlNodePtr VAR_1, xmlNodePtr VAR_2) {
    if (VAR_1 == ((void*)0)) return(VAR_2);
    if (VAR_2 == ((void*)0)) return(VAR_1);
    if (VAR_1->type != VAR_0) return(VAR_1);
    if (VAR_2->type != VAR_0) return(VAR_1);
    if (VAR_2->name != VAR_1->name)
 return(VAR_1);
    FUNC_1(VAR_1, VAR_2->content);
    FUNC_2(VAR_2);
    FUNC_0(VAR_2);
    return(VAR_1);
}
