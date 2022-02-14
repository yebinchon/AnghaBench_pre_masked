
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct symt_function {int dummy; } ;
struct symt {int dummy; } ;
struct sym_enum {scalar_t__ index; scalar_t__ tag; scalar_t__ addr; int user; TYPE_1__* sym_info; int (* cb ) (TYPE_1__*,scalar_t__,int ) ;} ;
struct module_pair {int dummy; } ;
struct TYPE_3__ {scalar_t__ Index; scalar_t__ Tag; scalar_t__ Address; scalar_t__ Size; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_1 (struct module_pair*,struct symt_function const*,struct symt const*,TYPE_1__*) ;

__attribute__((used)) static BOOL FUNC_2(const struct sym_enum* VAR_1, struct module_pair* VAR_2,
                        const struct symt_function* VAR_3, const struct symt* VAR_4)
{
    FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1->sym_info);
    if (VAR_1->index && VAR_1->sym_info->Index != VAR_1->index) return VAR_0;
    if (VAR_1->tag && VAR_1->sym_info->Tag != VAR_1->tag) return VAR_0;
    if (VAR_1->addr && !(VAR_1->addr >= VAR_1->sym_info->Address && VAR_1->addr < VAR_1->sym_info->Address + VAR_1->sym_info->Size)) return VAR_0;
    return !VAR_1->cb(VAR_1->sym_info, VAR_1->sym_info->Size, VAR_1->user);
}
