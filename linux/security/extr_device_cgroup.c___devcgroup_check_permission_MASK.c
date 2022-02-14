
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dev_cgroup {scalar_t__ behavior; int exceptions; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,short,int ,int ,short) ;
 int FUNC_1 (int *,short,int ,int ,short) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct dev_cgroup* FUNC_4 (int ) ;

int FUNC_5(short VAR_3, u32 VAR_4, u32 VAR_5,
     short VAR_6)
{
 struct dev_cgroup *VAR_7;
 bool VAR_8;

 FUNC_2();
 VAR_7 = FUNC_4(VAR_2);
 if (VAR_7->behavior == VAR_0)

  VAR_8 = !FUNC_1(&VAR_7->exceptions,
           VAR_3, VAR_4, VAR_5, VAR_6);
 else

  VAR_8 = FUNC_0(&VAR_7->exceptions, VAR_3, VAR_4,
         VAR_5, VAR_6);
 FUNC_3();

 if (!VAR_8)
  return -VAR_1;

 return 0;
}
