
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_key {struct static_key* key; } ;
struct static_key {int dummy; } ;


 int FUNC_0 (struct static_key*) ;

__attribute__((used)) static void FUNC_1(struct test_key *VAR_0, int VAR_1)
{
 struct static_key *VAR_2 = ((void*)0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2 != VAR_0[VAR_3].key) {
   FUNC_0(VAR_0[VAR_3].key);
   VAR_2 = VAR_0[VAR_3].key;
  }
 }
}
