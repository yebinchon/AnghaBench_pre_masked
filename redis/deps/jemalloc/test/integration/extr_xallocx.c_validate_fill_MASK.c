
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint8_t ;


 int FUNC_0 (void const*,scalar_t__ const,size_t) ;

__attribute__((used)) static bool
FUNC_1(const void *VAR_0, uint8_t VAR_1, size_t VAR_2, size_t VAR_3) {
 const uint8_t *VAR_4 = (const uint8_t *)VAR_0;
 bool VAR_5;
 size_t VAR_6;

 for (VAR_6 = VAR_2, VAR_5 = 0; VAR_6 < VAR_2+VAR_3; VAR_6++) {
  if (VAR_4[VAR_6] != VAR_1) {
   VAR_5 = 1;
  }
 }

 if (VAR_5) {
  FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_3);
 }

 return VAR_5;
}
