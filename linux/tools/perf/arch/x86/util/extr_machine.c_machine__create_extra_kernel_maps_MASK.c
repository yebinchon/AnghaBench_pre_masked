
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int trampolines_mapped; } ;
struct extra_kernel_map_info {int cnt; struct extra_kernel_map* maps; scalar_t__ entry_trampoline; } ;
struct extra_kernel_map {scalar_t__ pgoff; } ;
struct dso {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct extra_kernel_map*) ;
 int FUNC_1 (char*,struct extra_kernel_map_info*,int ) ;
 int FUNC_2 (struct machine*,struct dso*,struct extra_kernel_map*) ;
 int FUNC_3 (struct machine*,char*,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5(struct machine *VAR_2,
          struct dso *VAR_3)
{
 struct extra_kernel_map_info VAR_4 = { .cnt = 0, };
 char VAR_5[VAR_0];
 int VAR_6;
 int VAR_7;

 FUNC_3(VAR_2, VAR_5, VAR_0);

 if (FUNC_4(VAR_5, "/proc/kallsyms"))
  return 0;

 VAR_6 = FUNC_1(VAR_5, &VAR_4, VAR_1);
 if (VAR_6)
  goto out_free;

 if (!VAR_4.entry_trampoline)
  goto out_free;

 for (VAR_7 = 0; VAR_7 < VAR_4.cnt; VAR_7++) {
  struct extra_kernel_map *VAR_8 = &VAR_4.maps[VAR_7];

  VAR_8->pgoff = VAR_4.entry_trampoline;
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_8);
  if (VAR_6)
   goto out_free;
 }

 VAR_2->trampolines_mapped = VAR_4.cnt;
out_free:
 FUNC_0(VAR_4.maps);
 return VAR_6;
}
