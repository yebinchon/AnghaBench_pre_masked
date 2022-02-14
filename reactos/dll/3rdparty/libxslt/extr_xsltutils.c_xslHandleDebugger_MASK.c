
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xsltTransformContextPtr ;
typedef int xsltTemplatePtr ;
typedef int xmlNodePtr ;
struct TYPE_2__ {int (* handler ) (int ,int ,int ,int ) ;} ;


 int FUNC_0 (int ,int ,int ,int ) ;
 TYPE_1__ VAR_0 ;

void
FUNC_1(xmlNodePtr VAR_1, xmlNodePtr VAR_2, xsltTemplatePtr VAR_3,
           xsltTransformContextPtr VAR_4)
{
    if (VAR_0.handler != ((void*)0))
 VAR_0.handler(VAR_1, VAR_2, VAR_3, VAR_4);
}
