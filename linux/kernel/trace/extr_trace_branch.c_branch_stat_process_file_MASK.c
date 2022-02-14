
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_branch_data {char* file; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static const char *FUNC_1(struct ftrace_branch_data *VAR_0)
{
 const char *VAR_1;


 VAR_1 = VAR_0->file + FUNC_0(VAR_0->file);
 while (VAR_1 >= VAR_0->file && *VAR_1 != '/')
  VAR_1--;
 return ++VAR_1;
}
