
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_key {int init_state; int (* test_key ) () ;int key; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct test_key *VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4;
 bool VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1[VAR_4].key);
  VAR_6 = VAR_1[VAR_4].init_state;
  if (VAR_5 != (VAR_3 ? !VAR_6 : VAR_6))
   return -VAR_0;
  VAR_5 = VAR_1[VAR_4].test_key();
  if (FUNC_0(VAR_1[VAR_4].key)) {
   if (!VAR_5)
    return -VAR_0;
  } else {
   if (VAR_5)
    return -VAR_0;
  }
 }
 return 0;
}
