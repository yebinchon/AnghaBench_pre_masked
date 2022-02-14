
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, unsigned VAR_1) {


  do {
    uint32_t VAR_2 = (uint32_t)((unsigned) VAR_0[3] << 8 | VAR_0[2]) << 16 |
                 ((unsigned) VAR_0[1] << 8 | VAR_0[0]);
    *(uint32_t *) VAR_0 = VAR_2;
    VAR_0 += 4;
  } while (--VAR_1);




}
