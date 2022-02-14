
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cur_freq; } ;
struct lola {unsigned int granularity; TYPE_1__ clock; scalar_t__ audio_out_alloc_mask; scalar_t__ audio_in_alloc_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lola*,unsigned int,int ) ;
 int FUNC_1 (struct lola*) ;
 int FUNC_2 (struct lola*,int,int ,unsigned int,int ) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct lola *VAR_4, unsigned int VAR_5, bool VAR_6)
{
 int VAR_7;

 if (!VAR_6) {
  if (VAR_5 == VAR_4->granularity)
   return 0;





  if (!FUNC_0(VAR_4, VAR_5,
          VAR_4->clock.cur_freq))
   return -VAR_1;
 }

 VAR_4->granularity = VAR_5;
 VAR_5 /= VAR_2;


 VAR_7 = FUNC_2(VAR_4, 1, VAR_3,
          VAR_5, 0);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(400 * VAR_5, 20000);
 return FUNC_1(VAR_4);
}
