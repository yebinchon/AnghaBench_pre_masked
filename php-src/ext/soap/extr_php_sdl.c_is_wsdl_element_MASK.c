
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* xmlNodePtr ;
typedef TYPE_4__* xmlAttrPtr ;
struct TYPE_10__ {TYPE_1__* children; } ;
struct TYPE_9__ {TYPE_2__* ns; int properties; } ;
struct TYPE_8__ {scalar_t__ href; } ;
struct TYPE_7__ {scalar_t__ content; } ;


 int VAR_0 ;
 char* VAR_1 ;
 TYPE_4__* FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(xmlNodePtr VAR_2)
{
 if (VAR_2->ns && FUNC_2((char*)VAR_2->ns->href, VAR_1) != 0) {
  xmlAttrPtr VAR_3;
  if ((VAR_3 = FUNC_0(VAR_2->properties, "required", VAR_1)) != ((void*)0) &&
       VAR_3->children && VAR_3->children->content &&
       (FUNC_2((char*)VAR_3->children->content, "1") == 0 ||
        FUNC_2((char*)VAR_3->children->content, "true") == 0)) {
   FUNC_1(VAR_0, "Parsing WSDL: Unknown required WSDL extension '%s'", VAR_2->ns->href);
  }
  return 0;
 }
 return 1;
}
