
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lock; int cache; int synced; } ;
struct TYPE_5__ {int lock; int cache; int synced; } ;
struct TYPE_4__ {int lock; int cache; int synced; } ;
struct tscs454 {TYPE_3__ sub_ram; TYPE_2__ spk_ram; TYPE_1__ dac_ram; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static inline int FUNC_3(struct snd_soc_component *VAR_10,
  struct tscs454 *VAR_11)
{
 int VAR_12;

 FUNC_0(&VAR_11->dac_ram.lock);
 if (!VAR_11->dac_ram.synced) {
  VAR_12 = FUNC_2(VAR_10, VAR_11->dac_ram.cache,
    VAR_2, VAR_1, VAR_3,
    0x00, VAR_0);
  if (VAR_12 < 0) {
   FUNC_1(&VAR_11->dac_ram.lock);
   return VAR_12;
  }
 }
 FUNC_1(&VAR_11->dac_ram.lock);

 FUNC_0(&VAR_11->spk_ram.lock);
 if (!VAR_11->spk_ram.synced) {
  VAR_12 = FUNC_2(VAR_10, VAR_11->spk_ram.cache,
    VAR_5, VAR_4, VAR_6,
    0x00, VAR_0);
  if (VAR_12 < 0) {
   FUNC_1(&VAR_11->spk_ram.lock);
   return VAR_12;
  }
 }
 FUNC_1(&VAR_11->spk_ram.lock);

 FUNC_0(&VAR_11->sub_ram.lock);
 if (!VAR_11->sub_ram.synced) {
  VAR_12 = FUNC_2(VAR_10, VAR_11->sub_ram.cache,
    VAR_8, VAR_7, VAR_9,
    0x00, VAR_0);
  if (VAR_12 < 0) {
   FUNC_1(&VAR_11->sub_ram.lock);
   return VAR_12;
  }
 }
 FUNC_1(&VAR_11->sub_ram.lock);

 return 0;
}
