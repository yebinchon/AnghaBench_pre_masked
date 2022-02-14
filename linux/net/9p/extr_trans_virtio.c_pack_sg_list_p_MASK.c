
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*,struct page*,int,int) ;
 int FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static int
FUNC_4(struct scatterlist *VAR_1, int VAR_2, int VAR_3,
        struct page **VAR_4, int VAR_5, size_t VAR_6, int VAR_7)
{
 int VAR_8 = 0, VAR_9;
 int VAR_10 = VAR_6;
 int VAR_11 = VAR_2;

 FUNC_0(VAR_5 > (VAR_3 - VAR_2));




 while (VAR_5) {
  VAR_9 = VAR_0 - VAR_10;
  if (VAR_9 > VAR_7)
   VAR_9 = VAR_7;
  FUNC_0(VAR_11 >= VAR_3);

  FUNC_3(&VAR_1[VAR_11]);
  FUNC_2(&VAR_1[VAR_11++], VAR_4[VAR_8++], VAR_9, VAR_10);
  VAR_10 = 0;
  VAR_7 -= VAR_9;
  VAR_5--;
 }

 if (VAR_11-VAR_2)
  FUNC_1(&VAR_1[VAR_11 - 1]);
 return VAR_11 - VAR_2;
}
