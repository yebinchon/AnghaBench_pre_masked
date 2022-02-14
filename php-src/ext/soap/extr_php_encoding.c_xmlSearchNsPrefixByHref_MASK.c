
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef int xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_8__ {scalar_t__ type; struct TYPE_8__* parent; TYPE_1__* ns; TYPE_1__* nsDef; } ;
struct TYPE_7__ {scalar_t__ prefix; scalar_t__ href; struct TYPE_7__* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int ,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int const*) ;

__attribute__((used)) static xmlNsPtr FUNC_2(xmlDocPtr VAR_4, xmlNodePtr VAR_5, const xmlChar * VAR_6)
{
 xmlNsPtr VAR_7;
 xmlNodePtr VAR_8 = VAR_5;

 while (VAR_5) {
  if (VAR_5->type == VAR_3 ||
      VAR_5->type == VAR_2 ||
      VAR_5->type == VAR_1) {
   return ((void*)0);
  }
  if (VAR_5->type == VAR_0) {
   VAR_7 = VAR_5->nsDef;
   while (VAR_7 != ((void*)0)) {
    if (VAR_7->prefix && VAR_7->href && FUNC_1(VAR_7->href, VAR_6)) {
     if (FUNC_0(VAR_4, VAR_5, VAR_7->prefix) == VAR_7) {
      return VAR_7;
     }
    }
    VAR_7 = VAR_7->next;
   }
   if (VAR_8 != VAR_5) {
    VAR_7 = VAR_5->ns;
    if (VAR_7 != ((void*)0)) {
     if (VAR_7->prefix && VAR_7->href && FUNC_1(VAR_7->href, VAR_6)) {
      if (FUNC_0(VAR_4, VAR_5, VAR_7->prefix) == VAR_7) {
       return VAR_7;
      }
     }
    }
   }
  }
  VAR_5 = VAR_5->parent;
 }
 return ((void*)0);
}
