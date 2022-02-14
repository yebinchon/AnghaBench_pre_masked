
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct minstrel_ht_sta {int max_prob_rate; TYPE_4__* sta; int * max_tp_rate; TYPE_2__* groups; } ;
struct mcs_group {unsigned int* duration; unsigned int shift; } ;
struct TYPE_7__ {int vht_supported; } ;
struct TYPE_8__ {TYPE_3__ vht_cap; } ;
struct TYPE_6__ {TYPE_1__* rates; } ;
struct TYPE_5__ {scalar_t__ prob_ewma; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct minstrel_ht_sta*,int ) ;
 struct mcs_group* VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct minstrel_ht_sta *VAR_3)
{
 int VAR_4 = VAR_3->max_prob_rate / VAR_1;
 const struct mcs_group *VAR_5 = &VAR_2[VAR_4];
 int VAR_6 = VAR_3->max_prob_rate % VAR_1;
 unsigned int VAR_7;


 if (VAR_3->groups[VAR_4].rates[VAR_6].prob_ewma < FUNC_1(50, 100))
  return 1;

 VAR_7 = VAR_5->duration[VAR_6];
 VAR_7 <<= VAR_5->shift;


 if (VAR_7 > FUNC_0(1, 0, 52))
  return 500;





 if (VAR_7 > FUNC_0(1, 0, 104))
  return 1600;






 if (VAR_7 > FUNC_0(1, 0, 260) ||
     (FUNC_2(VAR_3, VAR_3->max_tp_rate[0]) <
      FUNC_1(75, 100)))
  return 3200;







 if (!VAR_3->sta->vht_cap.vht_supported)
  return VAR_0;


 return 0;
}
