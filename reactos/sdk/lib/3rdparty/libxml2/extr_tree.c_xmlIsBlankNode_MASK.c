
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__* content; } ;
typedef TYPE_1__ xmlNode ;
typedef scalar_t__ xmlChar ;


 int FUNC_0 (scalar_t__ const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_1(const xmlNode *VAR_2) {
    const xmlChar *VAR_3;
    if (VAR_2 == ((void*)0)) return(0);

    if ((VAR_2->type != VAR_1) &&
        (VAR_2->type != VAR_0))
 return(0);
    if (VAR_2->content == ((void*)0)) return(1);
    VAR_3 = VAR_2->content;
    while (*VAR_3 != 0) {
 if (!FUNC_0(*VAR_3)) return(0);
 VAR_3++;
    }

    return(1);
}
