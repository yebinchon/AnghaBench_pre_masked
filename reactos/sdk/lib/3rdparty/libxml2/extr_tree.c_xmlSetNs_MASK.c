
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmlNsPtr ;
typedef TYPE_1__* xmlNodePtr ;
struct TYPE_3__ {scalar_t__ type; int ns; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;

void
FUNC_1(xmlNodePtr VAR_3, xmlNsPtr VAR_4) {
    if (VAR_3 == ((void*)0)) {




 return;
    }
    if ((VAR_3->type == VAR_1) ||
        (VAR_3->type == VAR_0))
 VAR_3->ns = VAR_4;
}
