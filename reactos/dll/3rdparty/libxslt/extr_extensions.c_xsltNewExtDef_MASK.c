
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltExtDefPtr ;
typedef int xsltExtDef ;
typedef int xmlChar ;
struct TYPE_4__ {void* URI; void* prefix; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltExtDefPtr
FUNC_4(const xmlChar * VAR_0, const xmlChar * VAR_1)
{
    xsltExtDefPtr VAR_2;

    VAR_2 = (xsltExtDefPtr) FUNC_1(sizeof(xsltExtDef));
    if (VAR_2 == ((void*)0)) {
        FUNC_3(((void*)0), ((void*)0), ((void*)0),
                           "xsltNewExtDef : malloc failed\n");
        return (((void*)0));
    }
    FUNC_0(VAR_2, 0, sizeof(xsltExtDef));
    if (VAR_0 != ((void*)0))
        VAR_2->prefix = FUNC_2(VAR_0);
    if (VAR_1 != ((void*)0))
        VAR_2->URI = FUNC_2(VAR_1);
    return (VAR_2);
}
