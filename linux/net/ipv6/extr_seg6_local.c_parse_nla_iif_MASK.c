
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_local_lwt {int iif; } ;
struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct nlattr **VAR_1, struct seg6_local_lwt *VAR_2)
{
 VAR_2->iif = FUNC_0(VAR_1[VAR_0]);

 return 0;
}
