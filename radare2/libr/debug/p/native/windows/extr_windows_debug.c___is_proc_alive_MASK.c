
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_2(HANDLE VAR_1) {
 if (VAR_1) {
  DWORD VAR_2;
  if (!FUNC_0 (VAR_1, &VAR_2)) {
   FUNC_1 (VAR_1, &VAR_2);
  }
  return VAR_2 == VAR_0;
 }
 return 0;
}
