
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* xmlAttrPtr ;
typedef TYPE_4__* sdlRestrictionIntPtr ;
typedef int sdlRestrictionInt ;
struct TYPE_13__ {int fixed; int value; } ;
struct TYPE_12__ {TYPE_1__* children; } ;
struct TYPE_11__ {int properties; } ;
struct TYPE_10__ {scalar_t__ content; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6(xmlNodePtr VAR_3, sdlRestrictionIntPtr *VAR_4)
{
 xmlAttrPtr VAR_5, VAR_6;

 if ((*VAR_4) == ((void*)0)) {
  (*VAR_4) = FUNC_1(sizeof(sdlRestrictionInt));
 }
 FUNC_3((*VAR_4), 0, sizeof(sdlRestrictionInt));

 VAR_5 = FUNC_2(VAR_3->properties, "fixed");
 (*VAR_4)->fixed = VAR_1;
 if (VAR_5 != ((void*)0)) {
  if (!FUNC_5((char*)VAR_5->children->content, "true", sizeof("true")) ||
   !FUNC_5((char*)VAR_5->children->content, "1", sizeof("1")))
   (*VAR_4)->fixed = VAR_2;
 }

 VAR_6 = FUNC_2(VAR_3->properties, "value");
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_0, "Parsing Schema: missing restriction value");
 }

 (*VAR_4)->value = FUNC_0((char*)VAR_6->children->content);

 return VAR_2;
}
