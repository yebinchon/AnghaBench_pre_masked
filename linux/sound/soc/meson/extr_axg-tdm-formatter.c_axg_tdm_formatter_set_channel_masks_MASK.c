
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct axg_tdm_stream {unsigned int channels; unsigned long* mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned long*,int) ;
 int FUNC_2 (unsigned long*,int,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct regmap*) ;
 int FUNC_5 (struct regmap*,unsigned int,unsigned int) ;

int FUNC_6(struct regmap *VAR_2,
     struct axg_tdm_stream *VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6 = VAR_3->channels;
 unsigned long VAR_7;
 int VAR_8, VAR_9;





 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_5 = 0;
  VAR_7 = VAR_3->mask[VAR_8];

  for (VAR_9 = FUNC_1(&VAR_7, 32);
       (VAR_9 < 32) && VAR_6;
       VAR_9 = FUNC_2(&VAR_7, 32, VAR_9 + 1)) {
   VAR_5 |= 1 << VAR_9;
   VAR_6 -= 1;
  }

  FUNC_5(VAR_2, VAR_4, VAR_5);
  VAR_4 += FUNC_4(VAR_2);
 }






 if (FUNC_0(VAR_6 != 0)) {
  FUNC_3("channel mask error\n");
  return -VAR_1;
 }

 return 0;
}
