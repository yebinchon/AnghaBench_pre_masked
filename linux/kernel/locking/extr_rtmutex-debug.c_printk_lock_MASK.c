
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex {int owner; int line; int file; scalar_t__ name; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct rt_mutex*) ;

__attribute__((used)) static void FUNC_3(struct rt_mutex *VAR_0, int VAR_1)
{
 if (VAR_0->name)
  FUNC_0(" [%p] {%s}\n",
   VAR_0, VAR_0->name);
 else
  FUNC_0(" [%p] {%s:%d}\n",
   VAR_0, VAR_0->file, VAR_0->line);

 if (VAR_1 && FUNC_2(VAR_0)) {
  FUNC_0(".. ->owner: %p\n", VAR_0->owner);
  FUNC_0(".. held by:  ");
  FUNC_1(FUNC_2(VAR_0));
  FUNC_0("\n");
 }
}
