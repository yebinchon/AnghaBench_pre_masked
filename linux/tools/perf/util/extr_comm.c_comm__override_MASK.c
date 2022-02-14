
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct comm_str {int dummy; } ;
struct comm {int exec; int start; struct comm_str* comm_str; } ;


 int VAR_0 ;
 struct comm_str* FUNC_0 (char const*,int *) ;
 int FUNC_1 (struct comm_str*) ;
 int VAR_1 ;

int FUNC_2(struct comm *VAR_2, const char *VAR_3, u64 VAR_4, bool VAR_5)
{
 struct comm_str *VAR_6, *VAR_7 = VAR_2->comm_str;

 VAR_6 = FUNC_0(VAR_3, &VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_7);
 VAR_2->comm_str = VAR_6;
 VAR_2->start = VAR_4;
 if (VAR_5)
  VAR_2->exec = 1;

 return 0;
}
