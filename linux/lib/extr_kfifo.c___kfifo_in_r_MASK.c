
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {scalar_t__ in; } ;


 int FUNC_0 (struct __kfifo*,unsigned int,size_t) ;
 int FUNC_1 (struct __kfifo*,void const*,unsigned int,scalar_t__) ;
 unsigned int FUNC_2 (struct __kfifo*) ;

unsigned int FUNC_3(struct __kfifo *VAR_0, const void *VAR_1,
  unsigned int VAR_2, size_t VAR_3)
{
 if (VAR_2 + VAR_3 > FUNC_2(VAR_0))
  return 0;

 FUNC_0(VAR_0, VAR_2, VAR_3);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_0->in + VAR_3);
 VAR_0->in += VAR_2 + VAR_3;
 return VAR_2;
}
