
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* xsltFormatPtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_7__ {int width; int separator; int token; } ;
struct TYPE_6__ {size_t nTokens; int * end; TYPE_1__* tokens; int * start; } ;
struct TYPE_5__ {int width; int token; int * separator; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 size_t VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_5 (int *,scalar_t__ const*,int*) ;
 void* FUNC_6 (scalar_t__ const*,int) ;

__attribute__((used)) static void
FUNC_7(const xmlChar *VAR_4,
    xsltFormatPtr VAR_5)
{
    int VAR_6 = 0;
    int VAR_7;
    int VAR_8;
    int VAR_9;

    VAR_3.token = VAR_1;
    VAR_3.width = 1;
    VAR_3.separator = FUNC_0(VAR_0);


    VAR_5->start = ((void*)0);
    VAR_5->tokens[0].separator = ((void*)0);
    VAR_5->end = ((void*)0);





    while (! (FUNC_4(VAR_8=FUNC_5(((void*)0), VAR_4+VAR_6, &VAR_9)) ||
       FUNC_1(VAR_8)) ) {
 if (VAR_4[VAR_6] == 0)
     break;
 VAR_6 += VAR_9;
    }
    if (VAR_6 > 0)
 VAR_5->start = FUNC_6(VAR_4, VAR_6);


    for (VAR_5->nTokens = 0; VAR_5->nTokens < VAR_2;
  VAR_5->nTokens++) {
 if (VAR_4[VAR_6] == 0)
     break;





 if (VAR_5->nTokens > 0) {
     VAR_5->tokens[VAR_5->nTokens].separator = VAR_5->end;
     VAR_5->end = ((void*)0);
 }

 VAR_8 = FUNC_5(((void*)0), VAR_4+VAR_6, &VAR_9);
 if (FUNC_2(VAR_8) ||
   FUNC_3(VAR_8)) {
     VAR_5->tokens[VAR_5->nTokens].width = 1;
     while (FUNC_3(VAR_8)) {
  VAR_5->tokens[VAR_5->nTokens].width++;
  VAR_6 += VAR_9;
  VAR_8 = FUNC_5(((void*)0), VAR_4+VAR_6, &VAR_9);
     }
     if (FUNC_2(VAR_8)) {
  VAR_5->tokens[VAR_5->nTokens].token = VAR_8 - 1;
  VAR_6 += VAR_9;
  VAR_8 = FUNC_5(((void*)0), VAR_4+VAR_6, &VAR_9);
     }
 } else if ( (VAR_8 == (xmlChar)'A') ||
      (VAR_8 == (xmlChar)'a') ||
      (VAR_8 == (xmlChar)'I') ||
      (VAR_8 == (xmlChar)'i') ) {
     VAR_5->tokens[VAR_5->nTokens].token = VAR_8;
     VAR_6 += VAR_9;
     VAR_8 = FUNC_5(((void*)0), VAR_4+VAR_6, &VAR_9);
 } else {






     VAR_5->tokens[VAR_5->nTokens].token = (xmlChar)'0';
     VAR_5->tokens[VAR_5->nTokens].width = 1;
 }
 while (FUNC_4(VAR_8) || FUNC_1(VAR_8)) {
     VAR_6 += VAR_9;
     VAR_8 = FUNC_5(((void*)0), VAR_4+VAR_6, &VAR_9);
 }




 VAR_7 = VAR_6;
 while (! (FUNC_4(VAR_8) || FUNC_1(VAR_8))) {
     if (VAR_8 == 0)
  break;
     VAR_6 += VAR_9;
     VAR_8 = FUNC_5(((void*)0), VAR_4+VAR_6, &VAR_9);
 }
 if (VAR_6 > VAR_7)
     VAR_5->end = FUNC_6(&VAR_4[VAR_7], VAR_6 - VAR_7);
    }
}
