
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef TYPE_3__* xmlEntityPtr ;
typedef char xmlChar ;
struct TYPE_15__ {scalar_t__ etype; } ;
struct TYPE_14__ {scalar_t__ instate; int standalone; scalar_t__ hasExternalSubset; int hasPErefs; scalar_t__ valid; int userData; TYPE_1__* sax; int nbentities; } ;
struct TYPE_13__ {TYPE_3__* (* getParameterEntity ) (int ,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (TYPE_2__*,int ,char*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (TYPE_2__*,char const**) ;
 int FUNC_6 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_7 (TYPE_2__*,int ,char*,char*,int *) ;

__attribute__((used)) static xmlEntityPtr
FUNC_8(xmlParserCtxtPtr VAR_7, const xmlChar **VAR_8) {
    const xmlChar *VAR_9;
    xmlChar VAR_10;
    xmlChar *VAR_11;
    xmlEntityPtr VAR_12 = ((void*)0);

    if ((VAR_8 == ((void*)0)) || (*VAR_8 == ((void*)0))) return(((void*)0));
    VAR_9 = *VAR_8;
    VAR_10 = *VAR_9;
    if (VAR_10 != '%')
        return(((void*)0));
    VAR_9++;
    VAR_11 = FUNC_5(VAR_7, &VAR_9);
    if (VAR_11 == ((void*)0)) {
 FUNC_2(VAR_7, VAR_1,
         "xmlParseStringPEReference: no name\n");
 *VAR_8 = VAR_9;
 return(((void*)0));
    }
    VAR_10 = *VAR_9;
    if (VAR_10 != ';') {
 FUNC_1(VAR_7, VAR_0, ((void*)0));
 FUNC_4(VAR_11);
 *VAR_8 = VAR_9;
 return(((void*)0));
    }
    VAR_9++;




    VAR_7->nbentities++;




    if ((VAR_7->sax != ((void*)0)) &&
 (VAR_7->sax->getParameterEntity != ((void*)0)))
 VAR_12 = VAR_7->sax->getParameterEntity(VAR_7->userData, VAR_11);
    if (VAR_7->instate == VAR_5) {
 FUNC_4(VAR_11);
 *VAR_8 = VAR_9;
 return(((void*)0));
    }
    if (VAR_12 == ((void*)0)) {
 if ((VAR_7->standalone == 1) ||
     ((VAR_7->hasExternalSubset == 0) && (VAR_7->hasPErefs == 0))) {
     FUNC_3(VAR_7, VAR_2,
   "PEReference: %%%s; not found\n", VAR_11);
 } else {







     FUNC_7(VAR_7, VAR_6,
     "PEReference: %%%s; not found\n",
     VAR_11, ((void*)0));
     VAR_7->valid = 0;
 }
 FUNC_6(VAR_7, 0, ((void*)0), 0);
    } else {



 if ((VAR_12->etype != VAR_4) &&
     (VAR_12->etype != VAR_3)) {
     FUNC_7(VAR_7, VAR_6,
     "%%%s; is not a parameter entity\n",
     VAR_11, ((void*)0));
 }
    }
    VAR_7->hasPErefs = 1;
    FUNC_4(VAR_11);
    *VAR_8 = VAR_9;
    return(VAR_12);
}
