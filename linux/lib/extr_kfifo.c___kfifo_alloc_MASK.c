
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {size_t esize; unsigned int mask; int * data; scalar_t__ out; scalar_t__ in; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (size_t,unsigned int,int ) ;
 unsigned int FUNC_1 (unsigned int) ;

int FUNC_2(struct __kfifo *VAR_2, unsigned int VAR_3,
  size_t VAR_4, gfp_t VAR_5)
{




 VAR_3 = FUNC_1(VAR_3);

 VAR_2->in = 0;
 VAR_2->out = 0;
 VAR_2->esize = VAR_4;

 if (VAR_3 < 2) {
  VAR_2->data = ((void*)0);
  VAR_2->mask = 0;
  return -VAR_0;
 }

 VAR_2->data = FUNC_0(VAR_4, VAR_3, VAR_5);

 if (!VAR_2->data) {
  VAR_2->mask = 0;
  return -VAR_1;
 }
 VAR_2->mask = VAR_3 - 1;

 return 0;
}
