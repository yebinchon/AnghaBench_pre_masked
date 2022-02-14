
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef int xmlChar ;
struct TYPE_4__ {int style; } ;


 void* VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,int const*) ;
 int FUNC_2 (TYPE_1__*,int *,int *,char*) ;

__attribute__((used)) static void *
FUNC_3(xsltTransformContextPtr VAR_4, const xmlChar * VAR_5)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_0(VAR_3,
                         "xsltExtInitTest: not initialized,"
                         " calling xsltStyleGetExtData\n");
        VAR_1 = FUNC_1(VAR_4->style, VAR_5);
        if (VAR_1 == ((void*)0)) {
            FUNC_2(VAR_4, ((void*)0), ((void*)0),
                               "xsltExtInitTest: not initialized\n");
            return (((void*)0));
        }
    }
    if (VAR_0 != ((void*)0)) {
        FUNC_2(VAR_4, ((void*)0), ((void*)0),
                           "xsltExtInitTest: already initialized\n");
        return (((void*)0));
    }
    VAR_0 = (void *) "test data";
    FUNC_0(VAR_2,
                     "Registered test module : %s\n", VAR_5);
    return (VAR_0);
}
