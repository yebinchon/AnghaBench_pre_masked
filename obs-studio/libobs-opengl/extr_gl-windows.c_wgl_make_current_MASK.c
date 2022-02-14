
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HGLRC ;
typedef int HDC ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_3(HDC VAR_1, HGLRC VAR_2)
{
 bool VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  FUNC_1(VAR_0,
       "wglMakeCurrent failed, GetLastError "
       "returned %lu",
       FUNC_0());

 return VAR_3;
}
