
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * xmlParserInputPtr ;
typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int xmlDictPtr ;
struct TYPE_8__ {scalar_t__ code; } ;
struct TYPE_6__ {int warning; int error; TYPE_2__* userData; } ;
struct TYPE_7__ {int* spaceTab; int* space; int standalone; int wellFormed; int nsWellFormed; int valid; TYPE_3__ lastError; int * catalogs; int * attsSpecial; int * attsDefault; int node_seq; scalar_t__ sizeentcopy; scalar_t__ sizeentities; scalar_t__ nbentities; int charset; scalar_t__ depth; scalar_t__ errNo; scalar_t__ inSubset; scalar_t__ checkIndex; scalar_t__ nbChars; scalar_t__ record_info; TYPE_1__ vctxt; scalar_t__ disableSAX; scalar_t__ token; int instate; scalar_t__ external; scalar_t__ html; scalar_t__ hasPErefs; scalar_t__ hasExternalSubset; int * myDoc; int * extSubSystem; int * extSubURI; int * directory; int * encoding; int * version; int * name; scalar_t__ nameNr; int * node; scalar_t__ nodeNr; scalar_t__ spaceNr; int * input; scalar_t__ inputNr; int dict; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_3 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_3__*) ;

void
FUNC_8(xmlParserCtxtPtr VAR_6)
{
    xmlParserInputPtr VAR_7;
    xmlDictPtr VAR_8;

    if (VAR_6 == ((void*)0))
        return;

    VAR_8 = VAR_6->dict;

    while ((VAR_7 = FUNC_1(VAR_6)) != ((void*)0)) {
        FUNC_4(VAR_7);
    }
    VAR_6->inputNr = 0;
    VAR_6->input = ((void*)0);

    VAR_6->spaceNr = 0;
    if (VAR_6->spaceTab != ((void*)0)) {
 VAR_6->spaceTab[0] = -1;
 VAR_6->space = &VAR_6->spaceTab[0];
    } else {
        VAR_6->space = ((void*)0);
    }


    VAR_6->nodeNr = 0;
    VAR_6->node = ((void*)0);

    VAR_6->nameNr = 0;
    VAR_6->name = ((void*)0);

    FUNC_0(VAR_6->version);
    VAR_6->version = ((void*)0);
    FUNC_0(VAR_6->encoding);
    VAR_6->encoding = ((void*)0);
    FUNC_0(VAR_6->directory);
    VAR_6->directory = ((void*)0);
    FUNC_0(VAR_6->extSubURI);
    VAR_6->extSubURI = ((void*)0);
    FUNC_0(VAR_6->extSubSystem);
    VAR_6->extSubSystem = ((void*)0);
    if (VAR_6->myDoc != ((void*)0))
        FUNC_3(VAR_6->myDoc);
    VAR_6->myDoc = ((void*)0);

    VAR_6->standalone = -1;
    VAR_6->hasExternalSubset = 0;
    VAR_6->hasPErefs = 0;
    VAR_6->html = 0;
    VAR_6->external = 0;
    VAR_6->instate = VAR_2;
    VAR_6->token = 0;

    VAR_6->wellFormed = 1;
    VAR_6->nsWellFormed = 1;
    VAR_6->disableSAX = 0;
    VAR_6->valid = 1;





    VAR_6->record_info = 0;
    VAR_6->nbChars = 0;
    VAR_6->checkIndex = 0;
    VAR_6->inSubset = 0;
    VAR_6->errNo = VAR_1;
    VAR_6->depth = 0;
    VAR_6->charset = VAR_0;
    VAR_6->catalogs = ((void*)0);
    VAR_6->nbentities = 0;
    VAR_6->sizeentities = 0;
    VAR_6->sizeentcopy = 0;
    FUNC_6(&VAR_6->node_seq);

    if (VAR_6->attsDefault != ((void*)0)) {
        FUNC_5(VAR_6->attsDefault, VAR_3);
        VAR_6->attsDefault = ((void*)0);
    }
    if (VAR_6->attsSpecial != ((void*)0)) {
        FUNC_5(VAR_6->attsSpecial, ((void*)0));
        VAR_6->attsSpecial = ((void*)0);
    }





    if (VAR_6->lastError.code != VAR_1)
        FUNC_7(&VAR_6->lastError);
}
