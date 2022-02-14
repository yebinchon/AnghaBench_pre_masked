
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WPARAM ;
typedef int RDebug ;
typedef int PVOID ;
typedef int HANDLE ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,scalar_t__*,int,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static bool FUNC_5(RDebug *VAR_2, HANDLE VAR_3, bool VAR_4, WPARAM *VAR_5) {
 FUNC_3 (VAR_2, 0);
 WPARAM VAR_6;

 if (!FUNC_0 (VAR_2, VAR_3)) {
  *VAR_5 = 0;
  return 0;
 }

 if (VAR_4) {
  VAR_6 = VAR_0 + sizeof (WPARAM);
 } else {
  VAR_6 = VAR_1;
 }
 if (!FUNC_1 (VAR_3, (PVOID)VAR_6, VAR_5, sizeof (WPARAM), ((void*)0))) {
  FUNC_4 ("ReadProcessMemory");
  FUNC_2 ("LFH key not found.\n");
  *VAR_5 = 0;
  return 0;
 }
 return 1;
}
