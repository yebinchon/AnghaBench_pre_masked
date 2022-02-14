
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {scalar_t__ in; scalar_t__ out; } ;


 unsigned int FUNC_0 (struct __kfifo*,void*,unsigned int,size_t,unsigned int*) ;

unsigned int FUNC_1(struct __kfifo *VAR_0, void *VAR_1,
  unsigned int VAR_2, size_t VAR_3)
{
 unsigned int VAR_4;

 if (VAR_0->in == VAR_0->out)
  return 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4);
 VAR_0->out += VAR_4 + VAR_3;
 return VAR_2;
}
