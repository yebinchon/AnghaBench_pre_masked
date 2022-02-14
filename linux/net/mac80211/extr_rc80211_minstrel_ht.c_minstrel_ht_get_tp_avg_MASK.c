
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minstrel_ht_sta {int overhead; } ;
struct TYPE_2__ {unsigned int* duration; unsigned int shift; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct minstrel_ht_sta*) ;
 TYPE_1__* VAR_1 ;

int
FUNC_3(struct minstrel_ht_sta *VAR_2, int VAR_3, int VAR_4,
         int VAR_5)
{
 unsigned int VAR_6 = 0;


 if (VAR_5 < FUNC_0(10, 100))
  return 0;

 if (VAR_3 != VAR_0)
  VAR_6 = 1000 * VAR_2->overhead / FUNC_2(VAR_2);

 VAR_6 += VAR_1[VAR_3].duration[VAR_4] <<
   VAR_1[VAR_3].shift;






 if (VAR_5 > FUNC_0(90, 100))
  return FUNC_1(100000 * ((FUNC_0(90, 100) * 1000)
              / VAR_6));
 else
  return FUNC_1(100000 * ((VAR_5 * 1000) / VAR_6));
}
