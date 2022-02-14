
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xsltTransformContextPtr ;
typedef int xmlChar ;


 void* VAR_0 ;
 int FUNC_0 (int ,char*,int const*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int *,char*) ;

__attribute__((used)) static void
FUNC_2(xsltTransformContextPtr VAR_2,
                    const xmlChar * VAR_3, void *VAR_4)
{
    if (VAR_0 == ((void*)0)) {
        FUNC_1(VAR_2, ((void*)0), ((void*)0),
                           "xsltExtShutdownTest: not initialized\n");
        return;
    }
    if (VAR_4 != VAR_0) {
        FUNC_1(VAR_2, ((void*)0), ((void*)0),
                           "xsltExtShutdownTest: wrong data\n");
    }
    VAR_0 = ((void*)0);
    FUNC_0(VAR_1,
                     "Unregistered test module : %s\n", VAR_3);
}
