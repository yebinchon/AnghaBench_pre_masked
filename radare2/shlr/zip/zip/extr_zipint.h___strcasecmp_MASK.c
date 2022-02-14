
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_0, const char *VAR_1) {
 int VAR_2, VAR_3;
 for(;;) {
  VAR_2 = FUNC_0 ( (unsigned char) *VAR_0++ );
  VAR_3 = FUNC_0 ( (unsigned char) *VAR_1++ );
  if (VAR_2 == 0 || VAR_2 != VAR_3)
   return VAR_2 - VAR_3;
 }
}
