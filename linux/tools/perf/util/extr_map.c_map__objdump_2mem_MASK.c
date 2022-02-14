
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct map {scalar_t__ reloc; TYPE_1__* dso; scalar_t__ (* unmap_ip ) (struct map*,scalar_t__) ;scalar_t__ pgoff; } ;
struct TYPE_2__ {scalar_t__ kernel; scalar_t__ text_offset; scalar_t__ rel; int adjust_symbols; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct map*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct map*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct map*,scalar_t__) ;

u64 FUNC_3(struct map *VAR_1, u64 VAR_2)
{
 if (!VAR_1->dso->adjust_symbols)
  return VAR_1->unmap_ip(VAR_1, VAR_2);

 if (VAR_1->dso->rel)
  return VAR_1->unmap_ip(VAR_1, VAR_2 + VAR_1->pgoff);





 if (VAR_1->dso->kernel == VAR_0)
  return VAR_1->unmap_ip(VAR_1, VAR_2 - VAR_1->dso->text_offset);

 return VAR_2 + VAR_1->reloc;
}
