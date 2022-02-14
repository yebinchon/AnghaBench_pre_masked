
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* xsltNumberDataPtr ;
typedef TYPE_2__* xsltFormatTokenPtr ;
typedef TYPE_3__* xsltFormatPtr ;
typedef int xmlBufferPtr ;
struct TYPE_11__ {int nTokens; int * end; TYPE_2__* tokens; int * start; } ;
struct TYPE_10__ {int width; int token; int * separator; } ;
struct TYPE_9__ {int groupingCharacterLen; int groupingCharacter; int digitsPerGroup; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 double FUNC_1 (double) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (double) ;
 int FUNC_5 (double) ;
 int FUNC_6 (TYPE_1__*,int ,double,int ) ;
 int FUNC_7 (int ,double,int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,double,int ) ;
 int FUNC_9 (int *,int *,int *,char*) ;

__attribute__((used)) static void
FUNC_10(xsltNumberDataPtr VAR_4,
         double *VAR_5,
         int VAR_6,
         xsltFormatPtr VAR_7,
         xmlBufferPtr VAR_8)
{
    int VAR_9 = 0;
    double VAR_10;
    xsltFormatTokenPtr VAR_11;




    if (VAR_7->start != ((void*)0))
  FUNC_3(VAR_8, VAR_7->start);

    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {

 VAR_10 = VAR_5[(VAR_6 - 1) - VAR_9];

        VAR_10 = FUNC_1(VAR_10 + 0.5);
        if (VAR_10 < 0.0) {
            FUNC_9(((void*)0), ((void*)0), ((void*)0),
                    "xsl-number : negative value\n");

            VAR_10 = 0.0;
        }
 if (VAR_9 < VAR_7->nTokens) {




   VAR_11 = &(VAR_7->tokens[VAR_9]);
 } else if (VAR_7->nTokens > 0) {





   VAR_11 = &(VAR_7->tokens[VAR_7->nTokens - 1]);
 } else {




   VAR_11 = &VAR_3;
 }


 if (VAR_9 > 0) {
     if (VAR_11->separator != ((void*)0))
  FUNC_3(VAR_8, VAR_11->separator);
     else
  FUNC_2(VAR_8, VAR_0);
 }

 switch (FUNC_4(VAR_10)) {
 case -1:
     FUNC_2(VAR_8, "-Infinity");
     break;
 case 1:
     FUNC_2(VAR_8, "Infinity");
     break;
 default:
     if (FUNC_5(VAR_10)) {
  FUNC_2(VAR_8, "NaN");
     } else {

  switch (VAR_11->token) {
  case 'A':
      FUNC_6(VAR_4, VAR_8, VAR_10, VAR_2);
      break;
  case 'a':
      FUNC_6(VAR_4, VAR_8, VAR_10, VAR_1);
      break;
  case 'I':
      FUNC_8(VAR_4, VAR_8, VAR_10, VAR_2);
      break;
  case 'i':
      FUNC_8(VAR_4, VAR_8, VAR_10, VAR_1);
      break;
  default:
      if (FUNC_0(VAR_11->token)) {
   FUNC_7(VAR_8,
      VAR_10,
      VAR_11->token,
      VAR_11->width,
      VAR_4->digitsPerGroup,
      VAR_4->groupingCharacter,
      VAR_4->groupingCharacterLen);
      }
      break;
  }
     }

 }
    }




    if (VAR_7->end != ((void*)0))
  FUNC_3(VAR_8, VAR_7->end);

}
