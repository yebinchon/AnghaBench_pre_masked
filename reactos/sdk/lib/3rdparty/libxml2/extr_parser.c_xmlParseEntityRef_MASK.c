
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef TYPE_3__* xmlEntityPtr ;
typedef int xmlChar ;
struct TYPE_21__ {int etype; int checked; int * content; } ;
struct TYPE_20__ {scalar_t__ instate; int options; int wellFormed; int standalone; scalar_t__ hasExternalSubset; scalar_t__ hasPErefs; scalar_t__ inSubset; scalar_t__ valid; struct TYPE_20__* userData; TYPE_1__* sax; int nbentities; } ;
struct TYPE_19__ {int (* reference ) (TYPE_2__*,int const*) ;TYPE_3__* (* getEntity ) (TYPE_2__*,int const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (TYPE_2__*,int const*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int const*) ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int FUNC_5 (TYPE_2__*,int ,char*,int const*) ;
 TYPE_3__* FUNC_6 (int const*) ;
 int * FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_9 (TYPE_2__*,int const*) ;
 scalar_t__ FUNC_10 (int *,char) ;

xmlEntityPtr
FUNC_11(xmlParserCtxtPtr VAR_17) {
    const xmlChar *VAR_18;
    xmlEntityPtr VAR_19 = ((void*)0);

    VAR_0;
    if (VAR_17->instate == VAR_14)
        return(((void*)0));

    if (VAR_2 != '&')
        return(((void*)0));
    VAR_1;
    VAR_18 = FUNC_7(VAR_17);
    if (VAR_18 == ((void*)0)) {
 FUNC_4(VAR_17, VAR_7,
         "xmlParseEntityRef: no name\n");
        return(((void*)0));
    }
    if (VAR_2 != ';') {
 FUNC_3(VAR_17, VAR_3, ((void*)0));
 return(((void*)0));
    }
    VAR_1;




    if ((VAR_17->options & VAR_15) == 0) {
        VAR_19 = FUNC_6(VAR_18);
        if (VAR_19 != ((void*)0))
            return(VAR_19);
    }




    VAR_17->nbentities++;





    if (VAR_17->sax != ((void*)0)) {
 if (VAR_17->sax->getEntity != ((void*)0))
     VAR_19 = VAR_17->sax->getEntity(VAR_17->userData, VAR_18);
 if ((VAR_17->wellFormed == 1 ) && (VAR_19 == ((void*)0)) &&
     (VAR_17->options & VAR_15))
     VAR_19 = FUNC_6(VAR_18);
 if ((VAR_17->wellFormed == 1 ) && (VAR_19 == ((void*)0)) &&
     (VAR_17->userData==VAR_17)) {
     VAR_19 = FUNC_9(VAR_17, VAR_18);
 }
    }
    if (VAR_17->instate == VAR_14)
 return(((void*)0));
    if (VAR_19 == ((void*)0)) {
 if ((VAR_17->standalone == 1) ||
     ((VAR_17->hasExternalSubset == 0) &&
      (VAR_17->hasPErefs == 0))) {
     FUNC_5(VAR_17, VAR_8,
       "Entity '%s' not defined\n", VAR_18);
 } else {
     FUNC_2(VAR_17, VAR_16,
       "Entity '%s' not defined\n", VAR_18);
     if ((VAR_17->inSubset == 0) &&
  (VAR_17->sax != ((void*)0)) &&
  (VAR_17->sax->reference != ((void*)0))) {
  VAR_17->sax->reference(VAR_17->userData, VAR_18);
     }
 }
 FUNC_8(VAR_17, 0, VAR_19, 0);
 VAR_17->valid = 0;
    }






    else if (VAR_19->etype == VAR_11) {
 FUNC_5(VAR_17, VAR_9,
   "Entity reference to unparsed entity %s\n", VAR_18);
    }






    else if ((VAR_17->instate == VAR_13) &&
      (VAR_19->etype == VAR_10)) {
 FUNC_5(VAR_17, VAR_4,
      "Attribute references external entity '%s'\n", VAR_18);
    }






    else if ((VAR_17->instate == VAR_13) &&
      (VAR_19 != ((void*)0)) &&
      (VAR_19->etype != VAR_12)) {
 if (((VAR_19->checked & 1) || (VAR_19->checked == 0)) &&
      (VAR_19->content != ((void*)0)) && (FUNC_10(VAR_19->content, '<'))) {
     FUNC_5(VAR_17, VAR_6,
 "'<' in entity '%s' is not allowed in attributes values\n", VAR_18);
        }
    }




    else {
 switch (VAR_19->etype) {
     case 128:
     case 129:
     FUNC_5(VAR_17, VAR_5,
      "Attempt to reference the parameter entity '%s'\n",
         VAR_18);
     break;
     default:
     break;
 }
    }







    return(VAR_19);
}
