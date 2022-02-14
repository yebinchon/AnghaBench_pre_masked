
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int fdt64_t ;
typedef int fdt32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*,int,char const*,int *,int) ;
 int FUNC_4 (void*,int) ;

int FUNC_5(void *VAR_3, int VAR_4, int VAR_5,
        const char *VAR_6, uint64_t VAR_7, uint64_t VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 uint8_t VAR_12[sizeof(fdt64_t) * 2], *VAR_13;

 VAR_11 = FUNC_2(VAR_3, VAR_4);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_9 = VAR_11;

 VAR_11 = FUNC_4(VAR_3, VAR_4);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_10 = VAR_11;


 VAR_13 = VAR_12;
 if (VAR_9 == 1) {
  if ((VAR_7 > VAR_2) || ((VAR_2 + 1 - VAR_7) < VAR_8))
   return -VAR_1;

  FUNC_0(VAR_13, (uint32_t)VAR_7);
 } else if (VAR_9 == 2) {
  FUNC_1(VAR_13, VAR_7);
 } else {
  return -VAR_0;
 }


 VAR_13 += VAR_9 * sizeof(fdt32_t);
 if (VAR_10 == 1) {
  if (VAR_8 > VAR_2)
   return -VAR_1;

  FUNC_0(VAR_13, (uint32_t)VAR_8);
 } else if (VAR_10 == 2) {
  FUNC_1(VAR_13, VAR_8);
 } else {
  return -VAR_0;
 }

 return FUNC_3(VAR_3, VAR_5, VAR_6, VAR_12,
         (VAR_9 + VAR_10) * sizeof(fdt32_t));
}
