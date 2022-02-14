
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; int base; } ;
struct TYPE_3__ {scalar_t__ size; int base; } ;
struct module {TYPE_2__ init_layout; TYPE_1__ core_layout; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct module *VAR_0)
{
 FUNC_0(VAR_0->core_layout.base, VAR_0->core_layout.size);
 if (VAR_0->init_layout.size)
  FUNC_0(VAR_0->init_layout.base, VAR_0->init_layout.size);
}
