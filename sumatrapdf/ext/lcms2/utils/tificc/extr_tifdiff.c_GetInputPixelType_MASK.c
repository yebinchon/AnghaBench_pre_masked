
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
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int FUNC_8 (int *,int ,int*) ;
 int FUNC_9 (int *,int ,int*,...) ;
 int FUNC_10 (int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static
cmsUInt32Number FUNC_11(TIFF *VAR_14)
{
     uint16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, *VAR_20;
     uint16 VAR_21, VAR_22 = 0;
     int VAR_23, VAR_24 = 0, VAR_25 = 0;

     FUNC_8(VAR_14, VAR_9, &VAR_15);
     FUNC_9(VAR_14, VAR_6, &VAR_16);

     if (VAR_16 == 1)
       FUNC_5("Sorry, bilevel TIFFs has nothig to do with ICC profiles");

     if (VAR_16 != 8 && VAR_16 != 16)
              FUNC_5("Sorry, 8 or 16 bits per sample only");

     FUNC_9(VAR_14, VAR_11, &VAR_17);
     FUNC_9(VAR_14, VAR_10, &VAR_19);

     switch (VAR_19)
     {
     case 129: VAR_24 = 0; break;
     case 128: FUNC_5("Planar TIFF are not supported");
     default:

     FUNC_5("Unsupported planar configuration (=%d) ", (int) VAR_19);
     }




     if (VAR_17 == 1) VAR_24 = 0;




     FUNC_9(VAR_14, VAR_8, &VAR_18, &VAR_20);


     VAR_23 = VAR_17 - VAR_18;

     switch (VAR_15) {

     case 134:

            VAR_22 = 1;

     case 135:

            VAR_25 = VAR_0;
            break;

     case 132:

            VAR_25 = VAR_2;
            break;


     case 133:

            FUNC_5("Sorry, palette images not supported (at least on this version)");

     case 131:
           VAR_25 = FUNC_7(VAR_23);
           break;

     case 130:
           FUNC_8(VAR_14, VAR_7, &VAR_21);
           {
                  uint16 VAR_26, VAR_27;

                  VAR_25 = VAR_3;
                  FUNC_9(VAR_14, VAR_13, &VAR_26, &VAR_27);
                  if (VAR_26 != 1 || VAR_27 != 1)
                         FUNC_5("Sorry, subsampled images not supported");

           }
           break;

     case 9:
     case 137:
           VAR_25 = VAR_1;
           break;


     case 136:

           FUNC_10(VAR_14, VAR_12, VAR_5);
           VAR_25 = VAR_4;
           VAR_16 = 16;
           break;

     default:
           FUNC_5("Unsupported TIFF color space (Photometric %d)", VAR_15);
     }



     VAR_16 >>= 3;

     return (FUNC_2(VAR_25)|FUNC_6(VAR_24)|FUNC_3(VAR_18)|FUNC_1(VAR_23)|FUNC_0(VAR_16)|FUNC_4(VAR_22));
}
