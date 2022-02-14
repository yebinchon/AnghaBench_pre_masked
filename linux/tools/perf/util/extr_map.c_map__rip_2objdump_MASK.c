
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct map {scalar_t__ reloc; scalar_t__ (* unmap_ip ) (struct map*,scalar_t__) ;TYPE_1__* dso; scalar_t__ pgoff; } ;
struct kmap {TYPE_2__* kmaps; int name; } ;
struct TYPE_4__ {scalar_t__ machine; } ;
struct TYPE_3__ {scalar_t__ kernel; scalar_t__ text_offset; scalar_t__ rel; int adjust_symbols; } ;


 scalar_t__ VAR_0 ;
 struct kmap* FUNC_0 (struct map*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct map* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct map*,scalar_t__) ;

u64 FUNC_4(struct map *VAR_1, u64 VAR_2)
{
 struct kmap *VAR_3 = FUNC_0(VAR_1);






 if (VAR_3 && FUNC_1(VAR_3->name) && VAR_3->kmaps && VAR_3->kmaps->machine) {
  struct map *VAR_4 = FUNC_2(VAR_3->kmaps->machine);

  if (VAR_4)
   VAR_1 = VAR_4;
 }

 if (!VAR_1->dso->adjust_symbols)
  return VAR_2;

 if (VAR_1->dso->rel)
  return VAR_2 - VAR_1->pgoff;





 if (VAR_1->dso->kernel == VAR_0)
  return VAR_2 + VAR_1->dso->text_offset;

 return VAR_1->unmap_ip(VAR_1, VAR_2) - VAR_1->reloc;
}
