
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jump_entry {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct jump_entry*) ;

__attribute__((used)) static int FUNC_1(struct jump_entry *VAR_1, void *VAR_2, void *VAR_3)
{
 if (FUNC_0(VAR_1) <= (unsigned long)VAR_3 &&
     FUNC_0(VAR_1) + VAR_0 > (unsigned long)VAR_2)
  return 1;

 return 0;
}
