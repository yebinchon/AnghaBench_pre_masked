
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct maps {int dummy; } ;
struct map_groups {struct maps maps; } ;
struct map {int pgoff; int (* map_ip ) (struct map*,int ) ;} ;
struct machine {int trampolines_mapped; struct map_groups kmaps; } ;
struct kmap {int name; } ;
struct extra_kernel_map {int name; scalar_t__ pgoff; scalar_t__ end; scalar_t__ start; } ;
struct dso {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct kmap* FUNC_0 (struct map*) ;
 scalar_t__ FUNC_1 (struct dso*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct machine*,struct dso*,struct extra_kernel_map*) ;
 int FUNC_4 (struct machine*) ;
 struct map* FUNC_5 (struct map*) ;
 struct map* FUNC_6 (struct map_groups*,int ) ;
 struct map* FUNC_7 (struct maps*) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct map*,int ) ;

int FUNC_10(struct machine *VAR_6,
       struct dso *VAR_7)
{
 struct map_groups *VAR_8 = &VAR_6->kmaps;
 struct maps *VAR_9 = &VAR_8->maps;
 int VAR_10, VAR_11;
 bool VAR_12 = 0;
 struct map *VAR_13;
 u64 VAR_14;





 for (VAR_13 = FUNC_7(VAR_9); VAR_13; VAR_13 = FUNC_5(VAR_13)) {
  struct kmap *VAR_15 = FUNC_0(VAR_13);
  struct map *VAR_16;

  if (!VAR_15 || !FUNC_2(VAR_15->name))
   continue;

  VAR_16 = FUNC_6(VAR_8, VAR_13->pgoff);
  if (VAR_16 != VAR_13)
   VAR_13->pgoff = VAR_16->map_ip(VAR_16, VAR_13->pgoff);
  VAR_12 = 1;
 }
 if (VAR_12 || VAR_6->trampolines_mapped)
  return 0;

 VAR_14 = FUNC_1(VAR_7);
 if (!VAR_14)
  return 0;

 VAR_10 = FUNC_4(VAR_6);


 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  u64 VAR_17 = VAR_2 +
    VAR_11 * VAR_3 +
    VAR_4;
  struct extra_kernel_map VAR_18 = {
   .start = VAR_17,
   .end = VAR_17 + VAR_5,
   .pgoff = VAR_14,
  };

  FUNC_8(VAR_18.name, VAR_0, VAR_1);

  if (FUNC_3(VAR_6, VAR_7, &VAR_18) < 0)
   return -1;
 }

 VAR_6->trampolines_mapped = VAR_10;

 return 0;
}
