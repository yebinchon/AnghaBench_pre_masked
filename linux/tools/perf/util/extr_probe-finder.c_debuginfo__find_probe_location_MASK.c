
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pubname_callback_param {scalar_t__ found; int * sp_die; int * cu_die; scalar_t__ file; scalar_t__ function; } ;
struct probe_finder {int * lcache; int lno; int cu_die; int * fname; int sp_die; TYPE_1__* pev; } ;
struct perf_probe_point {int line; scalar_t__ lazy_line; scalar_t__ function; scalar_t__ file; } ;
struct dwarf_callback_param {struct probe_finder* data; } ;
struct debuginfo {int dbg; } ;
struct TYPE_2__ {struct perf_probe_point point; } ;
typedef scalar_t__ Dwarf_Off ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int * FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,int ,struct pubname_callback_param*,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__*,size_t*,int *,int *,int *) ;
 int * FUNC_3 (int ,scalar_t__,int *) ;
 int FUNC_4 (struct probe_finder*) ;
 int FUNC_5 (struct probe_finder*) ;
 int FUNC_6 (int *,struct probe_finder*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,struct dwarf_callback_param*) ;
 int VAR_1 ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct debuginfo *VAR_2,
      struct probe_finder *VAR_3)
{
 struct perf_probe_point *VAR_4 = &VAR_3->pev->point;
 Dwarf_Off VAR_5, VAR_6;
 size_t VAR_7;
 Dwarf_Die *VAR_8;
 int VAR_9 = 0;

 VAR_5 = 0;
 VAR_3->lcache = FUNC_8(((void*)0));
 if (!VAR_3->lcache)
  return -VAR_0;


 if (VAR_4->function && !FUNC_10(VAR_4->function)) {
  struct pubname_callback_param VAR_10 = {
   .function = VAR_4->function,
   .file = VAR_4->file,
   .cu_die = &VAR_3->cu_die,
   .sp_die = &VAR_3->sp_die,
   .found = 0,
  };
  struct dwarf_callback_param VAR_11 = {
   .data = VAR_3,
  };

  FUNC_1(VAR_2->dbg, VAR_1,
      &VAR_10, 0);
  if (VAR_10.found) {
   VAR_9 = FUNC_9(&VAR_3->sp_die, &VAR_11);
   if (VAR_9)
    goto found;
  }
 }


 while (!FUNC_2(VAR_2->dbg, VAR_5, &VAR_6, &VAR_7, ((void*)0), ((void*)0), ((void*)0))) {

  VAR_8 = FUNC_3(VAR_2->dbg, VAR_5 + VAR_7, &VAR_3->cu_die);
  if (!VAR_8)
   continue;


  if (VAR_4->file)
   VAR_3->fname = FUNC_0(&VAR_3->cu_die, VAR_4->file);
  else
   VAR_3->fname = ((void*)0);

  if (!VAR_4->file || VAR_3->fname) {
   if (VAR_4->function)
    VAR_9 = FUNC_4(VAR_3);
   else if (VAR_4->lazy_line)
    VAR_9 = FUNC_6(&VAR_3->cu_die, VAR_3);
   else {
    VAR_3->lno = VAR_4->line;
    VAR_9 = FUNC_5(VAR_3);
   }
   if (VAR_9 < 0)
    break;
  }
  VAR_5 = VAR_6;
 }

found:
 FUNC_7(VAR_3->lcache);
 VAR_3->lcache = ((void*)0);

 return VAR_9;
}
