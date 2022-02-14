
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lola {unsigned int input_src_caps_mask; unsigned int input_src_mask; TYPE_3__* pcm; TYPE_1__* pin; } ;
struct TYPE_6__ {TYPE_2__* streams; } ;
struct TYPE_5__ {int nid; } ;
struct TYPE_4__ {int num_pins; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lola*) ;
 int FUNC_1 (struct lola*,int ,int ,unsigned int,int ) ;

int FUNC_2(struct lola *VAR_3, unsigned int VAR_4, bool VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8, VAR_9;


 if ((VAR_3->input_src_caps_mask & VAR_4) != VAR_4)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_3->pin[VAR_0].num_pins; VAR_8 += 2) {
  unsigned int VAR_10 = 3U << VAR_8;
  unsigned int VAR_11, VAR_12;
  if (!(VAR_3->input_src_caps_mask & VAR_10))
   continue;

  VAR_11 = (VAR_4 & VAR_10) != 0;
  if (VAR_5) {
   VAR_12 = (VAR_3->input_src_mask & VAR_10) != 0;
   if (VAR_12 == VAR_11)
    continue;
  }
  VAR_9 = FUNC_1(VAR_3, VAR_3->pcm[VAR_0].streams[VAR_8].nid,
           VAR_2, VAR_11, 0);
  if (!VAR_9)
   VAR_7++;
  else
   VAR_6 = VAR_9;
 }
 if (VAR_7)
  VAR_6 = FUNC_0(VAR_3);
 if (!VAR_6)
  VAR_3->input_src_mask = VAR_4;
 return VAR_6;
}
