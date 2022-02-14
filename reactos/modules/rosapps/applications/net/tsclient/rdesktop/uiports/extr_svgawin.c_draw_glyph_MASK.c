
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; int data; } ;
typedef TYPE_1__ bitmap ;
typedef scalar_t__ HGLYPH ;


 scalar_t__ FUNC_0 (int ,int,int,int,int) ;
 int FUNC_1 (int,int,int,int) ;

void FUNC_2 (int VAR_0, int VAR_1, HGLYPH VAR_2, int VAR_3)
{
  bitmap* VAR_4;
  int VAR_5, VAR_6;

  VAR_4 = (bitmap*)VAR_2;
  if (VAR_4 == ((void*)0))
    return;
  for (VAR_5 = 0; VAR_5 < VAR_4->height; VAR_5++)
    for (VAR_6 = 0; VAR_6 < VAR_4->width; VAR_6++)
      if (FUNC_0(VAR_4->data, VAR_6, VAR_5, VAR_4->width, 8))
        FUNC_1(VAR_0 + VAR_6, VAR_1 + VAR_5, VAR_3, 0xc);
}
