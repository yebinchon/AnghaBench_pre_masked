
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*,char*,int) ;
 int FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_5(struct scatterlist *VAR_0, int VAR_1,
   int VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_1;

 while (VAR_4) {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5 > VAR_4)
   VAR_5 = VAR_4;
  FUNC_0(VAR_6 >= VAR_2);

  FUNC_4(&VAR_0[VAR_6]);
  FUNC_3(&VAR_0[VAR_6++], VAR_3, VAR_5);
  VAR_4 -= VAR_5;
  VAR_3 += VAR_5;
 }
 if (VAR_6-VAR_1)
  FUNC_2(&VAR_0[VAR_6 - 1]);
 return VAR_6-VAR_1;
}
