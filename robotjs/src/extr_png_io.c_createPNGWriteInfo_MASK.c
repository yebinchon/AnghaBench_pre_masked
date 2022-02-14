
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t png_uint_32 ;
typedef int png_byte ;
struct TYPE_12__ {size_t const width; int height; int bytesPerPixel; size_t bytewidth; int * imageBuffer; } ;
struct TYPE_11__ {int blue; int green; int red; } ;
struct TYPE_10__ {int row_count; int free_row_pointers; int ** row_pointers; int * info_ptr; int * png_ptr; } ;
typedef TYPE_1__* PNGWriteInfoRef ;
typedef int PNGWriteInfo ;
typedef TYPE_2__ MMRGBColor ;
typedef TYPE_3__* MMBitmapRef ;


 size_t FUNC_0 (size_t const) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,size_t,size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int ,int *,int *,int *) ;
 int FUNC_7 (int **,int **) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int *,size_t const) ;
 int FUNC_10 (int *,int *,size_t,size_t,int,int ,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int **) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static PNGWriteInfoRef FUNC_14(MMBitmapRef VAR_6)
{
 PNGWriteInfoRef VAR_7 = FUNC_4(sizeof(PNGWriteInfo));
 png_uint_32 VAR_8;

 if (VAR_7 == ((void*)0)) return ((void*)0);
 VAR_7->png_ptr = ((void*)0);
 VAR_7->info_ptr = ((void*)0);
 VAR_7->row_pointers = ((void*)0);

 FUNC_2(VAR_6 != ((void*)0));


 VAR_7->png_ptr = FUNC_6(VAR_5,
                                         ((void*)0), ((void*)0), ((void*)0));
 if (VAR_7->png_ptr == ((void*)0)) goto bail;


 if (FUNC_13(FUNC_8(VAR_7->png_ptr))) {
  FUNC_7(&(VAR_7->png_ptr), &(VAR_7->info_ptr));
  goto bail;
 }


 VAR_7->info_ptr = FUNC_5(VAR_7->png_ptr);
 if (VAR_7->info_ptr == ((void*)0)) {
  FUNC_7(&(VAR_7->png_ptr), ((void*)0));
  goto bail;
 }


 FUNC_10(VAR_7->png_ptr,
              VAR_7->info_ptr,
              (png_uint_32)VAR_6->width,
              (png_uint_32)VAR_6->height,
              8,
              VAR_1,
              VAR_4,
              VAR_2,
              VAR_3);

 VAR_7->row_count = VAR_6->height;
 VAR_7->row_pointers = FUNC_9(VAR_7->png_ptr,
                                 sizeof(png_byte *) * VAR_7->row_count);

 if (VAR_6->bytesPerPixel == 3) {

  for (VAR_8 = 0; VAR_8 < VAR_7->row_count; ++VAR_8) {
   VAR_7->row_pointers[VAR_8] = VAR_6->imageBuffer + (VAR_6->bytewidth * VAR_8);
  }
  VAR_7->free_row_pointers = 0;


  if (VAR_0) {
   FUNC_11(VAR_7->png_ptr);
  }
 } else {

  const size_t VAR_9 = 3;
  const size_t VAR_10 = FUNC_0(VAR_6->width * VAR_9);

  for (VAR_8 = 0; VAR_8 < VAR_7->row_count; ++VAR_8) {
   png_uint_32 VAR_11;
   png_byte *VAR_12 = FUNC_9(VAR_7->png_ptr, VAR_10);
   VAR_7->row_pointers[VAR_8] = VAR_12;
   for (VAR_11 = 0; VAR_11 < VAR_6->width; ++VAR_11) {
    MMRGBColor *VAR_13 = FUNC_1(VAR_6, VAR_11, VAR_8);
    VAR_12[0] = VAR_13->red;
    VAR_12[1] = VAR_13->green;
    VAR_12[2] = VAR_13->blue;

    VAR_12 += VAR_9;
   }
  }
  VAR_7->free_row_pointers = 1;
 }

 FUNC_12(VAR_7->png_ptr, VAR_7->info_ptr, VAR_7->row_pointers);
 return VAR_7;

bail:
 if (VAR_7 != ((void*)0)) FUNC_3(VAR_7);
 return ((void*)0);
}
