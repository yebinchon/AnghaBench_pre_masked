
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch_flags {scalar_t__ mispred; int predicted; } ;


 int FUNC_0 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct branch_flags *VAR_0, char *VAR_1, int VAR_2)
{
 if (!VAR_0->mispred && !VAR_0->predicted)
  return FUNC_0(VAR_1, VAR_2, "%s", "-");

 if (VAR_0->mispred)
  return FUNC_0(VAR_1, VAR_2, "%s", "M");

 return FUNC_0(VAR_1, VAR_2, "%s", "P");
}
