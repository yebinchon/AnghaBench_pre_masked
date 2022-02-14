
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef int xsltStylesheetPtr ;
typedef int * xmlNodePtr ;
typedef int (* xmlGenericErrorFunc ) (void*,char*,char*) ;
struct TYPE_4__ {scalar_t__ state; int * inst; void* errctx; int (* error ) (void*,char*,char*) ;} ;


 int FUNC_0 (char const*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*,char*,char*) ;
 void* VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;

void
FUNC_4(xsltTransformContextPtr VAR_3,
     xsltStylesheetPtr VAR_4,
     xmlNodePtr VAR_5,
     const char *VAR_6, ...) {
    xmlGenericErrorFunc VAR_7 = FUNC_2;
    void *VAR_8 = VAR_2;
    char * VAR_9;

    if (VAR_3 != ((void*)0)) {
        if (VAR_3->state == VAR_1)
     VAR_3->state = VAR_0;
 if (VAR_3->error != ((void*)0)) {
     VAR_7 = VAR_3->error;
     VAR_8 = VAR_3->errctx;
 }
    }
    if ((VAR_5 == ((void*)0)) && (VAR_3 != ((void*)0)))
 VAR_5 = VAR_3->inst;
    FUNC_3(VAR_3, VAR_4, VAR_5);
    FUNC_0(VAR_6, VAR_9);
    VAR_7(VAR_8, "%s", VAR_9);
    if (VAR_9 != ((void*)0))
 FUNC_1(VAR_9);
}
