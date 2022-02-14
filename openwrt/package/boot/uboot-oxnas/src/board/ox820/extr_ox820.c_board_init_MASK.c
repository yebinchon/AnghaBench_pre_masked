
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* bd; } ;
struct TYPE_3__ {int bi_arch_number; scalar_t__ bi_boot_params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;

int FUNC_2(void)
{
 VAR_2->bd->bi_boot_params = VAR_0 + 0x100;
 VAR_2->bd->bi_arch_number = VAR_1;
 return 0;
}
