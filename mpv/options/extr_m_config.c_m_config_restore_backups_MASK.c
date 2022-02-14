
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_opt_backup {TYPE_1__* co; int backup; struct m_opt_backup* next; } ;
struct m_config {struct m_opt_backup* backup_opts; } ;
struct TYPE_2__ {int is_set_locally; int opt; } ;


 int FUNC_0 (struct m_config*,TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct m_opt_backup*) ;

void FUNC_3(struct m_config *VAR_0)
{
    while (VAR_0->backup_opts) {
        struct m_opt_backup *VAR_1 = VAR_0->backup_opts;
        VAR_0->backup_opts = VAR_1->next;

        FUNC_0(VAR_0, VAR_1->co, VAR_1->backup, 0);

        FUNC_1(VAR_1->co->opt, VAR_1->backup);
        VAR_1->co->is_set_locally = 0;
        FUNC_2(VAR_1);
    }
}
