
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xsltTransformCachePtr ;
typedef int xsltTransformCache ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltTransformCachePtr
FUNC_3(void)
{
    xsltTransformCachePtr VAR_0;

    VAR_0 = (xsltTransformCachePtr) FUNC_1(sizeof(xsltTransformCache));
    if (VAR_0 == ((void*)0)) {
 FUNC_2(((void*)0), ((void*)0), ((void*)0),
     "xsltTransformCacheCreate : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_0, 0, sizeof(xsltTransformCache));
    return(VAR_0);
}
