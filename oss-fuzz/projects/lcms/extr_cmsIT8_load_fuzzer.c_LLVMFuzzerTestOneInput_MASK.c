
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ cmsHANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,void*,size_t) ;

int FUNC_2(const uint8_t *VAR_0, size_t VAR_1) {
  if (VAR_1 == 0)
    return 0;

  cmsHANDLE VAR_2 = FUNC_1(0, (void *)VAR_0, VAR_1);
  if (VAR_2)
    FUNC_0(VAR_2);

  return 0;
}
