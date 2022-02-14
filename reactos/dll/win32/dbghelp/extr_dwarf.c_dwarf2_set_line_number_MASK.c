
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vector {int dummy; } ;
struct TYPE_3__ {scalar_t__ tag; } ;
struct symt_ht {TYPE_1__ symt; } ;
struct symt_function {scalar_t__ address; } ;
struct TYPE_4__ {int ModuleName; } ;
struct module {TYPE_2__ module; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long,int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct module*,unsigned int) ;
 int FUNC_3 (struct module*,struct symt_function*,unsigned int,unsigned int,scalar_t__) ;
 struct symt_ht* FUNC_4 (struct module*,unsigned long) ;
 unsigned int* FUNC_5 (struct vector const*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct module* VAR_1, unsigned long VAR_2,
                                   const struct vector* VAR_3, unsigned VAR_4, unsigned VAR_5)
{
    struct symt_function* VAR_6;
    struct symt_ht* VAR_7;
    unsigned* VAR_8;

    if (!VAR_4 || !(VAR_8 = FUNC_5(VAR_3, VAR_4 - 1))) return;

    FUNC_0("%s %lx %s %u\n",
          FUNC_1(VAR_1->module.ModuleName), VAR_2, FUNC_2(VAR_1, *VAR_8), VAR_5);
    if (!(VAR_7 = FUNC_4(VAR_1, VAR_2)) ||
        VAR_7->symt.tag != VAR_0) return;
    VAR_6 = (struct symt_function*)VAR_7;
    FUNC_3(VAR_1, VAR_6, *VAR_8, VAR_5, VAR_2 - VAR_6->address);
}
