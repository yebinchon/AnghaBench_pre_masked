
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kasan_track {scalar_t__ stack; int pid; } ;


 int FUNC_0 (char*,...) ;
 unsigned int FUNC_1 (scalar_t__,unsigned long**) ;
 int FUNC_2 (unsigned long*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct kasan_track *VAR_0, const char *VAR_1)
{
 FUNC_0("%s by task %u:\n", VAR_1, VAR_0->pid);
 if (VAR_0->stack) {
  unsigned long *VAR_2;
  unsigned int VAR_3;

  VAR_3 = FUNC_1(VAR_0->stack, &VAR_2);
  FUNC_2(VAR_2, VAR_3, 0);
 } else {
  FUNC_0("(stack is not available)\n");
 }
}
