
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* RTLNTSTATUSTODOSERRORFUNC ) (int ) ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(NTSTATUS VAR_0)
{
 static bool VAR_1 = 0;
 static RTLNTSTATUSTODOSERRORFUNC VAR_2 = ((void*)0);

 if (!VAR_1) {
  VAR_2 = (RTLNTSTATUSTODOSERRORFUNC)FUNC_1(
   "RtlNtStatusToDosError");
  VAR_1 = 1;
 }

 if (VAR_2)
  FUNC_0(VAR_2(VAR_0));
}
