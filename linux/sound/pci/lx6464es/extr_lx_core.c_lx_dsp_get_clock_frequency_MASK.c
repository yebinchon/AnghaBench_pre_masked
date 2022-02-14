
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int* stat; } ;
struct lx6464es {int freq_ratio; int msg_lock; TYPE_1__ rmh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (struct lx6464es*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct lx6464es *VAR_6, u32 *VAR_7)
{
 u16 VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;

 FUNC_2(&VAR_6->msg_lock);

 FUNC_0(&VAR_6->rmh, VAR_0);
 VAR_8 = FUNC_1(VAR_6, &VAR_6->rmh);

 if (VAR_8 == 0) {
  VAR_9 = VAR_6->rmh.stat[0] >> VAR_1;
  VAR_10 = VAR_9 & VAR_5;

  if ((VAR_10 < VAR_4) ||
      (VAR_10 > VAR_3))
   VAR_11 = 0;
  else if (VAR_10 >= VAR_2)
   VAR_11 = 44100;
  else
   VAR_11 = 48000;
 }

 FUNC_3(&VAR_6->msg_lock);

 *VAR_7 = VAR_11 * VAR_6->freq_ratio;

 return VAR_8;
}
