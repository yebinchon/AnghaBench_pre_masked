
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xmlNsPtr ;
typedef TYPE_1__* xmlAttrPtr ;
struct TYPE_5__ {scalar_t__ ns; } ;
struct TYPE_4__ {TYPE_2__* parent; int doc; scalar_t__ ns; } ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*,int *) ;

xmlNsPtr FUNC_1(xmlAttrPtr VAR_0)
{
 if (VAR_0->ns) {
  return VAR_0->ns;
 } else if (VAR_0->parent->ns) {
  return VAR_0->parent->ns;
 } else {
  return FUNC_0(VAR_0->doc, VAR_0->parent, ((void*)0));
 }
}
