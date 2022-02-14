
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int bmHeight; int bmWidth; int bmBitsPixel; } ;
typedef int HBITMAP ;
typedef TYPE_1__ BITMAP ;


 int FUNC_0 (int ,unsigned int,int *) ;
 scalar_t__ FUNC_1 (int ,int,TYPE_1__*) ;
 int * FUNC_2 (unsigned int) ;

__attribute__((used)) static uint8_t *FUNC_3(HBITMAP VAR_0, BITMAP *VAR_1)
{
 if (FUNC_1(VAR_0, sizeof(*VAR_1), VAR_1) != 0) {
  uint8_t *VAR_2;
  unsigned int VAR_3 =
   (VAR_1->bmHeight * VAR_1->bmWidth * VAR_1->bmBitsPixel) / 8;

  VAR_2 = FUNC_2(VAR_3);
  FUNC_0(VAR_0, VAR_3, VAR_2);
  return VAR_2;
 }

 return ((void*)0);
}
