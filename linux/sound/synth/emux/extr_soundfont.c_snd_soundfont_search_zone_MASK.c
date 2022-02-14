
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sf_zone {int dummy; } ;
struct snd_sf_list {int lock; scalar_t__ presets_locked; } ;


 int FUNC_0 (struct snd_sf_list*,int*,int,int,int,struct snd_sf_zone**,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct snd_sf_list *VAR_0, int *VAR_1, int VAR_2,
     int VAR_3, int VAR_4,
     int VAR_5, int VAR_6,
     struct snd_sf_zone **VAR_7, int VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;





 FUNC_1(&VAR_0->lock, VAR_10);
 if (VAR_0->presets_locked) {
  FUNC_2(&VAR_0->lock, VAR_10);
  return 0;
 }
 VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_7, VAR_8, 0);
 if (! VAR_9) {
  if (VAR_3 != VAR_5 || VAR_4 != VAR_6)
   VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2,
            VAR_5, VAR_6,
            VAR_7, VAR_8, 0);
 }
 FUNC_2(&VAR_0->lock, VAR_10);
 return VAR_9;
}
