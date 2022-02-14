
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ret; TYPE_8__* ctxt; } ;
typedef TYPE_1__ xsltInitExtCtxt ;
typedef TYPE_2__* xsltExtModulePtr ;
typedef TYPE_3__* xsltExtDataPtr ;
typedef int xmlChar ;
struct TYPE_13__ {int * extInfos; } ;
struct TYPE_12__ {TYPE_2__* extModule; } ;
struct TYPE_11__ {int (* shutdownFunc ) (TYPE_8__*,int const*,void*) ;void* (* initFunc ) (TYPE_8__*,int const*) ;} ;


 void* FUNC_0 (TYPE_8__*,int const*) ;
 int FUNC_1 (TYPE_8__*,int const*,void*) ;
 scalar_t__ FUNC_2 (int *,int const*,TYPE_3__*) ;
 int * FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int const*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_7 (int ,char*,int const*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_8 (TYPE_2__*,void*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_2, void *VAR_3, const xmlChar * VAR_4)
{
    xsltExtDataPtr VAR_5 = (xsltExtDataPtr) VAR_2;
    xsltInitExtCtxt *VAR_6 = (xsltInitExtCtxt *) VAR_3;
    xsltExtModulePtr VAR_7;
    xsltExtDataPtr VAR_8;
    void *VAR_9;

    if ((VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)) || (VAR_4 == ((void*)0)) ||
        (VAR_6->ret == -1)) {




        return;
    }
    VAR_7 = VAR_5->extModule;
    if ((VAR_7 == ((void*)0)) || (VAR_7->initFunc == ((void*)0))) {




        return;
    }

    VAR_8 = (xsltExtDataPtr) FUNC_4(VAR_6->ctxt->extInfos, VAR_4);
    if (VAR_8 != ((void*)0)) {




        return;
    }

    VAR_9 = VAR_7->initFunc(VAR_6->ctxt, VAR_4);
    if (VAR_9 == ((void*)0)) {




    }
    VAR_8 = FUNC_8(VAR_7, VAR_9);
    if (VAR_8 == ((void*)0)) {
        VAR_6->ret = -1;
        return;
    }

    if (VAR_6->ctxt->extInfos == ((void*)0))
        VAR_6->ctxt->extInfos = FUNC_3(10);
    if (VAR_6->ctxt->extInfos == ((void*)0)) {
        VAR_6->ret = -1;
        return;
    }

    if (FUNC_2(VAR_6->ctxt->extInfos, VAR_4, VAR_8) < 0) {
        FUNC_7(VAR_1,
                         "Failed to register module data: %s\n", VAR_4);
        if (VAR_7->shutdownFunc)
            VAR_7->shutdownFunc(VAR_6->ctxt, VAR_4, VAR_9);
        FUNC_5(VAR_8);
        VAR_6->ret = -1;
        return;
    }




    VAR_6->ret++;
}
