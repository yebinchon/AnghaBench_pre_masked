
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u16 ;
struct minstrel_ht_sta {TYPE_2__* groups; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct TYPE_3__ {unsigned int prob_ewma; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct minstrel_ht_sta*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct minstrel_ht_sta*,unsigned int,unsigned int*) ;

__attribute__((used)) static void
FUNC_2(struct minstrel_ht_sta *VAR_2,
     u16 VAR_3[VAR_0],
     u16 VAR_4[VAR_0])
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_5 = VAR_4[0] / VAR_1;
 VAR_6 = VAR_4[0] % VAR_1;
 VAR_9 = VAR_2->groups[VAR_5].rates[VAR_6].prob_ewma;
 VAR_7 = FUNC_0(VAR_2, VAR_5, VAR_6, VAR_9);

 VAR_5 = VAR_3[0] / VAR_1;
 VAR_6 = VAR_3[0] % VAR_1;
 VAR_9 = VAR_2->groups[VAR_5].rates[VAR_6].prob_ewma;
 VAR_8 = FUNC_0(VAR_2, VAR_5, VAR_6, VAR_9);

 if (VAR_4 && VAR_7 > VAR_8) {
  for(VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   FUNC_1(VAR_2, VAR_4[VAR_10],
             VAR_3);
  }
 }

}
