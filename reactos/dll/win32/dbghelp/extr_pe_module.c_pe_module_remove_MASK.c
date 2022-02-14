
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct process {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pe_info; } ;
struct module_format {TYPE_2__ u; } ;
struct TYPE_3__ {int fmap; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct module_format*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct process* VAR_0, struct module_format* VAR_1)
{
    FUNC_2(&VAR_1->u.pe_info->fmap);
    FUNC_1(FUNC_0(), 0, VAR_1);
}
