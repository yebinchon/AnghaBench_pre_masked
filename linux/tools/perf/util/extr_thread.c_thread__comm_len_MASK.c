
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int comm_len; } ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (struct thread*) ;

int FUNC_2(struct thread *VAR_0)
{
 if (!VAR_0->comm_len) {
  const char *VAR_1 = FUNC_1(VAR_0);
  if (!VAR_1)
   return 0;
  VAR_0->comm_len = FUNC_0(VAR_1);
 }

 return VAR_0->comm_len;
}
