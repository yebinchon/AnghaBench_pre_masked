
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int x; int y; int* data; scalar_t__ pixmap; } ;
typedef TYPE_1__ fz_glyph ;


 int FUNC_0 (char,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;

void
FUNC_2(fz_glyph *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1->pixmap)
 {
  FUNC_1("pixmap glyph\n");
  return;
 }
 FUNC_1("glyph: %dx%d @ (%d,%d)\n", VAR_1->w, VAR_1->h, VAR_1->x, VAR_1->y);

 for (VAR_3 = 0; VAR_3 < VAR_1->h; VAR_3++)
 {
  int VAR_4 = ((int *)(VAR_1->data))[VAR_3];
  if (VAR_4 >= 0)
  {
   int VAR_5 = 0;
   int VAR_6 = 0;
   VAR_2 = VAR_1->w;
   do
   {
    int VAR_7 = VAR_1->data[VAR_4++];
    int VAR_8;
    char VAR_9;
    switch(VAR_7&3)
    {
    case 0:
     VAR_5 = VAR_7>>2;
     VAR_8 = 0;
     break;
    case 1:
     VAR_8 = 1 + (VAR_7>>2) + (VAR_5<<6);
     VAR_5 = 0;
     VAR_9 = '.';
     break;
    case 2:
     VAR_8 = 1 + (VAR_7>>3) + (VAR_5<<5);
     VAR_5 = 0;
     VAR_6 = VAR_7 & 4;
     VAR_9 = (VAR_6 ? '$' :'#');
     break;
    default:
     VAR_8 = 1 + (VAR_7>>3) + (VAR_5<<5);
     VAR_5 = 0;
     VAR_4 += VAR_8;
     VAR_6 = VAR_7 & 4;
     VAR_9 = (VAR_6 ? '!' : '?');
     break;
    }
    VAR_2 -= VAR_8;
    while (VAR_8--)
     FUNC_0(VAR_9, VAR_0);
    if (VAR_6)
     break;
   }
   while (VAR_2 > 0);
  }
  FUNC_1("\n");
 }
}
