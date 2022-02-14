
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct range {scalar_t__ end; scalar_t__ start; } ;
typedef int range ;


 int FUNC_0 (struct range*,int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct range*,struct range*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

int FUNC_4(struct range *VAR_0, int VAR_1, int VAR_2,
       u64 VAR_3, u64 VAR_4)
{
 int VAR_5;

 if (VAR_3 >= VAR_4)
  return VAR_2;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  u64 VAR_6, VAR_7;

  if (!VAR_0[VAR_5].end)
   continue;

  VAR_6 = FUNC_1(VAR_0[VAR_5].start, VAR_3);
  VAR_7 = FUNC_3(VAR_0[VAR_5].end, VAR_4);
  if (VAR_6 > VAR_7)
   continue;


  VAR_3 = FUNC_3(VAR_0[VAR_5].start, VAR_3);
  VAR_4 = FUNC_1(VAR_0[VAR_5].end, VAR_4);

  FUNC_2(&VAR_0[VAR_5], &VAR_0[VAR_5 + 1],
   (VAR_2 - (VAR_5 + 1)) * sizeof(VAR_0[VAR_5]));
  VAR_0[VAR_2 - 1].start = 0;
  VAR_0[VAR_2 - 1].end = 0;
  VAR_2--;
  VAR_5--;
 }


 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
