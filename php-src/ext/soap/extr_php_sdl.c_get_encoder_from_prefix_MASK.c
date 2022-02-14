
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef int xmlChar ;
typedef int sdlPtr ;
typedef int * encodePtr ;
struct TYPE_7__ {int doc; } ;
struct TYPE_6__ {scalar_t__ href; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,char*,char*) ;
 int * FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int const*,char**,char**) ;
 int FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 (int ,TYPE_2__*,int ) ;
 int FUNC_7 (int const*) ;

encodePtr FUNC_8(sdlPtr VAR_0, xmlNodePtr VAR_1, const xmlChar *VAR_2)
{
 encodePtr VAR_3 = ((void*)0);
 xmlNsPtr VAR_4;
 char *VAR_5, *VAR_6;

 FUNC_4(VAR_2, &VAR_6, &VAR_5);
 VAR_4 = FUNC_6(VAR_1->doc, VAR_1, FUNC_0(VAR_5));
 if (VAR_4 != ((void*)0)) {
  VAR_3 = FUNC_2(VAR_0, (char*)VAR_4->href, VAR_6);
  if (VAR_3 == ((void*)0)) {
   VAR_3 = FUNC_3(VAR_0, VAR_6, FUNC_5(VAR_6));
  }
 } else {
  VAR_3 = FUNC_3(VAR_0, (char*)VAR_2, FUNC_7(VAR_2));
 }
 FUNC_1(VAR_6);
 if (VAR_5) {FUNC_1(VAR_5);}
 return VAR_3;
}
