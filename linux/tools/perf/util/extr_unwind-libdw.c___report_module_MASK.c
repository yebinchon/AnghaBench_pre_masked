
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct unwind_info {int dwfl; int thread; } ;
struct dso {scalar_t__ long_name; scalar_t__ symsrc_filename; int short_name; } ;
struct addr_location {TYPE_1__* map; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ pgoff; struct dso* dso; } ;
typedef int Dwfl_Module ;
typedef scalar_t__ Dwarf_Addr ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,scalar_t__*,int *,int *,int *,int *,int *) ;
 int * FUNC_2 (int ,int ,scalar_t__,int,scalar_t__,int) ;
 int FUNC_3 (int ,int ,int ,struct addr_location*) ;

__attribute__((used)) static int FUNC_4(struct addr_location *VAR_1, u64 VAR_2,
       struct unwind_info *VAR_3)
{
 Dwfl_Module *VAR_4;
 struct dso *VAR_5 = ((void*)0);




 FUNC_3(VAR_3->thread, VAR_0, VAR_2, VAR_1);

 if (VAR_1->map)
  VAR_5 = VAR_1->map->dso;

 if (!VAR_5)
  return 0;

 VAR_4 = FUNC_0(VAR_3->dwfl, VAR_2);
 if (VAR_4) {
  Dwarf_Addr VAR_6;

  FUNC_1(VAR_4, ((void*)0), &VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
  if (VAR_6 != VAR_1->map->start - VAR_1->map->pgoff)
   VAR_4 = 0;
 }

 if (!VAR_4)
  VAR_4 = FUNC_2(VAR_3->dwfl, VAR_5->short_name,
          (VAR_5->symsrc_filename ? VAR_5->symsrc_filename : VAR_5->long_name), -1, VAR_1->map->start - VAR_1->map->pgoff,
          0);

 return VAR_4 && FUNC_0(VAR_3->dwfl, VAR_2) == VAR_4 ? 0 : -1;
}
