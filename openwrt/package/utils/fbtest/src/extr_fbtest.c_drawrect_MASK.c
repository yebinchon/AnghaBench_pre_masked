
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vidsize {int width; } ;
struct rect {int width; int y; int x; int height; TYPE_1__* col; } ;
struct pixelformat {int pixenum; int bpp; } ;
struct pixel {int* byte; } ;
struct TYPE_2__ {int r; } ;







 int FUNC_0 (struct pixel*,struct pixelformat const*,TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,int*,int) ;
 int FUNC_3 (char*,int,int) ;

void FUNC_4(void *VAR_0, struct rect *VAR_1, const struct pixelformat *VAR_2, const struct vidsize *VAR_3){
 int VAR_4,VAR_5,VAR_6, VAR_7 = 0, VAR_8 = 1;
 struct pixel VAR_9;
 unsigned char *VAR_10 = VAR_0;
 VAR_6 = VAR_1->width;

 if (VAR_2->pixenum!=130&&VAR_2->pixenum!=129){
  switch (VAR_2->pixenum){
   case 131:
   case 128:
    VAR_7 = 16;
    VAR_8 = 2;
    break;
   case 132:
    VAR_7 = 32;
    VAR_8 = 4;
    break;
   default:
    FUNC_3 ("drawrect: unknown pixelformat(%d) bpp:%d\n",VAR_2->pixenum,VAR_2->bpp);
    FUNC_1(1);
  }
  FUNC_0(&VAR_9,VAR_2,VAR_1->col);
 } else {
  switch (VAR_2->pixenum){
   case 130:
    VAR_9.byte[0]=(VAR_1->col->r)<<4|(VAR_1->col->r&0xf);
    VAR_6>>=1;
    VAR_7=4;
    VAR_8=1;
    break;
   case 129:
    VAR_9.byte[0]=(VAR_1->col->r&0xff);
    VAR_7=8;
    VAR_8=1;
    break;
  }
 }
 VAR_10=VAR_0+((((VAR_1->y*VAR_3->width)+VAR_1->x)*VAR_7)>>3);
 for (VAR_5=0;VAR_5<VAR_1->height;VAR_5++){
  int VAR_11 = 0;
  for (VAR_4=0;VAR_4<VAR_6;VAR_4++){
   FUNC_2 (VAR_10+VAR_11,VAR_9.byte,VAR_8);
   VAR_11+=VAR_8;
  }
  VAR_10 +=((VAR_3->width*VAR_7)>>3);
 }
}
