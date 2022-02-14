
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltExtModulePtr ;
typedef int * xsltExtDataPtr ;
typedef int xmlChar ;
struct TYPE_10__ {int (* styleShutdownFunc ) (TYPE_1__*,int const*,void*) ;void* (* styleInitFunc ) (TYPE_1__*,int const*) ;} ;
struct TYPE_9__ {int errors; int * extInfos; } ;


 void* FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (TYPE_1__*,int const*,void*) ;
 scalar_t__ FUNC_2 (int *,int const*,void*) ;
 int * FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (int *,int const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int const*) ;
 int VAR_2 ;
 int * FUNC_9 (TYPE_2__*,void*) ;
 int FUNC_10 (int *,TYPE_1__*,int *,char*,int const*) ;

__attribute__((used)) static xsltExtDataPtr
FUNC_11(xsltStylesheetPtr VAR_3,
         const xmlChar * VAR_4)
{
    xsltExtDataPtr VAR_5;
    void *VAR_6 = ((void*)0);
    xsltExtModulePtr VAR_7;

    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)))
 return(((void*)0));

    if (VAR_1 == ((void*)0)) {




 return(((void*)0));
    }

    FUNC_5(VAR_0);

    VAR_7 = FUNC_4(VAR_1, VAR_4);

    FUNC_6(VAR_0);

    if (VAR_7 == ((void*)0)) {




 return (((void*)0));
    }



    if (VAR_3->extInfos == ((void*)0)) {
 VAR_3->extInfos = FUNC_3(10);
 if (VAR_3->extInfos == ((void*)0))
     return (((void*)0));
    }



    if (VAR_7->styleInitFunc == ((void*)0)) {




    } else {







 VAR_6 = VAR_7->styleInitFunc(VAR_3, VAR_4);
    }



    VAR_5 = FUNC_9(VAR_7, VAR_6);
    if (VAR_5 == ((void*)0))
 return (((void*)0));

    if (FUNC_2(VAR_3->extInfos, VAR_4,
 (void *) VAR_5) < 0)
    {
 FUNC_10(((void*)0), VAR_3, ((void*)0),
     "Failed to register module '%s'.\n", VAR_4);
 VAR_3->errors++;
 if (VAR_7->styleShutdownFunc)
     VAR_7->styleShutdownFunc(VAR_3, VAR_4, VAR_6);
 FUNC_7(VAR_5);
 return (((void*)0));
    }

    return(VAR_5);
}
