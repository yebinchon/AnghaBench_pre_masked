
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_structp ;
typedef int png_infop ;
typedef int ********* png_bytep ;
typedef int png_byte ;
struct TYPE_5__ {int mmgr; int stream; TYPE_1__* error; } ;
struct TYPE_4__ {scalar_t__ error_no; } ;
typedef size_t HPDF_UINT ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_INT ;
typedef TYPE_2__* HPDF_Dict ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int **********) ;
 void* FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *********,int) ;
 int VAR_4 ;


 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int **********) ;

__attribute__((used)) static HPDF_STATUS
FUNC_9 (HPDF_Dict VAR_5,
                         png_structp VAR_6,
                         png_infop VAR_7,
                         png_bytep VAR_8)
{
 HPDF_STATUS VAR_9 = VAR_3;
 HPDF_INT VAR_10;
 HPDF_UINT VAR_11, VAR_12;
 png_bytep *VAR_13, VAR_14;
 png_byte VAR_15;
 png_uint_32 VAR_16 = FUNC_5(VAR_6, VAR_7);
 png_uint_32 VAR_17 = FUNC_6(VAR_6, VAR_7);

 VAR_15 = FUNC_4(VAR_6, VAR_7);

 if (!(VAR_15 & VAR_4)) {
  return VAR_2;
 }

 VAR_13 = FUNC_1 (VAR_5->mmgr, VAR_16 * sizeof(png_bytep));
 if (!VAR_13) {
  return VAR_0;
 } else {
  png_uint_32 VAR_18 = FUNC_7(VAR_6, VAR_7);

  for (VAR_11 = 0; VAR_11 < (HPDF_UINT)VAR_16; VAR_11++) {
   VAR_13[VAR_11] = FUNC_1(VAR_5->mmgr, VAR_18);
   if (!VAR_13[VAR_11]) {
    for (; VAR_11 > 0; VAR_11--) {
     FUNC_0 (VAR_5->mmgr, &VAR_13[VAR_11]);
    }
    FUNC_0 (VAR_5->mmgr, VAR_13);
    return VAR_0;
   }
  }
 }

 FUNC_8(VAR_6, VAR_13);
 if (VAR_5->error->error_no != VAR_3) {
  VAR_9 = VAR_2;
  goto Error;
 }

 switch (VAR_15) {
  case 128:
   VAR_10 = 3 * VAR_17 * sizeof(png_byte);
   for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12++) {
    for (VAR_11 = 0; VAR_11 < VAR_17; VAR_11++) {
     VAR_14 = VAR_13[VAR_12];
     FUNC_3(VAR_14 + (3 * VAR_11), VAR_14 + (4*VAR_11), 3);
     VAR_8[VAR_17 * VAR_12 + VAR_11] = VAR_14[4 * VAR_11 + 3];
    }

    if (FUNC_2 (VAR_5->stream, VAR_14, VAR_10) != VAR_3) {
     VAR_9 = VAR_1;
     goto Error;
    }
   }
   break;
  case 129:
   VAR_10 = VAR_17 * sizeof(png_byte);
   for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12++) {
    for (VAR_11 = 0; VAR_11 < VAR_17; VAR_11++) {
     VAR_14 = VAR_13[VAR_12];
     VAR_14[VAR_11] = VAR_14[2 * VAR_11];
     VAR_8[VAR_17 * VAR_12 + VAR_11] = VAR_14[2 * VAR_11 + 1];
    }

    if (FUNC_2 (VAR_5->stream, VAR_14, VAR_10) != VAR_3) {
     VAR_9 = VAR_1;
     goto Error;
    }
   }
   break;
  default:
   VAR_9 = VAR_2;
   goto Error;
 }

Error:
 for (VAR_11 = 0; VAR_11 < (HPDF_UINT)VAR_16; VAR_11++) {
  FUNC_0 (VAR_5->mmgr, &VAR_13[VAR_11]);
 }

 FUNC_0 (VAR_5->mmgr, VAR_13);
 return VAR_9;
}
