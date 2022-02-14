
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(uint32_t VAR_1, uint32_t VAR_2, int VAR_3) {
  if (VAR_3) {
    const int VAR_4 = (VAR_1 >> 24) & 0xff;
    const int VAR_5 = (VAR_2 >> 24) & 0xff;
    if (VAR_4 == 0 && VAR_5 == 0) return 1;
  }
  if (VAR_1 != VAR_2) {
    FUNC_0(VAR_0, "Background color mismatch: 0x%08x vs 0x%08x\n",
            VAR_1, VAR_2);
    return 0;
  }
  return 1;
}
