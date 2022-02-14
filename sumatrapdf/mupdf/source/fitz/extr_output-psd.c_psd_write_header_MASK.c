
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int w; int h; int s; int n; int alpha; int xres; int yres; int * seps; int * out; } ;
struct TYPE_13__ {int num_additive; TYPE_1__ super; } ;
typedef TYPE_4__ psd_band_writer ;
typedef int fz_separations ;
typedef int fz_output ;
typedef int fz_context ;
struct TYPE_11__ {int buffer; } ;
struct TYPE_12__ {TYPE_2__ icc; } ;
struct TYPE_14__ {int n; TYPE_3__ u; } ;
typedef TYPE_5__ fz_colorspace ;
typedef int fz_band_writer ;


 size_t FUNC_0 (int *,int ,unsigned char**) ;
 int FUNC_1 (int *,TYPE_5__*) ;
 int VAR_0 ;
 TYPE_5__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,TYPE_5__*,float*,int *,int ) ;
 char* FUNC_4 (int *,int *,int) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,...) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int *,int) ;
 size_t FUNC_10 (char const*) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_1, fz_band_writer *VAR_2, fz_colorspace *VAR_3)
{
 psd_band_writer *VAR_4 = (psd_band_writer *)(void *)VAR_2;
 fz_output *VAR_5 = VAR_4->super.out;
 int VAR_6 = VAR_4->super.w;
 int VAR_7 = VAR_4->super.h;
 int VAR_8 = VAR_4->super.s;
 int VAR_9 = VAR_4->super.n;
 int VAR_10 = VAR_9 - VAR_4->super.alpha - VAR_8;
 fz_separations *VAR_11 = VAR_4->super.seps;
 int VAR_12;
 size_t VAR_13;
 static const char VAR_14[12] = { '8', 'B', 'P', 'S', 0, 1, 0, 0, 0, 0, 0, 0 };
 static const char VAR_15[4] = { '8', 'B', 'I', 'M' };
 unsigned char *VAR_16;
 size_t VAR_17;
 fz_colorspace *VAR_18 = VAR_3;




 VAR_17 = 0;
 VAR_16 = ((void*)0);


 if (VAR_3->n != 4)
  VAR_18 = FUNC_2(VAR_1);

 if (!FUNC_1(VAR_1, VAR_3))
  VAR_4->num_additive = VAR_3->n;


 FUNC_7(VAR_1, VAR_5, VAR_14, 12);
 FUNC_8(VAR_1, VAR_5, VAR_9);
 FUNC_9(VAR_1, VAR_5, VAR_7);
 FUNC_9(VAR_1, VAR_5, VAR_6);
 FUNC_8(VAR_1, VAR_5, 8);

 switch (VAR_10)
 {
 case 0:
 case 1:
  FUNC_8(VAR_1, VAR_5, 1);
  break;
 case 3:
  FUNC_8(VAR_1, VAR_5, 3);
  break;
 case 4:
  FUNC_8(VAR_1, VAR_5, 4);
  break;
 default:
  FUNC_8(VAR_1, VAR_5, 7);
  break;
 }


 FUNC_9(VAR_1, VAR_5, 0);



 VAR_13 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
 {
  const char *VAR_19 = FUNC_4(VAR_1, VAR_11, VAR_12);
  char VAR_20[32];
  size_t VAR_21;
  if (VAR_19 == ((void*)0))
  {
   FUNC_5(VAR_20, sizeof VAR_20, "Spot%d", VAR_12-4);
   VAR_19 = VAR_20;
  }
  VAR_21 = FUNC_10(VAR_19);
  if (VAR_21 > 255)
   VAR_21 = 255;
  VAR_13 += VAR_21 + 1;
 }


 FUNC_9(VAR_1, VAR_5,
   (VAR_8 ? 12 + ((VAR_13 + 1)&~1) : 0) +
   (VAR_8 ? 12 + (14 * VAR_8) : 0) +
   28 +
   (VAR_17 ? (VAR_17+19)&~1 : 0));


 if (VAR_8 != 0)
 {
  FUNC_7(VAR_1, VAR_5, VAR_15, 4);
  FUNC_8(VAR_1, VAR_5, 0x03EE);
  FUNC_8(VAR_1, VAR_5, 0);
  FUNC_9(VAR_1, VAR_5, (VAR_13 + 1)&~1);
  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
   size_t VAR_22;
   const char *VAR_23 = FUNC_4(VAR_1, VAR_11, VAR_12);
   char VAR_24[32];
   if (VAR_23 == ((void*)0))
   {
    FUNC_5(VAR_24, sizeof VAR_24, "Spot%d", VAR_12-4);
    VAR_23 = VAR_24;
   }
   VAR_22 = FUNC_10(VAR_23);
   if (VAR_22 > 255)
    VAR_22 = 255;
   FUNC_6(VAR_1, VAR_5, VAR_22);
   FUNC_7(VAR_1, VAR_5, VAR_23, VAR_22);
  }
  if (VAR_13 & 1)
  {
   FUNC_6(VAR_1, VAR_5, 0);
  }


  FUNC_7(VAR_1, VAR_5, VAR_15, 4);
  FUNC_8(VAR_1, VAR_5, 0x03EF);
  FUNC_8(VAR_1, VAR_5, 0);
  FUNC_9(VAR_1, VAR_5, 14 * VAR_8);
  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
   float VAR_25[4];
   FUNC_3(VAR_1, VAR_11, VAR_12, VAR_18, VAR_25, ((void*)0), VAR_0);
   FUNC_8(VAR_1, VAR_5, 02);

   FUNC_8(VAR_1, VAR_5, 65535 * (1-VAR_25[0]));
   FUNC_8(VAR_1, VAR_5, 65535 * (1-VAR_25[1]));
   FUNC_8(VAR_1, VAR_5, 65535 * (1-VAR_25[2]));
   FUNC_8(VAR_1, VAR_5, 65535 * (1-VAR_25[3]));
   FUNC_8(VAR_1, VAR_5, 0);
   FUNC_6(VAR_1, VAR_5, 2);
   FUNC_6(VAR_1, VAR_5, 0);
  }
 }


 if (VAR_17 != 0)
 {

  FUNC_7(VAR_1, VAR_5, VAR_15, 4);
  FUNC_8(VAR_1, VAR_5, 0x40f);
  FUNC_7(VAR_1, VAR_5, "\x07Profile", 8);
  FUNC_9(VAR_1, VAR_5, VAR_17);
  FUNC_7(VAR_1, VAR_5, VAR_16, VAR_17);
  if (VAR_17 & 1)
   FUNC_6(VAR_1, VAR_5, 0);
 }


 FUNC_7(VAR_1, VAR_5, VAR_15, 4);
 FUNC_8(VAR_1, VAR_5, 0x03ED);
 FUNC_8(VAR_1, VAR_5, 0);
 FUNC_9(VAR_1, VAR_5, 16);

 FUNC_9(VAR_1, VAR_5, VAR_4->super.xres);
 FUNC_8(VAR_1, VAR_5, 1);
 FUNC_8(VAR_1, VAR_5, 1);
 FUNC_9(VAR_1, VAR_5, VAR_4->super.yres);
 FUNC_8(VAR_1, VAR_5, 1);
 FUNC_8(VAR_1, VAR_5, 1);


 FUNC_9(VAR_1, VAR_5, 0);


 FUNC_8(VAR_1, VAR_5, 0);
}
