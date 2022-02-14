
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {unsigned int in; unsigned int out; } ;


 int FUNC_0 (struct __kfifo*,void*,unsigned int,unsigned int) ;

unsigned int FUNC_1(struct __kfifo *VAR_0,
  void *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_0->in - VAR_0->out;
 if (VAR_2 > VAR_3)
  VAR_2 = VAR_3;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->out);
 return VAR_2;
}
