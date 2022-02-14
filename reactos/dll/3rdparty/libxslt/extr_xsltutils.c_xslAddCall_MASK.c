
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xsltTemplatePtr ;
typedef int xmlNodePtr ;
struct TYPE_2__ {int (* add ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_0 ;

int
FUNC_1(xsltTemplatePtr VAR_1, xmlNodePtr VAR_2)
{
    if (VAR_0.add != ((void*)0))
 return(VAR_0.add(VAR_1, VAR_2));
    return(0);
}
