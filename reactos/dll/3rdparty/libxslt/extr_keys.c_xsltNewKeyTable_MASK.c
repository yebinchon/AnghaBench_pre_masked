
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltKeyTablePtr ;
typedef int xsltKeyTable ;
typedef int xmlChar ;
struct TYPE_4__ {int keys; void* nameURI; void* name; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int const*) ;
 int FUNC_4 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltKeyTablePtr
FUNC_5(const xmlChar *VAR_0, const xmlChar *VAR_1) {
    xsltKeyTablePtr VAR_2;

    VAR_2 = (xsltKeyTablePtr) FUNC_2(sizeof(xsltKeyTable));
    if (VAR_2 == ((void*)0)) {
 FUNC_4(((void*)0), ((void*)0), ((void*)0),
  "xsltNewKeyTable : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_2, 0, sizeof(xsltKeyTable));
    if (VAR_0 != ((void*)0))
 VAR_2->name = FUNC_3(VAR_0);
    if (VAR_1 != ((void*)0))
 VAR_2->nameURI = FUNC_3(VAR_1);
    VAR_2->keys = FUNC_1(0);
    return(VAR_2);
}
