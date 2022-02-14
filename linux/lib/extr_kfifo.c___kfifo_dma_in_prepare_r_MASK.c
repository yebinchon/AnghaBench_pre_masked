
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct __kfifo {scalar_t__ in; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int,size_t) ;
 unsigned int FUNC_2 (struct __kfifo*) ;
 unsigned int FUNC_3 (struct __kfifo*,struct scatterlist*,int,unsigned int,scalar_t__) ;

unsigned int FUNC_4(struct __kfifo *VAR_0,
 struct scatterlist *VAR_1, int VAR_2, unsigned int VAR_3, size_t VAR_4)
{
 FUNC_0(!VAR_2);

 VAR_3 = FUNC_1(VAR_3, VAR_4);

 if (VAR_3 + VAR_4 > FUNC_2(VAR_0))
  return 0;

 return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_0->in + VAR_4);
}
