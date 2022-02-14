
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef TYPE_3__* xmlEntityPtr ;
typedef char xmlChar ;
struct TYPE_20__ {int etype; int * content; } ;
struct TYPE_19__ {int options; scalar_t__ instate; int standalone; scalar_t__ hasExternalSubset; scalar_t__ hasPErefs; struct TYPE_19__* userData; TYPE_1__* sax; int nbentities; } ;
struct TYPE_18__ {TYPE_3__* (* getEntity ) (TYPE_2__*,char*) ;} ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int ,char*,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*,int ,char*,char*) ;
 int FUNC_5 (char*) ;
 TYPE_3__* FUNC_6 (char*) ;
 char* FUNC_7 (TYPE_2__*,char const**) ;
 int FUNC_8 (TYPE_2__*,int ,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_9 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_10 (int *,char) ;

__attribute__((used)) static xmlEntityPtr
FUNC_11(xmlParserCtxtPtr VAR_14, const xmlChar ** VAR_15) {
    xmlChar *VAR_16;
    const xmlChar *VAR_17;
    xmlChar VAR_18;
    xmlEntityPtr VAR_19 = ((void*)0);

    if ((VAR_15 == ((void*)0)) || (*VAR_15 == ((void*)0)))
        return(((void*)0));
    VAR_17 = *VAR_15;
    VAR_18 = *VAR_17;
    if (VAR_18 != '&')
 return(((void*)0));

    VAR_17++;
    VAR_16 = FUNC_7(VAR_14, &VAR_17);
    if (VAR_16 == ((void*)0)) {
 FUNC_3(VAR_14, VAR_4,
         "xmlParseStringEntityRef: no name\n");
 *VAR_15 = VAR_17;
 return(((void*)0));
    }
    if (*VAR_17 != ';') {
 FUNC_2(VAR_14, VAR_0, ((void*)0));
        FUNC_5(VAR_16);
 *VAR_15 = VAR_17;
 return(((void*)0));
    }
    VAR_17++;





    if ((VAR_14->options & VAR_12) == 0) {
        VAR_19 = FUNC_6(VAR_16);
        if (VAR_19 != ((void*)0)) {
            FUNC_5(VAR_16);
            *VAR_15 = VAR_17;
            return(VAR_19);
        }
    }




    VAR_14->nbentities++;





    if (VAR_14->sax != ((void*)0)) {
 if (VAR_14->sax->getEntity != ((void*)0))
     VAR_19 = VAR_14->sax->getEntity(VAR_14->userData, VAR_16);
 if ((VAR_19 == ((void*)0)) && (VAR_14->options & VAR_12))
     VAR_19 = FUNC_6(VAR_16);
 if ((VAR_19 == ((void*)0)) && (VAR_14->userData==VAR_14)) {
     VAR_19 = FUNC_9(VAR_14, VAR_16);
 }
    }
    if (VAR_14->instate == VAR_11) {
 FUNC_5(VAR_16);
 return(((void*)0));
    }
    if (VAR_19 == ((void*)0)) {
 if ((VAR_14->standalone == 1) ||
     ((VAR_14->hasExternalSubset == 0) &&
      (VAR_14->hasPErefs == 0))) {
     FUNC_4(VAR_14, VAR_5,
       "Entity '%s' not defined\n", VAR_16);
 } else {
     FUNC_1(VAR_14, VAR_13,
     "Entity '%s' not defined\n",
     VAR_16);
 }
 FUNC_8(VAR_14, 0, VAR_19, 0);

    }






    else if (VAR_19->etype == VAR_8) {
 FUNC_4(VAR_14, VAR_6,
   "Entity reference to unparsed entity %s\n", VAR_16);
    }






    else if ((VAR_14->instate == VAR_10) &&
      (VAR_19->etype == VAR_7)) {
 FUNC_4(VAR_14, VAR_1,
  "Attribute references external entity '%s'\n", VAR_16);
    }






    else if ((VAR_14->instate == VAR_10) &&
      (VAR_19 != ((void*)0)) && (VAR_19->content != ((void*)0)) &&
      (VAR_19->etype != VAR_9) &&
      (FUNC_10(VAR_19->content, '<'))) {
 FUNC_4(VAR_14, VAR_3,
     "'<' in entity '%s' is not allowed in attributes values\n",
     VAR_16);
    }




    else {
 switch (VAR_19->etype) {
     case 128:
     case 129:
  FUNC_4(VAR_14, VAR_2,
      "Attempt to reference the parameter entity '%s'\n",
      VAR_16);
     break;
     default:
     break;
 }
    }
    FUNC_5(VAR_16);
    *VAR_15 = VAR_17;
    return(VAR_19);
}
