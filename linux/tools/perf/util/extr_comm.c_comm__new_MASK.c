
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct comm {int exec; int comm_str; int start; } ;


 int FUNC_0 (char const*,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct comm*) ;
 struct comm* FUNC_2 (int) ;

struct comm *FUNC_3(const char *VAR_1, u64 VAR_2, bool VAR_3)
{
 struct comm *VAR_4 = FUNC_2(sizeof(*VAR_4));

 if (!VAR_4)
  return ((void*)0);

 VAR_4->start = VAR_2;
 VAR_4->exec = VAR_3;

 VAR_4->comm_str = FUNC_0(VAR_1, &VAR_0);
 if (!VAR_4->comm_str) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
