
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dim_stats {int dummy; } ;
struct dim {int tune_state; int profile_ix; struct dim_stats prev_stats; int tired; } ;







 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct dim*) ;
 int FUNC_1 (struct dim*) ;
 int FUNC_2 (struct dim*) ;
 int FUNC_3 (struct dim*) ;
 int FUNC_4 (struct dim*) ;
 int FUNC_5 (struct dim_stats*,struct dim_stats*) ;
 int FUNC_6 (struct dim*) ;

__attribute__((used)) static bool FUNC_7(struct dim_stats *VAR_2, struct dim *VAR_3)
{
 int VAR_4 = VAR_3->tune_state;
 int VAR_5 = VAR_3->profile_ix;
 int VAR_6;
 int VAR_7;

 switch (VAR_3->tune_state) {
 case 130:
  VAR_6 = FUNC_5(VAR_2,
        &VAR_3->prev_stats);
  if (VAR_6 != VAR_1)
   FUNC_4(VAR_3);
  break;

 case 129:
  VAR_3->tired--;
  if (!VAR_3->tired)
   FUNC_4(VAR_3);
  break;

 case 132:
 case 133:
  VAR_6 = FUNC_5(VAR_2,
        &VAR_3->prev_stats);
  if (VAR_6 != VAR_0)
   FUNC_3(VAR_3);

  if (FUNC_0(VAR_3)) {
   FUNC_1(VAR_3);
   break;
  }

  VAR_7 = FUNC_6(VAR_3);
  switch (VAR_7) {
  case 131:
   FUNC_1(VAR_3);
   break;
  case 128:
   FUNC_2(VAR_3);
   break;
  }

  break;
 }

 if (VAR_4 != 130 ||
     VAR_3->tune_state != 130)
  VAR_3->prev_stats = *VAR_2;

 return VAR_3->profile_ix != VAR_5;
}
