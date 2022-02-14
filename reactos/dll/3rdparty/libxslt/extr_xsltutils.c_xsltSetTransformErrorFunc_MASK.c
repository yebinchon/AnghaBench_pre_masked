
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef int xmlGenericErrorFunc ;
struct TYPE_3__ {void* errctx; int error; } ;



void
FUNC_0(xsltTransformContextPtr VAR_0,
                          void *VAR_1, xmlGenericErrorFunc VAR_2)
{
    VAR_0->error = VAR_2;
    VAR_0->errctx = VAR_1;
}
