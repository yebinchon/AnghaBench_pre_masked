
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HGLRC ;
typedef int HDC ;


 int FUNC_0 () ;
 int VAR_0 ;






 int FUNC_1 (int ,char*,int ) ;
 int * FUNC_2 (int ,int ,int const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static inline HGLRC FUNC_5(HDC VAR_1)
{
 static const int VAR_2[] = {




  128,
  133,
  130,
  3,
  129,
  3,
  0,
  0};

 HGLRC VAR_3 = FUNC_2(VAR_1, 0, VAR_2);
 if (!VAR_3) {
  FUNC_1(VAR_0,
       "wglCreateContextAttribsARB failed, "
       "%lu",
       FUNC_0());
  return ((void*)0);
 }

 if (!FUNC_4(VAR_1, VAR_3)) {
  FUNC_3(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
