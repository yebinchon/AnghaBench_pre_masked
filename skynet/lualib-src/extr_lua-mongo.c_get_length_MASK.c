
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int document ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static inline uint32_t
FUNC_1(document VAR_0) {
 union {
  uint32_t v;
  uint8_t b[4];
 } VAR_1;
 FUNC_0(&VAR_1.v, VAR_0, 4);
 return VAR_1.b[0] | VAR_1.b[1] << 8 | VAR_1.b[2] << 16 | VAR_1.b[3] << 24;
}
