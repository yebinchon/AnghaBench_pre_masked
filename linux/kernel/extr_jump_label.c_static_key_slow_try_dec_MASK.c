
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct static_key {int enabled; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static bool FUNC_2(struct static_key *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->enabled, -1, 1);
 if (VAR_1 == 1)
  return 0;
 FUNC_0(VAR_1 < 0, "jump label: negative count!\n");
 return 1;
}
