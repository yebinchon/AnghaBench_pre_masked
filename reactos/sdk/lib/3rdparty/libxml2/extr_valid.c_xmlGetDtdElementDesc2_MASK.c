
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int * xmlElementTablePtr ;
typedef TYPE_2__* xmlElementPtr ;
typedef int xmlElement ;
typedef TYPE_3__* xmlDtdPtr ;
typedef int * xmlDictPtr ;
typedef int const xmlChar ;
struct TYPE_11__ {int * elements; TYPE_1__* doc; } ;
struct TYPE_10__ {int etype; void* prefix; void* name; int type; } ;
struct TYPE_9__ {int * dict; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int const*,int const*,TYPE_2__*) ;
 int * FUNC_3 (int ,int *) ;
 TYPE_2__* FUNC_4 (int *,int const*,int const*) ;
 scalar_t__ FUNC_5 (int) ;
 int const* FUNC_6 (int const*,int const**) ;
 void* FUNC_7 (int const*) ;
 int FUNC_8 (int *,char*) ;

__attribute__((used)) static xmlElementPtr
FUNC_9(xmlDtdPtr VAR_2, const xmlChar *VAR_3, int VAR_4) {
    xmlElementTablePtr VAR_5;
    xmlElementPtr VAR_6;
    xmlChar *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);

    if (VAR_2 == ((void*)0)) return(((void*)0));
    if (VAR_2->elements == ((void*)0)) {
 xmlDictPtr VAR_9 = ((void*)0);

 if (VAR_2->doc != ((void*)0))
     VAR_9 = VAR_2->doc->dict;

 if (!VAR_4)
     return(((void*)0));



 VAR_5 = (xmlElementTablePtr) VAR_2->elements;
 if (VAR_5 == ((void*)0)) {
     VAR_5 = FUNC_3(0, VAR_9);
     VAR_2->elements = (void *) VAR_5;
 }
 if (VAR_5 == ((void*)0)) {
     FUNC_8(((void*)0), "element table allocation failed");
     return(((void*)0));
 }
    }
    VAR_5 = (xmlElementTablePtr) VAR_2->elements;

    VAR_7 = FUNC_6(VAR_3, &VAR_8);
    if (VAR_7 != ((void*)0))
        VAR_3 = VAR_7;
    VAR_6 = FUNC_4(VAR_5, VAR_3, VAR_8);
    if ((VAR_6 == ((void*)0)) && (VAR_4)) {
 VAR_6 = (xmlElementPtr) FUNC_5(sizeof(xmlElement));
 if (VAR_6 == ((void*)0)) {
     FUNC_8(((void*)0), "malloc failed");
     return(((void*)0));
 }
 FUNC_0(VAR_6, 0, sizeof(xmlElement));
 VAR_6->type = VAR_0;




 VAR_6->name = FUNC_7(VAR_3);
 VAR_6->prefix = FUNC_7(VAR_8);
 VAR_6->etype = VAR_1;

 FUNC_2(VAR_5, VAR_3, VAR_8, VAR_6);
    }
    if (VAR_8 != ((void*)0)) FUNC_1(VAR_8);
    if (VAR_7 != ((void*)0)) FUNC_1(VAR_7);
    return(VAR_6);
}
