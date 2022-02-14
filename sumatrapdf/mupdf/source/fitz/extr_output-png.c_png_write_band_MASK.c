
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uInt ;
struct TYPE_7__ {scalar_t__ avail_out; void* next_out; void* avail_in; int * next_in; int zfree; int zalloc; int * opaque; } ;
struct TYPE_5__ {int w; int h; int n; scalar_t__ alpha; int * out; } ;
struct TYPE_6__ {unsigned char* udata; int usize; int csize; void* cdata; TYPE_3__ stream; TYPE_1__ super; } ;
typedef TYPE_2__ png_band_writer ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_band_writer ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,int *,char*,void*,int) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_9, fz_band_writer *VAR_10, int VAR_11, int VAR_12, int VAR_13, const unsigned char *VAR_14)
{
 png_band_writer *VAR_15 = (png_band_writer *)(void *)VAR_10;
 fz_output *VAR_16 = VAR_15->super.out;
 unsigned char *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25;

 if (!VAR_16)
  return;

 VAR_23 = VAR_15->super.w;
 VAR_24 = VAR_15->super.h;
 VAR_25 = VAR_15->super.n;

 VAR_22 = (VAR_12+VAR_13 >= VAR_24);
 if (VAR_22)
  VAR_13 = VAR_24 - VAR_12;

 if (VAR_15->udata == ((void*)0))
 {
  VAR_15->usize = (VAR_23 * VAR_25 + 1) * VAR_13;





  VAR_15->csize = FUNC_0(VAR_15->usize);
  VAR_15->udata = FUNC_3(VAR_9, VAR_15->usize);
  VAR_15->cdata = FUNC_3(VAR_9, VAR_15->csize);
  VAR_15->stream.opaque = VAR_9;
  VAR_15->stream.zalloc = VAR_7;
  VAR_15->stream.zfree = VAR_8;
  VAR_21 = FUNC_2(&VAR_15->stream, VAR_2);
  if (VAR_21 != VAR_5)
   FUNC_4(VAR_9, VAR_0, "compression error %d", VAR_21);
 }

 VAR_17 = VAR_15->udata;
 VAR_11 -= VAR_23*VAR_25;
 if (VAR_15->super.alpha)
 {

  for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
  {
   int VAR_26[VAR_1];
   *VAR_17++ = 1;
   for (VAR_19 = 0; VAR_19 < VAR_23; VAR_19++)
   {
    int VAR_27 = VAR_14[VAR_25-1];
    int VAR_28 = VAR_27 ? 256*255/VAR_27 : 0;
    int VAR_29;
    for (VAR_20 = 0; VAR_20 < VAR_25-1; VAR_20++)
    {
     int VAR_30 = (VAR_14[VAR_20] * VAR_28 + 128)>>8;
     VAR_29 = VAR_19 ? VAR_26[VAR_20] : 0;
     VAR_26[VAR_20] = VAR_30;
     VAR_30 -= VAR_29;
     VAR_17[VAR_20] = VAR_30;
    }
    VAR_29 = VAR_19 ? VAR_26[VAR_20] : 0;
    VAR_26[VAR_20] = VAR_27;
    VAR_27 -= VAR_29;
    VAR_17[VAR_20] = VAR_27;
    VAR_14 += VAR_25;
    VAR_17 += VAR_25;
   }
   VAR_14 += VAR_11;
  }
 }
 else
 {
  for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
  {
   *VAR_17++ = 1;
   for (VAR_19 = 0; VAR_19 < VAR_23; VAR_19++)
   {
    for (VAR_20 = 0; VAR_20 < VAR_25; VAR_20++)
    {
     if (VAR_19 == 0)
      VAR_17[VAR_20] = VAR_14[VAR_20];
     else
      VAR_17[VAR_20] = VAR_14[VAR_20] - VAR_14[VAR_20-VAR_25];
    }
    VAR_14 += VAR_25;
    VAR_17 += VAR_25;
   }
   VAR_14 += VAR_11;
  }
 }

 VAR_15->stream.next_in = (Bytef*)VAR_15->udata;
 VAR_15->stream.avail_in = (uInt)(VAR_17 - VAR_15->udata);
 do
 {
  VAR_15->stream.next_out = VAR_15->cdata;
  VAR_15->stream.avail_out = (uInt)VAR_15->csize;

  if (!VAR_22)
  {
   VAR_21 = FUNC_1(&VAR_15->stream, VAR_4);
   if (VAR_21 != VAR_5)
    FUNC_4(VAR_9, VAR_0, "compression error %d", VAR_21);
  }
  else
  {
   VAR_21 = FUNC_1(&VAR_15->stream, VAR_3);
   if (VAR_21 != VAR_6)
    FUNC_4(VAR_9, VAR_0, "compression error %d", VAR_21);
  }

  if (VAR_15->stream.next_out != VAR_15->cdata)
   FUNC_5(VAR_9, VAR_16, "IDAT", VAR_15->cdata, VAR_15->stream.next_out - VAR_15->cdata);
 }
 while (VAR_15->stream.avail_out == 0);
}
