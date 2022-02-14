
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int * HKEY ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int,int **) ;
 int FUNC_3 (scalar_t__) ;
 char* FUNC_4 () ;
 int FUNC_5 (char*,char const*,char*) ;

__attribute__((used)) static __inline BOOL FUNC_6(HKEY VAR_6, const char* VAR_7)
{
 HKEY VAR_8 = ((void*)0);
 LONG VAR_9;

 if (FUNC_2(VAR_6, "SOFTWARE", 0, VAR_5|VAR_4, &VAR_8) != VAR_2) {
  return VAR_3;
 }

 VAR_9 = FUNC_1(VAR_8, VAR_7);
 if ((VAR_9 != VAR_2) && (VAR_9 != VAR_1)) {
  FUNC_3(VAR_9);
  FUNC_5("Failed to delete registry key HKCU\\Software\\%s: %s", VAR_7,
   (VAR_9 == VAR_0)?"Key is not empty":FUNC_4());
 }
 FUNC_0(VAR_8);
 return ((VAR_9 == VAR_2) || (VAR_9 == VAR_1));
}
