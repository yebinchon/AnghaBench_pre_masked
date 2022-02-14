
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct key {int dummy; } ;


 int FUNC_0 (struct key const*) ;
 int FUNC_1 (struct key const*,int ) ;
 struct key* FUNC_2 (void const*) ;

__attribute__((used)) static int FUNC_3(const void *VAR_0, void *VAR_1)
{
 const struct key *VAR_2 = FUNC_2(VAR_0);
 time64_t *VAR_3 = VAR_1;

 FUNC_0(VAR_2);
 return FUNC_1(VAR_2, *VAR_3);
}
