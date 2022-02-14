
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct scatterlist*) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;
 scalar_t__ FUNC_3 (int ) ;

struct scatterlist *FUNC_4(struct scatterlist *VAR_0)
{
 if (FUNC_2(VAR_0))
  return ((void*)0);

 VAR_0++;
 if (FUNC_3(FUNC_1(VAR_0)))
  VAR_0 = FUNC_0(VAR_0);

 return VAR_0;
}
