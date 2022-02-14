
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pixelformat {int pixenum; } ;
struct pixel {int* byte; } ;
struct colour {int r; int g; int b; int a; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

void FUNC_2 (struct pixel *VAR_0, const struct pixelformat *VAR_1, const struct colour *VAR_2){
 switch (VAR_1->pixenum){
  case 128:
   VAR_0->byte[0]=(VAR_2->r&0xf8)|(VAR_2->g&0xfc)>>5;
   VAR_0->byte[1]=(VAR_2->g&0xfc)<<3|(VAR_2->b&0xf8)>>3;
   break;
  case 129:
   VAR_0->byte[0]=(VAR_2->a&0x80)|(VAR_2->r&0xf8)>>1|(VAR_2->g&0xf8)>>6;
   VAR_0->byte[1]=(VAR_2->g&0xf8)<<2|(VAR_2->b&0xf8)>>3;
   break;
  case 130:
   VAR_0->byte[0]=VAR_2->a;
   VAR_0->byte[1]=VAR_2->r;
   VAR_0->byte[2]=VAR_2->g;
   VAR_0->byte[3]=VAR_2->b;
   break;
  default:
   FUNC_1 ("unknown pixelformat\n");
   FUNC_0(1);
 }
}
