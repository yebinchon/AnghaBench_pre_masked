
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(off_t VAR_4, uint32_t VAR_5)
{
 if (!FUNC_0(VAR_4)) {
  return 0;
 }
 if (FUNC_2(VAR_4)) {
  return 0;
 }
 if (FUNC_4(VAR_2, 0x00) != VAR_0) {
  FUNC_1(VAR_3, "Warning: block without magic header. Skipping block\n");
  return 0;
 }
 if (FUNC_3(VAR_2, 0x0c) != VAR_1) {
  FUNC_1(VAR_3, "Warning: block with wrong number of sectors per page. Skipping block\n");
  return 0;
 }

 uint32_t VAR_6 = FUNC_3(VAR_2, 0x0c);
 for (uint32_t VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  uint32_t VAR_8 = VAR_5 + FUNC_4(VAR_2, 0x1c + sizeof(uint64_t)*VAR_7);
  FUNC_5(VAR_8);
 }

 return 1;
}
