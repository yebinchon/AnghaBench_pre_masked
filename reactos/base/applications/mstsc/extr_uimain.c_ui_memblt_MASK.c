
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct bitmap {int height; int width; int data; } ;


 int FUNC_0 (int ,int,int,int,int,int ,int ,int ,int,int) ;
 int FUNC_1 (int,int,int,int) ;

void
FUNC_2(uint8 VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
          void * VAR_5, int VAR_6, int VAR_7)
{
  struct bitmap* VAR_8;

  VAR_8 = (struct bitmap*)VAR_5;
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_8->data, VAR_8->width, VAR_8->height,
            VAR_6, VAR_7);
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
