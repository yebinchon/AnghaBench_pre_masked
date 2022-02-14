
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltExtModulePtr ;
typedef TYPE_3__* xsltExtDataPtr ;
typedef int xmlChar ;
struct TYPE_14__ {void* extData; } ;
struct TYPE_13__ {int (* shutdownFunc ) (TYPE_1__*,int const*,void*) ;void* (* initFunc ) (TYPE_1__*,int const*) ;} ;
struct TYPE_12__ {int * extInfos; } ;


 void* FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (TYPE_1__*,int const*,void*) ;
 scalar_t__ FUNC_2 (int *,int const*,void*) ;
 int * FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (int *,int const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,char*,int const*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_9 (TYPE_2__*,void*) ;
 int FUNC_10 (TYPE_1__*,int *,int *,char*,int const*) ;

void *
FUNC_11(xsltTransformContextPtr VAR_3, const xmlChar * VAR_4)
{
    xsltExtDataPtr VAR_5;

    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)))
        return (((void*)0));
    if (VAR_3->extInfos == ((void*)0)) {
        VAR_3->extInfos = FUNC_3(10);
        if (VAR_3->extInfos == ((void*)0))
            return (((void*)0));
        VAR_5 = ((void*)0);
    } else {
        VAR_5 = (xsltExtDataPtr) FUNC_4(VAR_3->extInfos, VAR_4);
    }
    if (VAR_5 == ((void*)0)) {
        void *VAR_6;
        xsltExtModulePtr VAR_7;

        FUNC_5(VAR_0);

        VAR_7 = FUNC_4(VAR_1, VAR_4);

        FUNC_6(VAR_0);

        if (VAR_7 == ((void*)0)) {




            return (((void*)0));
        } else {
            if (VAR_7->initFunc == ((void*)0))
                return (((void*)0));






            VAR_6 = VAR_7->initFunc(VAR_3, VAR_4);
            if (VAR_6 == ((void*)0))
                return (((void*)0));

            VAR_5 = FUNC_9(VAR_7, VAR_6);
            if (VAR_5 == ((void*)0))
                return (((void*)0));
            if (FUNC_2(VAR_3->extInfos, VAR_4, (void *) VAR_5) < 0) {
                FUNC_10(VAR_3, ((void*)0), ((void*)0),
                                   "Failed to register module data: %s\n",
                                   VAR_4);
                if (VAR_7->shutdownFunc)
                    VAR_7->shutdownFunc(VAR_3, VAR_4, VAR_6);
                FUNC_7(VAR_5);
                return (((void*)0));
            }
        }
    }
    return (VAR_5->extData);
}
