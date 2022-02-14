
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int * gdImagePtr ;
typedef int gdIOCtxPtr ;
struct TYPE_14__ {int magic; int numcolors; int width; int height; int numplanes; int depth; int off; } ;
typedef TYPE_1__ bmp_info_t ;
typedef TYPE_1__ bmp_hdr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int *,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int *,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int *,int ,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (int,int) ;
 int * FUNC_10 (int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,...) ;

gdImagePtr FUNC_13(gdIOCtxPtr VAR_0)
{
 bmp_hdr_t *VAR_1;
 bmp_info_t *VAR_2;
 gdImagePtr VAR_3 = ((void*)0);
 int VAR_4 = 0;

 if (!(VAR_1= (bmp_hdr_t *)FUNC_7(1, sizeof(bmp_hdr_t)))) {
  return ((void*)0);
 }

 if (FUNC_5(VAR_0, VAR_1)) {
  FUNC_8(VAR_1);
  return ((void*)0);
 }

 if (VAR_1->magic != 0x4d42) {
  FUNC_8(VAR_1);
  return ((void*)0);
 }

 if (!(VAR_2 = (bmp_info_t *)FUNC_7(1, sizeof(bmp_info_t)))) {
  FUNC_8(VAR_1);
  return ((void*)0);
 }

 if (FUNC_6(VAR_0, VAR_2)) {
  FUNC_8(VAR_1);
  FUNC_8(VAR_2);
  return ((void*)0);
 }

 FUNC_0(FUNC_12("Numcolours: %d\n", VAR_2->numcolors));
 FUNC_0(FUNC_12("Width: %d\n", VAR_2->width));
 FUNC_0(FUNC_12("Height: %d\n", VAR_2->height));
 FUNC_0(FUNC_12("Planes: %d\n", VAR_2->numplanes));
 FUNC_0(FUNC_12("Depth: %d\n", VAR_2->depth));
 FUNC_0(FUNC_12("Offset: %d\n", VAR_1->off));

 if (VAR_2->depth >= 16) {
  VAR_3 = FUNC_10(VAR_2->width, VAR_2->height);
 } else {
  VAR_3 = FUNC_9(VAR_2->width, VAR_2->height);
 }

 if (!VAR_3) {
  FUNC_8(VAR_1);
  FUNC_8(VAR_2);
  return ((void*)0);
 }

 switch (VAR_2->depth) {
 case 1:
  FUNC_0(FUNC_12("1-bit image\n"));
  VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_2, VAR_1);
  break;
 case 4:
  FUNC_0(FUNC_12("4-bit image\n"));
  VAR_4 = FUNC_2(VAR_3, VAR_0, VAR_2, VAR_1);
  break;
 case 8:
  FUNC_0(FUNC_12("8-bit image\n"));
  VAR_4 = FUNC_3(VAR_3, VAR_0, VAR_2, VAR_1);
  break;
 case 16:
 case 24:
 case 32:
  FUNC_0(FUNC_12("Direct BMP image\n"));
  VAR_4 = FUNC_4(VAR_3, VAR_0, VAR_2, VAR_1);
  break;
 default:
  FUNC_0(FUNC_12("Unknown bit count\n"));
  VAR_4 = 1;
 }

 FUNC_8(VAR_1);
 FUNC_8(VAR_2);

 if (VAR_4) {
  FUNC_11(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
