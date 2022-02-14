
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct __kfifo {int in; } ;


 unsigned int FUNC_0 (struct __kfifo*) ;
 unsigned int FUNC_1 (struct __kfifo*,struct scatterlist*,int,unsigned int,int ) ;

unsigned int FUNC_2(struct __kfifo *VAR_0,
  struct scatterlist *VAR_1, int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 if (VAR_3 > VAR_4)
  VAR_3 = VAR_4;

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_0->in);
}
