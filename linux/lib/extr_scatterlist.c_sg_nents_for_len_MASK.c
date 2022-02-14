
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct scatterlist {scalar_t__ length; } ;


 int VAR_0 ;
 struct scatterlist* FUNC_0 (struct scatterlist*) ;

int FUNC_1(struct scatterlist *VAR_1, u64 VAR_2)
{
 int VAR_3;
 u64 VAR_4;

 if (!VAR_2)
  return 0;

 for (VAR_3 = 0, VAR_4 = 0; VAR_1; VAR_1 = FUNC_0(VAR_1)) {
  VAR_3++;
  VAR_4 += VAR_1->length;
  if (VAR_4 >= VAR_2)
   return VAR_3;
 }

 return -VAR_0;
}
