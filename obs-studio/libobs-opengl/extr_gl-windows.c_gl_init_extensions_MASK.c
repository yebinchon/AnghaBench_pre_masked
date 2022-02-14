
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(HDC VAR_4)
{
 if (!FUNC_1(VAR_4)) {
  FUNC_0(VAR_3, "Failed to load WGL entry functions.");
  return 0;
 }

 if (!VAR_2) {
  FUNC_2("ARB_pixel_format");
  return 0;
 }

 if (!VAR_0) {
  FUNC_2("ARB_create_context");
  return 0;
 }

 if (!VAR_1) {
  FUNC_2("ARB_create_context_profile");
  return 0;
 }

 return 1;
}
