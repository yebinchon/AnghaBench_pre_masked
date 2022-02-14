
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int fz_image_get_size_fn ;
typedef int fz_image_get_pixmap_fn ;
struct TYPE_7__ {int w; int h; int xres; int yres; int bpc; int n; int invert_cmyk_jpeg; int interpolate; int imagemask; float* colorkey; int use_decode; float* decode; int * mask; int use_colorkey; int colorspace; int * get_size; int * get_pixmap; int * drop_image; } ;
typedef TYPE_1__ fz_image ;
typedef int fz_drop_image_fn ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 TYPE_1__* FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,size_t) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_0 ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (float*,...) ;

fz_image *
FUNC_10(fz_context *VAR_1, int VAR_2, int VAR_3, int VAR_4, fz_colorspace *VAR_5,
  int VAR_6, int VAR_7, int VAR_8, int VAR_9, float *VAR_10,
  int *VAR_11, fz_image *VAR_12, size_t VAR_13,
  fz_image_get_pixmap_fn *VAR_14,
  fz_image_get_size_fn *VAR_15,
  fz_drop_image_fn *VAR_16)
{
 fz_image *VAR_17;
 int VAR_18;

 FUNC_2(VAR_12 == ((void*)0) || VAR_12->mask == ((void*)0));
 FUNC_2(VAR_13 >= sizeof(fz_image));

 VAR_17 = FUNC_1(FUNC_3(VAR_1, 1, VAR_13), "fz_image");
 FUNC_0(VAR_17, 1, VAR_0);
 VAR_17->drop_image = VAR_16;
 VAR_17->get_pixmap = VAR_14;
 VAR_17->get_size = VAR_15;
 VAR_17->w = VAR_2;
 VAR_17->h = VAR_3;
 VAR_17->xres = VAR_6;
 VAR_17->yres = VAR_7;
 VAR_17->bpc = VAR_4;
 VAR_17->n = (VAR_5 ? FUNC_6(VAR_1, VAR_5) : 1);
 VAR_17->colorspace = FUNC_7(VAR_1, VAR_5);
 VAR_17->invert_cmyk_jpeg = 1;
 VAR_17->interpolate = VAR_8;
 VAR_17->imagemask = VAR_9;
 VAR_17->use_colorkey = (VAR_11 != ((void*)0));
 if (VAR_11)
  FUNC_9(VAR_17->colorkey, VAR_11, sizeof(int)*VAR_17->n*2);
 VAR_17->use_decode = 0;
 if (VAR_10)
 {
  FUNC_9(VAR_17->decode, VAR_10, sizeof(float)*VAR_17->n*2);
 }
 else
 {
  float VAR_19 = FUNC_4(VAR_1, VAR_5) ? (1 << VAR_4) - 1 : 1;
  for (VAR_18 = 0; VAR_18 < VAR_17->n; VAR_18++)
  {
   VAR_17->decode[2*VAR_18] = 0;
   VAR_17->decode[2*VAR_18+1] = VAR_19;
  }
 }



 if (FUNC_5(VAR_1, VAR_5))
 {

  VAR_17->decode[0] = VAR_17->decode[0]/100.0f;
  VAR_17->decode[1] = VAR_17->decode[1]/100.0f;
  VAR_17->decode[2] = (VAR_17->decode[2]+128)/255.0f;
  VAR_17->decode[3] = (VAR_17->decode[3]+128)/255.0f;
  VAR_17->decode[4] = (VAR_17->decode[4]+128)/255.0f;
  VAR_17->decode[5] = (VAR_17->decode[5]+128)/255.0f;
 }
 for (VAR_18 = 0; VAR_18 < VAR_17->n; VAR_18++)
 {
  if (VAR_17->decode[VAR_18 * 2] != 0 || VAR_17->decode[VAR_18 * 2 + 1] != 1)
   break;
 }
 if (VAR_18 != VAR_17->n)
  VAR_17->use_decode = 1;
 VAR_17->mask = FUNC_8(VAR_1, VAR_12);

 return VAR_17;
}
