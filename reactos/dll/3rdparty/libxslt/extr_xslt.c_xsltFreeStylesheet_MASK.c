
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int xsltStylesheet ;
struct TYPE_16__ {int dict; int * doc; int * principalData; struct TYPE_16__* principal; int * imports; scalar_t__ attVTs; struct TYPE_16__* mediaType; struct TYPE_16__* doctypeSystem; struct TYPE_16__* doctypePublic; struct TYPE_16__* encoding; struct TYPE_16__* version; struct TYPE_16__* methodURI; struct TYPE_16__* method; struct TYPE_16__* exclPrefixTab; int * nsHash; int * stripSpaces; int * cdataSection; int * variables; int templates; int * parent; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,char*) ;
 int VAR_0 ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (TYPE_1__*) ;

void
FUNC_25(xsltStylesheetPtr VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;
    if ((VAR_1->parent == ((void*)0)) && (VAR_1->doc))
 FUNC_8(VAR_1->doc,
     FUNC_4(VAR_1->doc));


    FUNC_13(VAR_1);
    FUNC_12(VAR_1);
    FUNC_20(VAR_1);
    FUNC_11(VAR_1);
    FUNC_21(VAR_1->templates);
    FUNC_10(VAR_1);
    FUNC_14(VAR_1);
    FUNC_18(VAR_1);




    FUNC_17(VAR_1);



    FUNC_24(VAR_1);

    if (VAR_1->variables != ((void*)0))
        FUNC_16(VAR_1->variables);
    if (VAR_1->cdataSection != ((void*)0))
        FUNC_7(VAR_1->cdataSection, ((void*)0));
    if (VAR_1->stripSpaces != ((void*)0))
        FUNC_7(VAR_1->stripSpaces, ((void*)0));
    if (VAR_1->nsHash != ((void*)0))
        FUNC_7(VAR_1->nsHash, ((void*)0));
    if (VAR_1->exclPrefixTab != ((void*)0))
        FUNC_5(VAR_1->exclPrefixTab);
    if (VAR_1->method != ((void*)0))
        FUNC_5(VAR_1->method);
    if (VAR_1->methodURI != ((void*)0))
        FUNC_5(VAR_1->methodURI);
    if (VAR_1->version != ((void*)0))
        FUNC_5(VAR_1->version);
    if (VAR_1->encoding != ((void*)0))
        FUNC_5(VAR_1->encoding);
    if (VAR_1->doctypePublic != ((void*)0))
        FUNC_5(VAR_1->doctypePublic);
    if (VAR_1->doctypeSystem != ((void*)0))
        FUNC_5(VAR_1->doctypeSystem);
    if (VAR_1->mediaType != ((void*)0))
        FUNC_5(VAR_1->mediaType);
    if (VAR_1->attVTs)
        FUNC_9(VAR_1->attVTs);
    if (VAR_1->imports != ((void*)0))
        FUNC_19(VAR_1->imports);
    if (VAR_1->doc != ((void*)0)) {
        FUNC_6(VAR_1->doc);
    }





    FUNC_3(VAR_1->dict);

    FUNC_2(VAR_1, -1, sizeof(xsltStylesheet));
    FUNC_5(VAR_1);
}
