
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_str {int refcnt; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static struct comm_str *FUNC_1(struct comm_str *VAR_0)
{
 if (VAR_0 && FUNC_0(&VAR_0->refcnt))
  return VAR_0;

 return ((void*)0);
}
