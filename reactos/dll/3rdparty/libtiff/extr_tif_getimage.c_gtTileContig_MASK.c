
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ tmsize_t ;
typedef int (* tileContigRoutine ) (TYPE_2__*,int*,int,int,int,int,int,int,unsigned char*) ;
typedef int int32 ;
struct TYPE_15__ {int tif_clientdata; } ;
struct TYPE_13__ {int (* contig ) (TYPE_2__*,int*,int,int,int,int,int,int,unsigned char*) ;} ;
struct TYPE_14__ {int col_offset; int row_offset; scalar_t__ samplesperpixel; scalar_t__ stoponerr; TYPE_1__ put; TYPE_4__* tif; } ;
typedef TYPE_2__ TIFFRGBAImage ;
typedef TYPE_4__ TIFF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,void**,scalar_t__,int,int,int ,int ) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int*,int,int,int,int,int,int,unsigned char*) ;

__attribute__((used)) static int
FUNC_9(TIFFRGBAImage* VAR_4, uint32* VAR_5, uint32 VAR_6, uint32 VAR_7)
{
    TIFF* VAR_8 = VAR_4->tif;
    tileContigRoutine VAR_9 = VAR_4->put.contig;
    uint32 VAR_10, VAR_11, VAR_12, VAR_13;
    tmsize_t VAR_14;
    uint32 VAR_15, VAR_16;
    unsigned char* VAR_17 = ((void*)0);
    int32 VAR_18, VAR_19;
    uint32 VAR_20;
    int VAR_21 = 1, VAR_22;
    uint32 VAR_23, VAR_24;
    int32 VAR_25, VAR_26;
    int32 VAR_27;
    uint32 VAR_28;
    tmsize_t VAR_29;

    VAR_29 = FUNC_4(VAR_8);
    if (VAR_29 == 0) {
        FUNC_0(VAR_8->tif_clientdata, FUNC_1(VAR_8), "%s", "No space for tile buffer");
        return (0);
    }

    FUNC_2(VAR_8, VAR_3, &VAR_15);
    FUNC_2(VAR_8, VAR_2, &VAR_16);

    VAR_22 = FUNC_7(VAR_4);
    if (VAR_22 & VAR_1) {
     VAR_12 = VAR_7 - 1;
     VAR_19 = -(int32)(VAR_15 + VAR_6);
    }
    else {
     VAR_12 = 0;
     VAR_19 = -(int32)(VAR_15 - VAR_6);
    }




    VAR_27 = VAR_4->col_offset % VAR_15;
    VAR_28 = VAR_15 - VAR_27;
    VAR_26 = VAR_19 + VAR_27;
    for (VAR_11 = 0; VAR_21 != 0 && VAR_11 < VAR_7; VAR_11 += VAR_20)
    {
        VAR_13 = VAR_16 - (VAR_11 + VAR_4->row_offset) % VAR_16;
     VAR_20 = (VAR_11 + VAR_13 > VAR_7 ? VAR_7 - VAR_11 : VAR_13);
 VAR_18 = VAR_27;
 VAR_23 = VAR_28;
 VAR_25 = VAR_26;
 VAR_24 = 0;
 VAR_10 = VAR_4->col_offset;
 while (VAR_24 < VAR_6)
        {
     if (FUNC_5(VAR_8, (void**) &VAR_17, VAR_29, VAR_10,
        VAR_11+VAR_4->row_offset, 0, 0)==(tmsize_t)(-1) &&
                (VAR_17 == ((void*)0) || VAR_4->stoponerr))
            {
                VAR_21 = 0;
                break;
            }
            VAR_14 = ((VAR_11+VAR_4->row_offset) % VAR_16) * FUNC_3(VAR_8) + ((tmsize_t) VAR_18 * VAR_4->samplesperpixel);

     if (VAR_24 + VAR_23 > VAR_6)
     {



  VAR_18 = VAR_15 - (VAR_6 - VAR_24);
  VAR_23 = VAR_15 - VAR_18;
  VAR_25 = VAR_19 + VAR_18;
     }
     (*VAR_9)(VAR_4, VAR_5+VAR_12*VAR_6+VAR_24, VAR_24, VAR_12, VAR_23, VAR_20, VAR_18, VAR_25, VAR_17 + VAR_14);
     VAR_24 += VAR_23;
     VAR_10 += VAR_23;



     VAR_18 = 0;
     VAR_23 = VAR_15;
     VAR_25 = VAR_19;
 }

        VAR_12 += ((VAR_22 & VAR_1) ? -(int32) VAR_20 : (int32) VAR_20);
    }
    FUNC_6(VAR_17);

    if (VAR_22 & VAR_0) {
     uint32 VAR_30;

     for (VAR_30 = 0; VAR_30 < VAR_7; VAR_30++) {
      uint32 *VAR_31 = VAR_5 + (VAR_30 * VAR_6);
      uint32 *VAR_32 = VAR_31 + VAR_6 - 1;

      while ( VAR_31 < VAR_32 ) {
       uint32 VAR_33 = *VAR_31;
       *VAR_31 = *VAR_32;
       *VAR_32 = VAR_33;
       VAR_31++;
    VAR_32--;
      }
     }
    }

    return (VAR_21);
}
