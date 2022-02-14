
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbitmap {unsigned int map_nr; unsigned int shift; } ;


 unsigned int FUNC_0 (struct sbitmap*,unsigned int) ;
 unsigned int FUNC_1 (struct sbitmap*,unsigned int) ;
 int FUNC_2 (struct sbitmap*,unsigned int,unsigned int,int) ;

int FUNC_3(struct sbitmap *VAR_0, unsigned int VAR_1, bool VAR_2)
{
 unsigned int VAR_3, VAR_4;
 int VAR_5 = -1;

 VAR_4 = FUNC_1(VAR_0, VAR_1);






 if (VAR_2)
  VAR_1 = FUNC_0(VAR_0, VAR_1);
 else
  VAR_1 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->map_nr; VAR_3++) {
  VAR_5 = FUNC_2(VAR_0, VAR_4, VAR_1,
      VAR_2);
  if (VAR_5 != -1) {
   VAR_5 += VAR_4 << VAR_0->shift;
   break;
  }


  VAR_1 = 0;
  if (++VAR_4 >= VAR_0->map_nr)
   VAR_4 = 0;
 }

 return VAR_5;
}
