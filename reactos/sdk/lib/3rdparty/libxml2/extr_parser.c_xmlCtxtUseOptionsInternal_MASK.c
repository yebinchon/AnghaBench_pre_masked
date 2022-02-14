
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_5__ {int * error; int * warning; } ;
struct TYPE_7__ {int recovery; int options; int replaceEntities; int pedantic; int keepBlanks; int validate; int dictNames; int linenumbers; int * dict; TYPE_2__* sax; TYPE_1__ vctxt; int loadsubset; int * encoding; } ;
struct TYPE_6__ {int initialized; int * cdataBlock; int * endElementNs; int * startElementNs; int endElement; int startElement; int * fatalError; int * error; int * warning; int ignorableWhitespace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
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
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int * FUNC_2 (int const*) ;

__attribute__((used)) static int
FUNC_3(xmlParserCtxtPtr VAR_26, int VAR_27, const char *VAR_28)
{
    if (VAR_26 == ((void*)0))
        return(-1);
    if (VAR_28 != ((void*)0)) {
        if (VAR_26->encoding != ((void*)0))
     FUNC_1((xmlChar *) VAR_26->encoding);
        VAR_26->encoding = FUNC_2((const xmlChar *) VAR_28);
    }
    if (VAR_27 & VAR_21) {
        VAR_26->recovery = 1;
        VAR_27 -= VAR_21;
 VAR_26->options |= VAR_21;
    } else
        VAR_26->recovery = 0;
    if (VAR_27 & VAR_5) {
        VAR_26->loadsubset = VAR_1;
        VAR_27 -= VAR_5;
 VAR_26->options |= VAR_5;
    } else
        VAR_26->loadsubset = 0;
    if (VAR_27 & VAR_4) {
        VAR_26->loadsubset |= VAR_0;
        VAR_27 -= VAR_4;
 VAR_26->options |= VAR_4;
    }
    if (VAR_27 & VAR_13) {
        VAR_26->replaceEntities = 1;

        VAR_27 -= VAR_13;
 VAR_26->options |= VAR_13;
    } else
        VAR_26->replaceEntities = 0;
    if (VAR_27 & VAR_20) {
        VAR_26->pedantic = 1;
        VAR_27 -= VAR_20;
 VAR_26->options |= VAR_20;
    } else
        VAR_26->pedantic = 0;
    if (VAR_27 & VAR_10) {
        VAR_26->keepBlanks = 0;
        VAR_26->sax->ignorableWhitespace = VAR_24;
        VAR_27 -= VAR_10;
 VAR_26->options |= VAR_10;
    } else
        VAR_26->keepBlanks = 1;
    if (VAR_27 & VAR_6) {
        VAR_26->validate = 1;
        if (VAR_27 & VAR_16)
            VAR_26->vctxt.warning = ((void*)0);
        if (VAR_27 & VAR_14)
            VAR_26->vctxt.error = ((void*)0);
        VAR_27 -= VAR_6;
 VAR_26->options |= VAR_6;
    } else
        VAR_26->validate = 0;
    if (VAR_27 & VAR_16) {
        VAR_26->sax->warning = ((void*)0);
        VAR_27 -= VAR_16;
    }
    if (VAR_27 & VAR_14) {
        VAR_26->sax->error = ((void*)0);
        VAR_26->sax->fatalError = ((void*)0);
        VAR_27 -= VAR_14;
    }
    if (VAR_27 & VAR_12) {
        VAR_26->dictNames = 0;
        VAR_27 -= VAR_12;
 VAR_26->options |= VAR_12;
    } else {
        VAR_26->dictNames = 1;
    }
    if (VAR_27 & VAR_11) {
        VAR_26->sax->cdataBlock = ((void*)0);
        VAR_27 -= VAR_11;
 VAR_26->options |= VAR_11;
    }
    if (VAR_27 & VAR_17) {
 VAR_26->options |= VAR_17;
        VAR_27 -= VAR_17;
    }
    if (VAR_27 & VAR_15) {
 VAR_26->options |= VAR_15;
        VAR_27 -= VAR_15;
    }
    if (VAR_27 & VAR_3) {
 VAR_26->options |= VAR_3;
        VAR_27 -= VAR_3;
    }
    if (VAR_27 & VAR_18) {
 VAR_26->options |= VAR_18;
        VAR_27 -= VAR_18;
    }
    if (VAR_27 & VAR_9) {
 VAR_26->options |= VAR_9;
        VAR_27 -= VAR_9;
    }
    if (VAR_27 & VAR_7) {
 VAR_26->options |= VAR_7;
        VAR_27 -= VAR_7;
        if (VAR_26->dict != ((void*)0))
            FUNC_0(VAR_26->dict, 0);
    }
    if (VAR_27 & VAR_19) {
 VAR_26->options |= VAR_19;
        VAR_27 -= VAR_19;
    }
    if (VAR_27 & VAR_8) {
 VAR_26->options |= VAR_8;
        VAR_27 -= VAR_8;
    }
    if (VAR_27 & VAR_2) {
 VAR_26->options |= VAR_2;
        VAR_27 -= VAR_2;
    }
    VAR_26->linenumbers = 1;
    return (VAR_27);
}
