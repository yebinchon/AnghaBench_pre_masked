
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

__attribute__((used)) static __inline DWORD FUNC_6(HMODULE VAR_2, char* VAR_3, DWORD VAR_4)
{
 DWORD VAR_5 = 0, VAR_6 = VAR_0;

 FUNC_3(VAR_3, VAR_4);
 VAR_5 = FUNC_1(VAR_2, VAR_1, VAR_4);
 VAR_6 = FUNC_0();
 if ((VAR_5 != 0) && ((VAR_5 = FUNC_4(VAR_1, VAR_3, VAR_4)) == 0)) {
  VAR_6 = FUNC_0();
 }
 FUNC_5(VAR_3);
 FUNC_2(VAR_6);
 return VAR_5;
}
