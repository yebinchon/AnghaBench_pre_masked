
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xsltTransformContextPtr ;
typedef TYPE_2__* xmlXPathParserContextPtr ;
struct TYPE_5__ {TYPE_1__* context; } ;
struct TYPE_4__ {int * extra; } ;



xsltTransformContextPtr
FUNC_0(xmlXPathParserContextPtr VAR_0)
{
    if ((VAR_0 == ((void*)0)) || (VAR_0->context == ((void*)0)))
        return (((void*)0));
    return (VAR_0->context->extra);
}
