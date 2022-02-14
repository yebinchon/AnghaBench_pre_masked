
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct probe_finder {scalar_t__ addr; int lno; int fname; TYPE_1__* pev; } ;
struct perf_probe_point {scalar_t__ offset; int function; scalar_t__ lazy_line; scalar_t__ line; scalar_t__ file; } ;
struct dwarf_callback_param {int retval; struct probe_finder* data; } ;
struct TYPE_4__ {int no_inlines; } ;
struct TYPE_3__ {struct perf_probe_point point; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct probe_finder*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__*) ;
 int FUNC_10 (struct probe_finder*) ;
 int FUNC_11 (int *,struct probe_finder*) ;
 int FUNC_12 (char*,int ,...) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int *,struct probe_finder*) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_16(Dwarf_Die *VAR_5, void *VAR_6)
{
 struct dwarf_callback_param *VAR_7 = VAR_6;
 struct probe_finder *VAR_8 = VAR_7->data;
 struct perf_probe_point *VAR_9 = &VAR_8->pev->point;


 if (!FUNC_1(VAR_5) ||
     !FUNC_3(VAR_5, VAR_9->function))
  return VAR_1;


 if (VAR_9->file && FUNC_15(VAR_9->file, FUNC_5(VAR_5)))
  return VAR_1;

 FUNC_12("Matched function: %s [%lx]\n", FUNC_7(VAR_5),
   (unsigned long)FUNC_8(VAR_5));
 VAR_8->fname = FUNC_5(VAR_5);
 if (VAR_9->line) {
  FUNC_6(VAR_5, &VAR_8->lno);
  VAR_8->lno += VAR_9->line;
  VAR_7->retval = FUNC_10(VAR_8);
 } else if (FUNC_2(VAR_5)) {

  FUNC_9(VAR_5, &VAR_8->addr);

  if (VAR_8->addr == 0) {
   FUNC_12("%s has no entry PC. Skipped\n",
     FUNC_7(VAR_5));
   VAR_7->retval = 0;

  } else if (VAR_9->lazy_line)
   VAR_7->retval = FUNC_11(VAR_5, VAR_8);
  else {
   FUNC_13(VAR_5, VAR_8);
   VAR_8->addr += VAR_9->offset;

   VAR_7->retval = FUNC_0(VAR_5, VAR_8);
  }
 } else if (!VAR_3.no_inlines) {

  VAR_7->retval = FUNC_4(VAR_5,
     VAR_4, (void *)VAR_8);

  if (VAR_7->retval == -VAR_2)
   VAR_7->retval = 0;
 }


 if (FUNC_14(VAR_9->function) && VAR_7->retval >= 0) {
  VAR_7->retval = 0;
  return VAR_1;
 }

 return VAR_0;
}
