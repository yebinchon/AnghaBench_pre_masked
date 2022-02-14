
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* language; struct TYPE_4__* type; struct TYPE_4__* data; struct TYPE_4__* timestr; struct TYPE_4__* name; } ;
typedef TYPE_1__ r_pe_resource ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(r_pe_resource *VAR_0) {
 if (VAR_0) {
  FUNC_0 (VAR_0->name);
  FUNC_0 (VAR_0->timestr);
  FUNC_0 (VAR_0->data);
  FUNC_0 (VAR_0->type);
  FUNC_0 (VAR_0->language);
  FUNC_0 (VAR_0);
 }
}
