
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum kmod_test_case { ____Placeholder_kmod_test_case } kmod_test_case ;





__attribute__((used)) static const char *FUNC_0(enum kmod_test_case VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "TEST_KMOD_DRIVER";
 case 128:
  return "TEST_KMOD_FS_TYPE";
 default:
  return "invalid";
 }
}
