
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef TYPE_2__* xmlEntityPtr ;
typedef int xmlChar ;
struct TYPE_19__ {int checked; scalar_t__ etype; int* content; int* name; } ;
struct TYPE_18__ {int depth; int options; int nbentities; scalar_t__ validate; } ;


 int FUNC_0 (int,int*,size_t,int) ;
 int FUNC_1 (int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int*,size_t) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int ,char*,int const*) ;
 int VAR_11 ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_9 (size_t) ;
 int FUNC_10 (TYPE_1__*,int const**) ;
 TYPE_2__* FUNC_11 (TYPE_1__*,int const**) ;
 TYPE_2__* FUNC_12 (TYPE_1__*,int const**) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_13 (TYPE_1__*,size_t,TYPE_2__*,int ) ;
 int* FUNC_14 (TYPE_1__*,int*,int,int ,int ,int ) ;
 int FUNC_15 (int*) ;
 int FUNC_16 (TYPE_1__*,int ,char*,int*,int *) ;

xmlChar *
FUNC_17(xmlParserCtxtPtr VAR_13, const xmlChar *VAR_14, int VAR_15,
        int VAR_16, xmlChar VAR_17, xmlChar VAR_18, xmlChar VAR_19) {
    xmlChar *VAR_20 = ((void*)0);
    size_t VAR_21 = 0;
    size_t VAR_22 = 0;

    xmlChar *VAR_23 = ((void*)0);
    xmlChar *VAR_24 = ((void*)0);
    const xmlChar *VAR_25;
    xmlEntityPtr VAR_26;
    int VAR_27,VAR_28;

    if ((VAR_13 == ((void*)0)) || (VAR_14 == ((void*)0)) || (VAR_15 < 0))
 return(((void*)0));
    VAR_25 = VAR_14 + VAR_15;

    if (((VAR_13->depth > 40) &&
         ((VAR_13->options & VAR_7) == 0)) ||
 (VAR_13->depth > 1024)) {
 FUNC_4(VAR_13, VAR_0, ((void*)0));
 return(((void*)0));
    }




    VAR_21 = VAR_4;
    VAR_20 = (xmlChar *) FUNC_9(VAR_21);
    if (VAR_20 == ((void*)0)) goto mem_error;





    if (VAR_14 < VAR_25)
 VAR_27 = FUNC_1(VAR_14, VAR_28);
    else
        VAR_27 = 0;
    while ((VAR_27 != 0) && (VAR_27 != VAR_17) &&
    (VAR_27 != VAR_18) && (VAR_27 != VAR_19)) {

 if (VAR_27 == 0) break;
        if ((VAR_27 == '&') && (VAR_14[1] == '#')) {
     int VAR_29 = FUNC_10(VAR_13, &VAR_14);
     if (VAR_29 == 0)
                goto int_error;
     FUNC_0(0,VAR_20,VAR_22,VAR_29);
     if (VAR_22 + VAR_5 > VAR_21) {
         FUNC_2(VAR_20, VAR_5);
     }
 } else if ((VAR_27 == '&') && (VAR_16 & VAR_10)) {
     if (VAR_12)
  FUNC_7(VAR_11,
   "String decoding Entity Reference: %.30s\n",
   VAR_14);
     VAR_26 = FUNC_11(VAR_13, &VAR_14);
     FUNC_13(VAR_13, 0, VAR_26, 0);
     if (VAR_26 != ((void*)0))
         VAR_13->nbentities += VAR_26->checked / 2;
     if ((VAR_26 != ((void*)0)) &&
  (VAR_26->etype == VAR_3)) {
  if (VAR_26->content != ((void*)0)) {
      FUNC_0(0,VAR_20,VAR_22,VAR_26->content[0]);
      if (VAR_22 + VAR_5 > VAR_21) {
   FUNC_2(VAR_20, VAR_5);
      }
  } else {
      FUNC_5(VAR_13, VAR_2,
       "predefined entity has no content\n");
                    goto int_error;
  }
     } else if ((VAR_26 != ((void*)0)) && (VAR_26->content != ((void*)0))) {
  VAR_13->depth++;
  VAR_24 = FUNC_14(VAR_13, VAR_26->content, VAR_16,
                         0, 0, 0);
  VAR_13->depth--;
  if (VAR_24 == ((void*)0))
                    goto int_error;

                VAR_23 = VAR_24;
                while (*VAR_23 != 0) {
                    VAR_20[VAR_22++] = *VAR_23++;
                    if (VAR_22 + VAR_5 > VAR_21) {
                        if (FUNC_13(VAR_13, VAR_22, VAR_26, 0))
                            goto int_error;
                        FUNC_2(VAR_20, VAR_5);
                    }
                }
                FUNC_6(VAR_24);
                VAR_24 = ((void*)0);
     } else if (VAR_26 != ((void*)0)) {
  int VAR_30 = FUNC_15(VAR_26->name);
  const xmlChar *VAR_31 = VAR_26->name;

  VAR_20[VAR_22++] = '&';
  if (VAR_22 + VAR_30 + VAR_5 > VAR_21) {
      FUNC_2(VAR_20, VAR_30 + VAR_5);
  }
  for (;VAR_30 > 0;VAR_30--)
      VAR_20[VAR_22++] = *VAR_31++;
  VAR_20[VAR_22++] = ';';
     }
 } else if (VAR_27 == '%' && (VAR_16 & VAR_9)) {
     if (VAR_12)
  FUNC_7(VAR_11,
   "String decoding PE Reference: %.30s\n", VAR_14);
     VAR_26 = FUNC_12(VAR_13, &VAR_14);
     FUNC_13(VAR_13, 0, VAR_26, 0);
     if (VAR_26 != ((void*)0))
         VAR_13->nbentities += VAR_26->checked / 2;
     if (VAR_26 != ((void*)0)) {
                if (VAR_26->content == ((void*)0)) {






      if (((VAR_13->options & VAR_8) != 0) ||
   ((VAR_13->options & VAR_6) != 0) ||
   (VAR_13->validate != 0)) {
   FUNC_8(VAR_13, VAR_26);
      } else {
   FUNC_16(VAR_13, VAR_1,
    "not validating will not read content for PE entity %s\n",
                        VAR_26->name, ((void*)0));
      }
  }
  VAR_13->depth++;
  VAR_24 = FUNC_14(VAR_13, VAR_26->content, VAR_16,
                         0, 0, 0);
  VAR_13->depth--;
  if (VAR_24 == ((void*)0))
                    goto int_error;
                VAR_23 = VAR_24;
                while (*VAR_23 != 0) {
                    VAR_20[VAR_22++] = *VAR_23++;
                    if (VAR_22 + VAR_5 > VAR_21) {
                        if (FUNC_13(VAR_13, VAR_22, VAR_26, 0))
                            goto int_error;
                        FUNC_2(VAR_20, VAR_5);
                    }
                }
                FUNC_6(VAR_24);
                VAR_24 = ((void*)0);
     }
 } else {
     FUNC_0(VAR_28,VAR_20,VAR_22,VAR_27);
     VAR_14 += VAR_28;
     if (VAR_22 + VAR_5 > VAR_21) {
         FUNC_2(VAR_20, VAR_5);
     }
 }
 if (VAR_14 < VAR_25)
     VAR_27 = FUNC_1(VAR_14, VAR_28);
 else
     VAR_27 = 0;
    }
    VAR_20[VAR_22] = 0;
    return(VAR_20);

mem_error:
    FUNC_3(VAR_13, ((void*)0));
int_error:
    if (VAR_24 != ((void*)0))
        FUNC_6(VAR_24);
    if (VAR_20 != ((void*)0))
        FUNC_6(VAR_20);
    return(((void*)0));
}
