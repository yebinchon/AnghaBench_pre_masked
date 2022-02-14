
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct rlimit*) ;
 int FUNC_1 (char*,long,int) ;
 int FUNC_2 (int ,struct rlimit*) ;

__attribute__((used)) static int FUNC_3(int VAR_1)
{
 struct rlimit VAR_2;

 if (FUNC_0(VAR_0, &VAR_2))
  return -1;

 FUNC_1("file limit %ld, new %d\n", (long) VAR_2.rlim_cur, VAR_1);

 VAR_2.rlim_cur = VAR_1;
 return FUNC_2(VAR_0, &VAR_2);
}
