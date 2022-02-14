
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int text_size; int base; } ;
struct TYPE_3__ {int text_size; int base; } ;
struct module {TYPE_2__ core_layout; TYPE_1__ init_layout; } ;


 struct module* FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int ,int ) ;

struct module *FUNC_2(unsigned long VAR_0)
{
 struct module *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {

  if (!FUNC_1(VAR_0, VAR_1->init_layout.base, VAR_1->init_layout.text_size)
      && !FUNC_1(VAR_0, VAR_1->core_layout.base, VAR_1->core_layout.text_size))
   VAR_1 = ((void*)0);
 }
 return VAR_1;
}
