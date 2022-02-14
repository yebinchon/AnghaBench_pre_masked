
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jump_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct jump_entry*,void*,void*) ;

__attribute__((used)) static int FUNC_1(struct jump_entry *VAR_0,
  struct jump_entry *VAR_1, void *VAR_2, void *VAR_3)
{
 struct jump_entry *VAR_4;

 VAR_4 = VAR_0;
 while (VAR_4 < VAR_1) {
  if (FUNC_0(VAR_4, VAR_2, VAR_3))
   return 1;
  VAR_4++;
 }

 return 0;
}
