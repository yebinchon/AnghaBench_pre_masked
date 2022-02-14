
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltKeyDefPtr ;
typedef int xsltKeyDef ;
typedef int xmlChar ;
struct TYPE_4__ {int * nsList; void* nameURI; void* name; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltKeyDefPtr
FUNC_4(const xmlChar *VAR_0, const xmlChar *VAR_1) {
    xsltKeyDefPtr VAR_2;

    VAR_2 = (xsltKeyDefPtr) FUNC_1(sizeof(xsltKeyDef));
    if (VAR_2 == ((void*)0)) {
 FUNC_3(((void*)0), ((void*)0), ((void*)0),
  "xsltNewKeyDef : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_2, 0, sizeof(xsltKeyDef));
    if (VAR_0 != ((void*)0))
 VAR_2->name = FUNC_2(VAR_0);
    if (VAR_1 != ((void*)0))
 VAR_2->nameURI = FUNC_2(VAR_1);
    VAR_2->nsList = ((void*)0);
    return(VAR_2);
}
