
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int LPCVOID ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__,scalar_t__,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

__attribute__((used)) static __inline DWORD FUNC_6(DWORD VAR_2, LPCVOID VAR_3, DWORD VAR_4,
          DWORD VAR_5, char* VAR_6, DWORD VAR_7, va_list *VAR_8)
{
 DWORD VAR_9 = 0, VAR_10 = VAR_0;

 FUNC_3(VAR_6, VAR_7);
 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_1, VAR_7, VAR_8);
 VAR_10 = FUNC_1();
 if ((VAR_9 != 0) && ((VAR_9 = FUNC_4(VAR_1, VAR_6, VAR_7)) == 0)) {
  VAR_10 = FUNC_1();
  VAR_9 = 0;
 }
 FUNC_5(VAR_6);
 FUNC_2(VAR_10);
 return VAR_9;
}
