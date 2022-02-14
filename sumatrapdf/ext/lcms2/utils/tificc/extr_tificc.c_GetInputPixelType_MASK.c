
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int cmsUInt32Number ;
typedef int TIFF ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int *,int ,int*) ;
 int FUNC_10 (int *,int ,int*,...) ;
 int FUNC_11 (int *,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static
cmsUInt32Number FUNC_12(TIFF *VAR_18)
{
    uint16 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, *VAR_24;
    uint16 VAR_25, VAR_26 = 0;
    int VAR_27, VAR_28 = 0, VAR_29 = 0, VAR_30;
    int VAR_31 = VAR_0;

    FUNC_9(VAR_18, VAR_12, &VAR_19);
    FUNC_10(VAR_18, VAR_9, &VAR_20);

    if (VAR_20 == 1)
        FUNC_6("Sorry, bilevel TIFFs has nothing to do with ICC profiles");

    if (VAR_20 != 8 && VAR_20 != 16 && VAR_20 != 32)
        FUNC_6("Sorry, 8, 16 or 32 bits per sample only");

    FUNC_10(VAR_18, VAR_14, &VAR_21);
    FUNC_10(VAR_18, VAR_13, &VAR_23);

    switch (VAR_23) {

     case 129: VAR_28 = 0; break;
     case 128: VAR_28 = 1; break;
     default:

         FUNC_6("Unsupported planar configuration (=%d) ", (int) VAR_23);
    }




    if (VAR_21 == 1) VAR_28 = 0;



    FUNC_10(VAR_18, VAR_11, &VAR_22, &VAR_24);



    if (VAR_8) {

        VAR_27 = VAR_21;
        VAR_22 = 0;
    }
    else
        VAR_27 = VAR_21 - VAR_22;

    switch (VAR_19) {

    case 134:

        VAR_26 = 1;



    case 135:
        VAR_29 = VAR_1;
        break;

    case 132:
        VAR_29 = VAR_4;
        break;


     case 133:
         FUNC_6("Sorry, palette images not supported");
         break;

     case 131:

         VAR_29 = FUNC_8(VAR_27);
         break;

     case 130:
         FUNC_9(VAR_18, VAR_10, &VAR_25);
         {
             uint16 VAR_32, VAR_33;

             VAR_29 = VAR_5;
             FUNC_10(VAR_18, VAR_16, &VAR_32, &VAR_33);
             if (VAR_32 != 1 || VAR_33 != 1)
                 FUNC_6("Sorry, subsampled images not supported");

         }
         break;

     case 137:
         VAR_29 = VAR_3;
         break;

     case 138:
         VAR_29 = VAR_2;
         VAR_31 = VAR_17;
         break;


     case 136:

         FUNC_11(VAR_18, VAR_15, VAR_7);
         VAR_29 = VAR_6;
         VAR_20 = 16;
         break;

     default:
         FUNC_6("Unsupported TIFF color space (Photometric %d)", VAR_19);
    }



    VAR_20 >>= 3;
    VAR_30 = (VAR_20 == 0) || (VAR_20 == 4);

    return (FUNC_5(VAR_30)|FUNC_2(VAR_29)|FUNC_7(VAR_28)|FUNC_3(VAR_22)|FUNC_1(VAR_27)|FUNC_0(VAR_20)|FUNC_4(VAR_26) | (VAR_31 << 23) );
}
