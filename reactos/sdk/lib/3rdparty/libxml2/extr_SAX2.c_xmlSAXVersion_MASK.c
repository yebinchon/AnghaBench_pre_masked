
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int initialized; void* fatalError; void* error; int warning; int comment; int processingInstruction; void* ignorableWhitespace; int cdataBlock; void* characters; int reference; int endDocument; int startDocument; int setDocumentLocator; int unparsedEntityDecl; int notationDecl; int elementDecl; int attributeDecl; int entityDecl; int getParameterEntity; int getEntity; int resolveEntity; int hasExternalSubset; int hasInternalSubset; int isStandalone; int externalSubset; int internalSubset; int * endElement; int * startElement; int * serror; int endElementNs; int startElementNs; } ;
typedef TYPE_1__ xmlSAXHandler ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int * VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

int
FUNC_0(xmlSAXHandler *VAR_28, int VAR_29)
{
    if (VAR_28 == ((void*)0)) return(-1);
    if (VAR_29 == 2) {
 VAR_28->startElement = ((void*)0);
 VAR_28->endElement = ((void*)0);
 VAR_28->startElementNs = VAR_26;
 VAR_28->endElementNs = VAR_10;
 VAR_28->serror = ((void*)0);
 VAR_28->initialized = VAR_0;






    } else
        return(-1);
    VAR_28->internalSubset = VAR_17;
    VAR_28->externalSubset = VAR_12;
    VAR_28->isStandalone = VAR_18;
    VAR_28->hasInternalSubset = VAR_16;
    VAR_28->hasExternalSubset = VAR_15;
    VAR_28->resolveEntity = VAR_22;
    VAR_28->getEntity = VAR_13;
    VAR_28->getParameterEntity = VAR_14;
    VAR_28->entityDecl = VAR_11;
    VAR_28->attributeDecl = VAR_3;
    VAR_28->elementDecl = VAR_7;
    VAR_28->notationDecl = VAR_19;
    VAR_28->unparsedEntityDecl = VAR_27;
    VAR_28->setDocumentLocator = VAR_23;
    VAR_28->startDocument = VAR_24;
    VAR_28->endDocument = VAR_8;
    VAR_28->reference = VAR_21;
    VAR_28->characters = VAR_5;
    VAR_28->cdataBlock = VAR_4;
    VAR_28->ignorableWhitespace = VAR_5;
    VAR_28->processingInstruction = VAR_20;
    VAR_28->comment = VAR_6;
    VAR_28->warning = VAR_2;
    VAR_28->error = VAR_1;
    VAR_28->fatalError = VAR_1;

    return(0);
}
