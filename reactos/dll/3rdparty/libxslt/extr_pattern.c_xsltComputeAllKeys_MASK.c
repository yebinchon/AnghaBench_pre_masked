
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xmlNodePtr ;
struct TYPE_11__ {int * _private; } ;
struct TYPE_10__ {TYPE_5__* doc; } ;
struct TYPE_9__ {int state; int inst; int * document; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_1__*,int *,int ,char*) ;

__attribute__((used)) static int
FUNC_3(xsltTransformContextPtr VAR_1, xmlNodePtr VAR_2)
{
    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0))) {
 FUNC_2(VAR_1, ((void*)0), VAR_1->inst,
     "Internal error in xsltComputeAllKeys(): "
     "Bad arguments.\n");
 return(-1);
    }

    if (VAR_1->document == ((void*)0)) {



 if (VAR_2->doc->_private != ((void*)0))
     goto doc_info_mismatch;



 VAR_1->document = FUNC_1(VAR_1, VAR_2->doc);
 if (VAR_1->document == ((void*)0))
     return(-1);
    }
    return FUNC_0(VAR_1);

doc_info_mismatch:
    FUNC_2(VAR_1, ((void*)0), VAR_1->inst,
 "Internal error in xsltComputeAllKeys(): "
 "The context's document info doesn't match the "
 "document info of the current result tree.\n");
    VAR_1->state = VAR_0;
    return(-1);
}
