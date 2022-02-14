
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_local_lwt {int nh4; } ;
struct nlattr {int dummy; } ;
struct in_addr {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct nlattr*) ;

__attribute__((used)) static int FUNC_2(struct nlattr **VAR_1, struct seg6_local_lwt *VAR_2)
{
 FUNC_0(&VAR_2->nh4, FUNC_1(VAR_1[VAR_0]),
        sizeof(struct in_addr));

 return 0;
}
