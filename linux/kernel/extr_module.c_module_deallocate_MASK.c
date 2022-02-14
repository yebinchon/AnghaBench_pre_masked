
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int base; } ;
struct TYPE_3__ {int base; } ;
struct module {TYPE_2__ core_layout; TYPE_1__ init_layout; } ;
struct load_info {int dummy; } ;


 int FUNC_0 (struct module*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct module*) ;

__attribute__((used)) static void FUNC_3(struct module *VAR_0, struct load_info *VAR_1)
{
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->init_layout.base);
 FUNC_1(VAR_0->core_layout.base);
}
