
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_str {int refcnt; int str; } ;


 int FUNC_0 (struct comm_str*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char const*) ;
 struct comm_str* FUNC_3 (int) ;

__attribute__((used)) static struct comm_str *FUNC_4(const char *VAR_0)
{
 struct comm_str *VAR_1;

 VAR_1 = FUNC_3(sizeof(*VAR_1));
 if (!VAR_1)
  return ((void*)0);

 VAR_1->str = FUNC_2(VAR_0);
 if (!VAR_1->str) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 FUNC_1(&VAR_1->refcnt, 1);

 return VAR_1;
}
