
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_2__ {int width; int height; int Bpp; int * data; } ;
typedef TYPE_1__ bitmap ;
typedef void* HBITMAP ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

HBITMAP FUNC_2(int VAR_1, int VAR_2, uint8* VAR_3)
{
  bitmap* VAR_4;

  VAR_4 = (bitmap*)FUNC_1(sizeof(bitmap));
  VAR_4->data = (uint8*)FUNC_1(VAR_1 * VAR_2 * VAR_0);
  VAR_4->width = VAR_1;
  VAR_4->height = VAR_2;
  VAR_4->Bpp = VAR_0;
  FUNC_0(VAR_4->data, VAR_3, VAR_1 * VAR_2 * VAR_0);
  return (void*)VAR_4;
}
