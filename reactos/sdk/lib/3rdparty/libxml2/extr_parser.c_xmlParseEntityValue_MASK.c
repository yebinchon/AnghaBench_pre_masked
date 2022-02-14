
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ xmlParserInputPtr ;
typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_8__ {scalar_t__ instate; scalar_t__ input; int inSubset; int inputNr; int depth; } ;


 int FUNC_0 (int,int*,int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int ,char*,int) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (int) ;
 int* FUNC_9 (TYPE_1__*,int const**) ;
 scalar_t__ FUNC_10 (int*,int) ;
 int* FUNC_11 (TYPE_1__*,int*,int ,int ,int ,int ) ;

xmlChar *
FUNC_12(xmlParserCtxtPtr VAR_11, xmlChar **VAR_12) {
    xmlChar *VAR_13 = ((void*)0);
    int VAR_14 = 0;
    int VAR_15 = VAR_7;
    int VAR_16, VAR_17;
    xmlChar VAR_18;
    xmlChar *VAR_19 = ((void*)0);
    const xmlChar *VAR_20 = ((void*)0);
    xmlParserInputPtr VAR_21;

    if (VAR_2 == '"') VAR_18 = '"';
    else if (VAR_2 == '\'') VAR_18 = '\'';
    else {
 FUNC_5(VAR_11, VAR_5, ((void*)0));
 return(((void*)0));
    }
    VAR_13 = (xmlChar *) FUNC_8(VAR_15 * sizeof(xmlChar));
    if (VAR_13 == ((void*)0)) {
 FUNC_4(VAR_11, ((void*)0));
 return(((void*)0));
    }





    VAR_11->instate = VAR_8;
    VAR_21 = VAR_11->input;
    VAR_0;
    if (VAR_11->instate == VAR_9)
        goto error;
    VAR_1;
    VAR_16 = FUNC_1(VAR_17);
    while (((FUNC_2(VAR_16)) && ((VAR_16 != VAR_18) ||
     (VAR_11->input != VAR_21))) && (VAR_11->instate != VAR_9)) {
 if (VAR_14 + 5 >= VAR_15) {
     xmlChar *VAR_22;

     VAR_15 *= 2;
     VAR_22 = (xmlChar *) FUNC_10(VAR_13, VAR_15 * sizeof(xmlChar));
     if (VAR_22 == ((void*)0)) {
  FUNC_4(VAR_11, ((void*)0));
                goto error;
     }
     VAR_13 = VAR_22;
 }
 FUNC_0(VAR_17,VAR_13,VAR_14,VAR_16);
 FUNC_3(VAR_17);

 VAR_0;
 VAR_16 = FUNC_1(VAR_17);
 if (VAR_16 == 0) {
     VAR_0;
     VAR_16 = FUNC_1(VAR_17);
 }
    }
    VAR_13[VAR_14] = 0;
    if (VAR_11->instate == VAR_9)
        goto error;
    if (VAR_16 != VAR_18) {
        FUNC_5(VAR_11, VAR_4, ((void*)0));
        goto error;
    }
    VAR_1;






    VAR_20 = VAR_13;
    while (*VAR_20 != 0) {
 if ((*VAR_20 == '%') || ((*VAR_20 == '&') && (VAR_20[1] != '#'))) {
     xmlChar *VAR_23;
     xmlChar VAR_24 = *VAR_20;
            int VAR_25 = 0;

     VAR_20++;
     VAR_23 = FUNC_9(VAR_11, &VAR_20);
            if (VAR_23 != ((void*)0)) {
                VAR_25 = 1;
                FUNC_7(VAR_23);
            }
            if ((VAR_25 == 0) || (*VAR_20 != ';')) {
  FUNC_6(VAR_11, VAR_3,
     "EntityValue: '%c' forbidden except for entities references\n",
                           VAR_24);
                goto error;
     }
     if ((VAR_24 == '%') && (VAR_11->inSubset == 1) &&
  (VAR_11->inputNr == 1)) {
  FUNC_5(VAR_11, VAR_6, ((void*)0));
                goto error;
     }
     if (*VAR_20 == 0)
         break;
 }
 VAR_20++;
    }
    ++VAR_11->depth;
    VAR_19 = FUNC_11(VAR_11, VAR_13, VAR_10,
                                  0, 0, 0);
    --VAR_11->depth;
    if (VAR_12 != ((void*)0)) {
        *VAR_12 = VAR_13;
        VAR_13 = ((void*)0);
    }

error:
    if (VAR_13 != ((void*)0))
        FUNC_7(VAR_13);
    return(VAR_19);
}
