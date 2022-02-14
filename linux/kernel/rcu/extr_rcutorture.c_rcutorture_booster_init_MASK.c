
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,unsigned int) ;
 int * FUNC_5 (int ,int *,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_1[VAR_4] != ((void*)0))
  return 0;


 FUNC_6(&VAR_0);
 FUNC_8();
 FUNC_2("Creating rcu_torture_boost task");
 VAR_1[VAR_4] = FUNC_5(VAR_3, ((void*)0),
        FUNC_3(VAR_4),
        "rcu_torture_boost");
 if (FUNC_0(VAR_1[VAR_4])) {
  VAR_5 = FUNC_1(VAR_1[VAR_4]);
  FUNC_2("rcu_torture_boost task create failed");
  VAR_2++;
  VAR_1[VAR_4] = ((void*)0);
  FUNC_7(&VAR_0);
  return VAR_5;
 }
 FUNC_4(VAR_1[VAR_4], VAR_4);
 FUNC_9(VAR_1[VAR_4]);
 FUNC_7(&VAR_0);
 return 0;
}
