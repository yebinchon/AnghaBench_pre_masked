
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_6__ {int dict; int errors; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int const*,int) ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 int * FUNC_2 (TYPE_1__*,int ,int const*,int ) ;
 int * FUNC_3 (TYPE_1__*,int ,int const**) ;
 int FUNC_4 (int *,TYPE_1__*,int ,char*,int const*,...) ;

__attribute__((used)) static void
FUNC_5(xsltStylesheetPtr VAR_1, xmlNodePtr VAR_2,
       const xmlChar *VAR_3,
       int VAR_4,
       int *VAR_5, const xmlChar **VAR_6,
       const xmlChar** VAR_7)
{
    const xmlChar *VAR_8;

    if (VAR_6)
 *VAR_6 = ((void*)0);
    if (VAR_7)
 *VAR_7 = ((void*)0);
    if (VAR_5)
 *VAR_5 = 0;

    VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_0);
    if (VAR_8 == ((void*)0)) {
 if (VAR_4) {
     FUNC_4(((void*)0), VAR_1, VAR_2,
  "The attribute '%s' is missing.\n", VAR_3);
     VAR_1->errors++;
     return;
 }
    } else {
        const xmlChar *VAR_9;

 if (FUNC_1(VAR_8, 0)) {
     FUNC_4(((void*)0), VAR_1, VAR_2,
  "The value '%s' of the attribute "
  "'%s' is not a valid QName.\n", VAR_8, VAR_3);
     VAR_1->errors++;
     return;
 } else {



     VAR_9 = FUNC_3(VAR_1, VAR_2, &VAR_8);
     if (VAR_8 == ((void*)0)) {
  VAR_1->errors++;
     } else {
  if (VAR_7)
      *VAR_7 = VAR_8;
  if (VAR_5)
      *VAR_5 = 1;
  if (VAR_9 != ((void*)0)) {





      if (VAR_6)
   *VAR_6 = FUNC_0(VAR_1->dict, VAR_9, -1);

  }
     }
 }
    }
    return;
}
