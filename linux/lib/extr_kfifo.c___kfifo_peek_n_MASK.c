
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {unsigned int mask; unsigned char* data; scalar_t__ out; } ;


 int FUNC_0 (unsigned char*,scalar_t__,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct __kfifo *VAR_0, size_t VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3 = VAR_0->mask;
 unsigned char *VAR_4 = VAR_0->data;

 VAR_2 = FUNC_0(VAR_4, VAR_0->out, VAR_3);

 if (--VAR_1)
  VAR_2 |= FUNC_0(VAR_4, VAR_0->out + 1, VAR_3) << 8;

 return VAR_2;
}
