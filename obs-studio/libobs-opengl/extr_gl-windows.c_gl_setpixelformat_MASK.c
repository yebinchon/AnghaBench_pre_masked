
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PIXELFORMATDESCRIPTOR ;
typedef int HDC ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static inline bool FUNC_3(HDC VAR_1, int VAR_2,
         PIXELFORMATDESCRIPTOR *VAR_3)
{
 if (!FUNC_1(VAR_1, VAR_2, VAR_3)) {
  FUNC_2(VAR_0, "SetPixelFormat failed, %lu", FUNC_0());
  return 0;
 }

 return 1;
}
