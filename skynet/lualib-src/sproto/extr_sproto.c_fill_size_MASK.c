
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(uint8_t * VAR_1, int VAR_2) {
 VAR_1[0] = VAR_2 & 0xff;
 VAR_1[1] = (VAR_2 >> 8) & 0xff;
 VAR_1[2] = (VAR_2 >> 16) & 0xff;
 VAR_1[3] = (VAR_2 >> 24) & 0xff;
 return VAR_2 + VAR_0;
}
