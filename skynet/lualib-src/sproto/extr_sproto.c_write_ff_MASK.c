
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int const*,int) ;

__attribute__((used)) static inline void
FUNC_1(const uint8_t * VAR_0, uint8_t * VAR_1, int VAR_2) {
 int VAR_3;
 int VAR_4 = (VAR_2+7)&(~7);

 VAR_1[0] = 0xff;
 VAR_1[1] = VAR_4/8 - 1;
 FUNC_0(VAR_1+2, VAR_0, VAR_2);
 for(VAR_3=0; VAR_3< VAR_4-VAR_2; VAR_3++){
  VAR_1[VAR_2+2+VAR_3] = 0;
 }
}
