
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int cairo_t ;


 int FUNC_0 (int *,int,int,int,int) ;

void FUNC_1(cairo_t *VAR_0, uint32_t VAR_1) {
 FUNC_0(VAR_0,
   (VAR_1 >> (3*8) & 0xFF) / 255.0,
   (VAR_1 >> (2*8) & 0xFF) / 255.0,
   (VAR_1 >> (1*8) & 0xFF) / 255.0,
   (VAR_1 >> (0*8) & 0xFF) / 255.0);
}
