
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct minstrel_mcs_group_data {size_t max_group_prob_rate; TYPE_1__* rates; } ;
struct minstrel_ht_sta {size_t* max_tp_rate; size_t max_prob_rate; struct minstrel_mcs_group_data* groups; int * supported; } ;
struct TYPE_5__ {int streams; } ;
struct TYPE_4__ {int prob_ewma; } ;


 int FUNC_0 (TYPE_2__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct minstrel_ht_sta*,int,int,int) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static inline void
FUNC_2(struct minstrel_ht_sta *VAR_3)
{
 struct minstrel_mcs_group_data *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_5 = VAR_2[VAR_3->max_tp_rate[0] /
     VAR_0].streams;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  VAR_4 = &VAR_3->groups[VAR_6];
  if (!VAR_3->supported[VAR_6] || VAR_6 == VAR_1)
   continue;

  VAR_7 = VAR_4->max_group_prob_rate % VAR_0;
  VAR_8 = VAR_3->groups[VAR_6].rates[VAR_7].prob_ewma;

  if (VAR_9 < FUNC_1(VAR_3, VAR_6, VAR_7, VAR_8) &&
     (VAR_2[VAR_6].streams < VAR_5)) {
    VAR_3->max_prob_rate = VAR_4->max_group_prob_rate;
    VAR_9 = FUNC_1(VAR_3, VAR_6,
        VAR_7,
        VAR_8);
  }
 }
}
