
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct cyc_hist {int dummy; } ;
struct annotation {TYPE_1__* src; } ;
struct TYPE_2__ {struct cyc_hist* cycles_hist; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (struct symbol*) ;
 struct annotation* FUNC_2 (struct symbol*) ;

__attribute__((used)) static struct cyc_hist *FUNC_3(struct symbol *VAR_0)
{
 struct annotation *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->src == ((void*)0)) {
  VAR_1->src = FUNC_0();
  if (VAR_1->src == ((void*)0))
   return ((void*)0);
  goto alloc_cycles_hist;
 }

 if (!VAR_1->src->cycles_hist) {
alloc_cycles_hist:
  FUNC_1(VAR_0);
 }

 return VAR_1->src->cycles_hist;
}
