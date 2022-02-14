
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline bool FUNC_2(HANDLE VAR_0)
{
 BOOL VAR_1 = 1;
 if (FUNC_1()) {
  bool VAR_2 = !!FUNC_0(VAR_0, &VAR_1);
  if (!VAR_2) {
   return 0;
  }
 }

 return !VAR_1;
}
