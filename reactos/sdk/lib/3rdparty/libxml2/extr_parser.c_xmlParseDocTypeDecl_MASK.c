
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_9__ {int hasExternalSubset; scalar_t__ instate; int userData; TYPE_1__* sax; int disableSAX; int * extSubSystem; int * extSubURI; int const* intSubName; } ;
struct TYPE_8__ {int (* internalSubset ) (int ,int const*,int *,int *) ;} ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int const*,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int * FUNC_4 (TYPE_2__*,int **,int) ;
 int * FUNC_5 (TYPE_2__*) ;

void
FUNC_6(xmlParserCtxtPtr VAR_6) {
    const xmlChar *VAR_7 = ((void*)0);
    xmlChar *VAR_8 = ((void*)0);
    xmlChar *VAR_9 = ((void*)0);




    FUNC_0(9);

    VAR_2;




    VAR_7 = FUNC_5(VAR_6);
    if (VAR_7 == ((void*)0)) {
 FUNC_3(VAR_6, VAR_4,
         "xmlParseDocTypeDecl : no DOCTYPE name !\n");
    }
    VAR_6->intSubName = VAR_7;

    VAR_2;




    VAR_9 = FUNC_4(VAR_6, &VAR_8, 1);

    if ((VAR_9 != ((void*)0)) || (VAR_8 != ((void*)0))) {
        VAR_6->hasExternalSubset = 1;
    }
    VAR_6->extSubURI = VAR_9;
    VAR_6->extSubSystem = VAR_8;

    VAR_2;




    if ((VAR_6->sax != ((void*)0)) && (VAR_6->sax->internalSubset != ((void*)0)) &&
 (!VAR_6->disableSAX))
 VAR_6->sax->internalSubset(VAR_6->userData, VAR_7, VAR_8, VAR_9);
    if (VAR_6->instate == VAR_5)
 return;





    if (VAR_1 == '[')
 return;




    if (VAR_1 != '>') {
 FUNC_2(VAR_6, VAR_3, ((void*)0));
    }
    VAR_0;
}
