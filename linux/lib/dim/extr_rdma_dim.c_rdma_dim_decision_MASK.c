
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dim_stats {int cpe_ratio; } ;
struct dim {int profile_ix; scalar_t__ tune_state; struct dim_stats prev_stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int FUNC_0 (struct dim*) ;
 int FUNC_1 (struct dim_stats*,struct dim_stats*) ;
 int FUNC_2 (struct dim*) ;

__attribute__((used)) static bool FUNC_3(struct dim_stats *VAR_3, struct dim *VAR_4)
{
 int VAR_5 = VAR_4->profile_ix;
 u8 VAR_6 = VAR_4->tune_state;
 int VAR_7;
 int VAR_8;

 if (VAR_6 != VAR_1 && VAR_6 != VAR_2) {
  VAR_7 = FUNC_1(VAR_3,
         &VAR_4->prev_stats);

  switch (VAR_7) {
  case 129:
   if (VAR_3->cpe_ratio <= 50 * VAR_5)
    VAR_4->profile_ix = 0;
   break;
  case 128:
   FUNC_0(VAR_4);

  case 130:
   VAR_8 = FUNC_2(VAR_4);
   if (VAR_8 == VAR_0)
    FUNC_0(VAR_4);
   break;
  }
 }

 VAR_4->prev_stats = *VAR_3;

 return VAR_4->profile_ix != VAR_5;
}
