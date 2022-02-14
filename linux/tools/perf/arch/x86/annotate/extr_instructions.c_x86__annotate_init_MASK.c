
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch {int initialized; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct arch*,char*) ;

__attribute__((used)) static int FUNC_1(struct arch *VAR_1, char *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->initialized)
  return 0;

 if (VAR_2) {
  if (FUNC_0(VAR_1, VAR_2))
   VAR_3 = VAR_0;
 }

 VAR_1->initialized = 1;
 return VAR_3;
}
