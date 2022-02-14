
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dstr {int member_0; } ;
struct TYPE_6__ {size_t num; int * array; } ;
struct TYPE_7__ {TYPE_1__ roots; } ;
typedef TYPE_2__ profiler_snapshot_t ;
typedef int (* profile_entry_print_func ) (int *,struct dstr*,struct dstr*,int ,int ,int ) ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct dstr*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(const char *VAR_1, profile_entry_print_func VAR_2,
   profiler_snapshot_t *VAR_3)
{
 struct dstr VAR_4 = {0};
 struct dstr VAR_5 = {0};

 bool VAR_6 = !VAR_3;
 if (!VAR_3)
  VAR_3 = FUNC_2();

 FUNC_0(VAR_0, "%s", VAR_1);
 for (size_t VAR_7 = 0; VAR_7 < VAR_3->roots.num; VAR_7++) {
  VAR_2(&VAR_3->roots.array[VAR_7], &VAR_4, &VAR_5, 0,
        0, 0);
 }
 FUNC_0(VAR_0, "=================================================");

 if (VAR_6)
  FUNC_3(VAR_3);

 FUNC_1(&VAR_5);
 FUNC_1(&VAR_4);
}
