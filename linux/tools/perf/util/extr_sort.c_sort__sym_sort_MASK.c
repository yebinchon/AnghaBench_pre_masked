
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sym; } ;
struct hist_entry {TYPE_1__ ms; } ;
typedef int int64_t ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int64_t
FUNC_2(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 if (!VAR_0->ms.sym || !VAR_1->ms.sym)
  return FUNC_0(VAR_0->ms.sym, VAR_1->ms.sym);

 return FUNC_1(VAR_1->ms.sym->name, VAR_0->ms.sym->name);
}
