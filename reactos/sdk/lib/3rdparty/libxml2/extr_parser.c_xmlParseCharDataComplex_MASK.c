
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_8__ {int* space; scalar_t__ instate; TYPE_1__* sax; int userData; int disableSAX; } ;
struct TYPE_7__ {int (* ignorableWhitespace ) (int ,scalar_t__*,int) ;int (* characters ) (int ,scalar_t__*,int) ;} ;


 int FUNC_0 (int,scalar_t__*,int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 char FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__*,int,int ) ;
 int FUNC_6 (int ,scalar_t__*,int) ;
 int FUNC_7 (int ,scalar_t__*,int) ;
 int FUNC_8 (int ,scalar_t__*,int) ;
 int FUNC_9 (int ,scalar_t__*,int) ;
 int FUNC_10 (TYPE_2__*,int ,int *) ;
 int FUNC_11 (TYPE_2__*,int ,char*,int) ;

__attribute__((used)) static void
FUNC_12(xmlParserCtxtPtr VAR_7, int VAR_8) {
    xmlChar VAR_9[VAR_4 + 5];
    int VAR_10 = 0;
    int VAR_11, VAR_12;
    int VAR_13 = 0;

    VAR_1;
    VAR_0;
    VAR_11 = FUNC_1(VAR_12);
    while ((VAR_11 != '<') &&
           (VAR_11 != '&') &&
    (FUNC_2(VAR_11))) {
 if ((VAR_11 == ']') && (FUNC_4(1) == ']') &&
     (FUNC_4(2) == '>')) {
     if (VAR_8) break;
     else {
  FUNC_10(VAR_7, VAR_3, ((void*)0));
     }
 }
 FUNC_0(VAR_12,VAR_9,VAR_10,VAR_11);
 if (VAR_10 >= VAR_4) {
     VAR_9[VAR_10] = 0;




     if ((VAR_7->sax != ((void*)0)) && (!VAR_7->disableSAX)) {
  if (FUNC_5(VAR_7, VAR_9, VAR_10, 0)) {
      if (VAR_7->sax->ignorableWhitespace != ((void*)0))
   VAR_7->sax->ignorableWhitespace(VAR_7->userData,
                                  VAR_9, VAR_10);
  } else {
      if (VAR_7->sax->characters != ((void*)0))
   VAR_7->sax->characters(VAR_7->userData, VAR_9, VAR_10);
      if ((VAR_7->sax->characters !=
           VAR_7->sax->ignorableWhitespace) &&
   (*VAR_7->space == -1))
   *VAR_7->space = -2;
  }
     }
     VAR_10 = 0;

            if (VAR_7->instate != VAR_5)
                return;
 }
 VAR_13++;
 if (VAR_13 > 50) {
     VAR_0;
     VAR_13 = 0;
            if (VAR_7->instate == VAR_6)
  return;
 }
 FUNC_3(VAR_12);
 VAR_11 = FUNC_1(VAR_12);
    }
    if (VAR_10 != 0) {
        VAR_9[VAR_10] = 0;



 if ((VAR_7->sax != ((void*)0)) && (!VAR_7->disableSAX)) {
     if (FUNC_5(VAR_7, VAR_9, VAR_10, 0)) {
  if (VAR_7->sax->ignorableWhitespace != ((void*)0))
      VAR_7->sax->ignorableWhitespace(VAR_7->userData, VAR_9, VAR_10);
     } else {
  if (VAR_7->sax->characters != ((void*)0))
      VAR_7->sax->characters(VAR_7->userData, VAR_9, VAR_10);
  if ((VAR_7->sax->characters != VAR_7->sax->ignorableWhitespace) &&
      (*VAR_7->space == -1))
      *VAR_7->space = -2;
     }
 }
    }
    if ((VAR_11 != 0) && (!FUNC_2(VAR_11))) {

        FUNC_11(VAR_7, VAR_2,
                          "PCDATA invalid Char value %d\n",
                   VAR_11);
 FUNC_3(VAR_12);
    }
}
