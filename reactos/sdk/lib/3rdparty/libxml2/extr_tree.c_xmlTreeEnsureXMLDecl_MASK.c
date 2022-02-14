
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef int xmlNs ;
typedef TYPE_2__* xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_7__ {TYPE_1__* oldNs; } ;
struct TYPE_6__ {void* prefix; void* href; int type; } ;


 int VAR_0 ;
 int const* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static xmlNsPtr
FUNC_4(xmlDocPtr VAR_2)
{
    if (VAR_2 == ((void*)0))
 return (((void*)0));
    if (VAR_2->oldNs != ((void*)0))
 return (VAR_2->oldNs);
    {
 xmlNsPtr VAR_3;
 VAR_3 = (xmlNsPtr) FUNC_1(sizeof(xmlNs));
 if (VAR_3 == ((void*)0)) {
     FUNC_3(
  "allocating the XML namespace");
     return (((void*)0));
 }
 FUNC_0(VAR_3, 0, sizeof(xmlNs));
 VAR_3->type = VAR_0;
 VAR_3->href = FUNC_2(VAR_1);
 VAR_3->prefix = FUNC_2((const xmlChar *)"xml");
 VAR_2->oldNs = VAR_3;
 return (VAR_3);
    }
}
