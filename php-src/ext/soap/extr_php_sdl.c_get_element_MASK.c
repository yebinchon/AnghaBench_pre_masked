
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef char xmlChar ;
typedef int * sdlTypePtr ;
typedef TYPE_3__* sdlPtr ;
struct TYPE_10__ {scalar_t__ elements; } ;
struct TYPE_9__ {int doc; } ;
struct TYPE_8__ {char const* href; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char const*,char**,char**) ;
 int FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 (int ,TYPE_2__*,int ) ;
 int FUNC_7 (char const*) ;
 int * FUNC_8 (scalar_t__,char*,int) ;

__attribute__((used)) static sdlTypePtr FUNC_9(sdlPtr VAR_0, xmlNodePtr VAR_1, const xmlChar *VAR_2)
{
 sdlTypePtr VAR_3 = ((void*)0);

 if (VAR_0->elements) {
  xmlNsPtr VAR_4;
  char *VAR_5, *VAR_6;
  sdlTypePtr VAR_7;

  FUNC_4(VAR_2, &VAR_6, &VAR_5);
  VAR_4 = FUNC_6(VAR_1->doc, VAR_1, FUNC_0(VAR_5));
  if (VAR_4 != ((void*)0)) {
   int VAR_8 = FUNC_7(VAR_4->href);
   int VAR_9 = FUNC_5(VAR_6);
   int VAR_10 = VAR_8 + VAR_9 + 1;
   char *VAR_11 = FUNC_2(VAR_10 + 1);

   FUNC_3(VAR_11, VAR_4->href, VAR_8);
   VAR_11[VAR_8] = ':';
   FUNC_3(VAR_11+VAR_8+1, VAR_6, VAR_9);
   VAR_11[VAR_10] = '\0';

   if ((VAR_7 = FUNC_8(VAR_0->elements, VAR_11, VAR_10)) != ((void*)0)) {
    VAR_3 = VAR_7;
   } else if ((VAR_7 = FUNC_8(VAR_0->elements, (char*)VAR_2, VAR_9)) != ((void*)0)) {
    VAR_3 = VAR_7;
   }
   FUNC_1(VAR_11);
  } else {
   if ((VAR_7 = FUNC_8(VAR_0->elements, (char*)VAR_2, FUNC_7(VAR_2))) != ((void*)0)) {
    VAR_3 = VAR_7;
   }
  }

  FUNC_1(VAR_6);
  if (VAR_5) {FUNC_1(VAR_5);}
 }
 return VAR_3;
}
