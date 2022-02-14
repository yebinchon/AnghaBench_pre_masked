
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
typedef int tmsize_t ;
typedef int (* tileContigRoutine ) (TYPE_2__*,int*,int ,int,int,int,int,int,unsigned char*) ;
typedef int int32 ;
struct TYPE_16__ {int tif_clientdata; } ;
struct TYPE_14__ {int (* contig ) (TYPE_2__*,int*,int ,int,int,int,int,int,unsigned char*) ;} ;
struct TYPE_15__ {int width; int row_offset; int samplesperpixel; scalar_t__ col_offset; scalar_t__ stoponerr; TYPE_1__ put; TYPE_4__* tif; } ;
typedef TYPE_2__ TIFFRGBAImage ;
typedef TYPE_4__ TIFF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,int*,...) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_4__*,int ,void**,int,int) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int*,int ,int,int,int,int,int,unsigned char*) ;

__attribute__((used)) static int
FUNC_10(TIFFRGBAImage* VAR_4, uint32* VAR_5, uint32 VAR_6, uint32 VAR_7)
{
 TIFF* VAR_8 = VAR_4->tif;
 tileContigRoutine VAR_9 = VAR_4->put.contig;
 uint32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 tmsize_t VAR_15;
 unsigned char* VAR_16 = ((void*)0);
 uint32 VAR_17;
 uint16 VAR_18,VAR_19;
 uint32 VAR_20 = VAR_4->width;
 tmsize_t VAR_21;
 int32 VAR_22, VAR_23;
 int VAR_24 = 1, VAR_25;
        tmsize_t VAR_26;

 FUNC_3(VAR_8, VAR_3, &VAR_18, &VAR_19);
 if( VAR_19 == 0 ) {
  FUNC_1(VAR_8->tif_clientdata, FUNC_2(VAR_8), "Invalid vertical YCbCr subsampling");
  return (0);
 }

 VAR_26 = FUNC_5(VAR_8);

 VAR_25 = FUNC_8(VAR_4);
 if (VAR_25 & VAR_1) {
  VAR_11 = VAR_7 - 1;
  VAR_23 = -(int32)(VAR_6 + VAR_6);
 } else {
  VAR_11 = 0;
  VAR_23 = -(int32)(VAR_6 - VAR_6);
 }

 FUNC_3(VAR_8, VAR_2, &VAR_17);

 VAR_21 = FUNC_4(VAR_8);
 VAR_22 = (VAR_6 < VAR_20 ? VAR_20 - VAR_6 : 0);
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10 += VAR_12)
 {
  VAR_14 = VAR_17 - (VAR_10 + VAR_4->row_offset) % VAR_17;
  VAR_12 = (VAR_10 + VAR_14 > VAR_7 ? VAR_7 - VAR_10 : VAR_14);
  VAR_13 = VAR_12;
  if ((VAR_13%VAR_19)!=0)
   VAR_13+=VAR_19-VAR_13%VAR_19;
  if (FUNC_6(VAR_8,
      FUNC_0(VAR_8,VAR_10+VAR_4->row_offset, 0),
      (void**)(&VAR_16),
                    VAR_26,
      ((VAR_10 + VAR_4->row_offset)%VAR_17 + VAR_13) * VAR_21)==(tmsize_t)(-1)
      && (VAR_16 == ((void*)0) || VAR_4->stoponerr))
  {
   VAR_24 = 0;
   break;
  }

  VAR_15 = ((VAR_10 + VAR_4->row_offset) % VAR_17) * VAR_21 + ((tmsize_t) VAR_4->col_offset * VAR_4->samplesperpixel);

  (*VAR_9)(VAR_4, VAR_5+VAR_11*VAR_6, 0, VAR_11, VAR_6, VAR_12, VAR_22, VAR_23, VAR_16 + VAR_15);
  VAR_11 += ((VAR_25 & VAR_1) ? -(int32) VAR_12 : (int32) VAR_12);
 }

 if (VAR_25 & VAR_0) {
  uint32 VAR_27;

  for (VAR_27 = 0; VAR_27 < VAR_7; VAR_27++) {
   uint32 *VAR_28 = VAR_5 + (VAR_27 * VAR_6);
   uint32 *VAR_29 = VAR_28 + VAR_6 - 1;

   while ( VAR_28 < VAR_29 ) {
    uint32 VAR_30 = *VAR_28;
    *VAR_28 = *VAR_29;
    *VAR_29 = VAR_30;
    VAR_28++;
    VAR_29--;
   }
  }
 }

 FUNC_7(VAR_16);
 return (VAR_24);
}
