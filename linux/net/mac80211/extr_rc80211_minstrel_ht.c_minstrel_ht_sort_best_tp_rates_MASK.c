
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct minstrel_ht_sta {TYPE_2__* groups; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct TYPE_3__ {int prob_ewma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (struct minstrel_ht_sta*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct minstrel_ht_sta *VAR_2, u16 VAR_3,
          u16 *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13 = VAR_0;

 VAR_5 = VAR_3 / VAR_1;
 VAR_6 = VAR_3 % VAR_1;
 VAR_8 = VAR_2->groups[VAR_5].rates[VAR_6].prob_ewma;
 VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_6, VAR_8);

 do {
  VAR_9 = VAR_4[VAR_13 - 1] / VAR_1;
  VAR_10 = VAR_4[VAR_13 - 1] % VAR_1;
  VAR_12 = VAR_2->groups[VAR_9].rates[VAR_10].prob_ewma;
  VAR_11 = FUNC_1(VAR_2, VAR_9, VAR_10,
          VAR_12);
  if (VAR_7 < VAR_11 ||
      (VAR_7 == VAR_11 && VAR_8 <= VAR_12))
   break;
  VAR_13--;
 } while (VAR_13 > 0);

 if (VAR_13 < VAR_0 - 1) {
  FUNC_0(&VAR_4[VAR_13 + 1], &VAR_4[VAR_13], (sizeof(*VAR_4) *
         (VAR_0 - (VAR_13 + 1))));
 }
 if (VAR_13 < VAR_0)
  VAR_4[VAR_13] = VAR_3;
}
