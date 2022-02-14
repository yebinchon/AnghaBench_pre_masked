
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
struct TYPE_5__ {int type; int prefix; int href; } ;



 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int ,int ) ;

xmlNsPtr
FUNC_2(xmlNsPtr VAR_1) {
    xmlNsPtr VAR_2;

    if (VAR_1 == ((void*)0)) return(((void*)0));
    switch (VAR_1->type) {
 case 128:
     VAR_2 = FUNC_1(((void*)0), VAR_1->href, VAR_1->prefix);
     break;
 default:




     return(((void*)0));
    }
    return(VAR_2);
}
