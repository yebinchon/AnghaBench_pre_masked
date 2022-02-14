
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct key {int dummy; } ;


 int FUNC_0 (struct key*) ;
 scalar_t__ FUNC_1 (struct key*,int ) ;
 struct key* FUNC_2 (void*) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, void *VAR_1)
{
 struct key *VAR_2 = FUNC_2(VAR_0);
 time64_t *VAR_3 = VAR_1;

 if (FUNC_1(VAR_2, *VAR_3))
  return 0;
 FUNC_0(VAR_2);
 return 1;
}
