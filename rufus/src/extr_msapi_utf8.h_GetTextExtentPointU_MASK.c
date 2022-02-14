
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPSIZE ;
typedef int HDC ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;
 int * VAR_2 ;

__attribute__((used)) static __inline BOOL FUNC_6(HDC VAR_3, const char* VAR_4, LPSIZE VAR_5)
{
 BOOL VAR_6 = VAR_1;
 DWORD VAR_7 = VAR_0;
 FUNC_3(VAR_4);
 if (VAR_2 == ((void*)0))
  return VAR_1;
 VAR_6 = FUNC_1(VAR_3, VAR_2, (int)FUNC_4(VAR_2), VAR_5);
 VAR_7 = FUNC_0();
 FUNC_5(VAR_4);
 FUNC_2(VAR_7);
 return VAR_6;
}
