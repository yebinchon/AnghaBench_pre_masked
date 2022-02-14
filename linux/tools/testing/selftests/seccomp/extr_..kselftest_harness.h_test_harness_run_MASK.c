
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __test_metadata {scalar_t__ passed; struct __test_metadata* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct __test_metadata*) ;
 int VAR_1 ;
 struct __test_metadata* VAR_2 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(int __attribute__((unused)) VAR_3,
       char __attribute__((unused)) **VAR_4)
{
 struct __test_metadata *VAR_5;
 int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;


 FUNC_1("[==========] Running %u tests from %u test cases.\n",
        VAR_1, VAR_0 + 1);
 for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next) {
  VAR_7++;
  FUNC_0(VAR_5);
  if (VAR_5->passed)
   VAR_8++;
  else
   VAR_6 = 1;
 }
 FUNC_1("[==========] %u / %u tests passed.\n", VAR_8, VAR_7);
 FUNC_1("[  %s  ]\n", (VAR_6 ? "FAILED" : "PASSED"));
 return VAR_6;
}
