
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (int ,char*,char const*,scalar_t__,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(uint32_t VAR_1, uint32_t VAR_2, const char* VAR_3) {
  if (VAR_1 != VAR_2) {
    FUNC_0(VAR_0, "%s: %ld vs %ld\n", VAR_3, VAR_1, VAR_2);
    return 0;
  }
  return 1;
}
