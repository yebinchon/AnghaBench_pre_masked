
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xmlNsPtr ;
typedef TYPE_1__* xmlNodePtr ;
struct TYPE_4__ {int doc; scalar_t__ ns; } ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int *) ;

xmlNsPtr FUNC_1(xmlNodePtr VAR_0)
{
 if (VAR_0->ns) {
  return VAR_0->ns;
 } else {
  return FUNC_0(VAR_0->doc, VAR_0, ((void*)0));
 }
}
