
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t stb_uint ;
typedef int stb_uchar ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 size_t FUNC_4 (int *,size_t,int,int) ;
 size_t FUNC_5 (int *,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(stb_uchar *VAR_2,
                              stb_uchar *VAR_3,
                              stb_uchar *VAR_4,
                              int VAR_5,
                              int *VAR_6,
                              stb_uchar **VAR_7,
                              stb_uint VAR_8)
{
   int VAR_9 = VAR_1;
   stb_uint VAR_10;
   stb_uchar *VAR_11 = VAR_3 - *VAR_6;
   stb_uchar *VAR_12 = VAR_3;






   while (VAR_12 < VAR_3+VAR_5 && VAR_12+12 < VAR_4) {
      int VAR_13;
      stb_uint VAR_14,VAR_15,VAR_16,VAR_17, VAR_18;
      stb_uchar *VAR_19;
      int VAR_20 = 2, VAR_21=0;

      if (VAR_12+65536 > VAR_4)
         VAR_10 = (stb_uint) (VAR_4-VAR_12);
      else
         VAR_10 = 65536u;
      VAR_18 = FUNC_5(VAR_12,0, 1, 2); VAR_14 = (((VAR_18) + ((VAR_18) >> 16)) & VAR_8);
                                      VAR_19 = VAR_7[VAR_14]; if (VAR_19) if (0 ? VAR_21 != (int) (VAR_12-VAR_19) : 1) if ((VAR_13 = (int) FUNC_0(VAR_19, VAR_12, VAR_10)) > VAR_20) if ((((int) (VAR_12-(VAR_19))) <= VAR_9 && ((VAR_13) > 9 || FUNC_0(VAR_13,(int) (VAR_12-(VAR_19)))))) VAR_20 = VAR_13, VAR_21 = (int) (VAR_12 - (VAR_19));
      VAR_18 = FUNC_4(VAR_12,VAR_18, 3, 4); VAR_15 = (((VAR_18) + ((VAR_18) >> 16)) & VAR_8);
      VAR_18 = FUNC_4(VAR_12,VAR_18, 5, 6); VAR_19 = VAR_7[VAR_15]; if (VAR_19) if (1 ? VAR_21 != (int) (VAR_12-VAR_19) : 1) if ((VAR_13 = (int) FUNC_0(VAR_19, VAR_12, VAR_10)) > VAR_20) if ((((int) (VAR_12-(VAR_19))) <= VAR_9 && ((VAR_13) > 9 || FUNC_0(VAR_13,(int) (VAR_12-(VAR_19)))))) VAR_20 = VAR_13, VAR_21 = (int) (VAR_12 - (VAR_19));
      VAR_18 = FUNC_4(VAR_12,VAR_18, 7, 8); VAR_16 = (((VAR_18) + ((VAR_18) >> 16)) & VAR_8);
      VAR_18 = FUNC_4(VAR_12,VAR_18, 9,10); VAR_19 = VAR_7[VAR_16]; if (VAR_19) if (1 ? VAR_21 != (int) (VAR_12-VAR_19) : 1) if ((VAR_13 = (int) FUNC_0(VAR_19, VAR_12, VAR_10)) > VAR_20) if ((((int) (VAR_12-(VAR_19))) <= VAR_9 && ((VAR_13) > 9 || FUNC_0(VAR_13,(int) (VAR_12-(VAR_19)))))) VAR_20 = VAR_13, VAR_21 = (int) (VAR_12 - (VAR_19));
      VAR_18 = FUNC_4(VAR_12,VAR_18,11,12); VAR_17 = (((VAR_18) + ((VAR_18) >> 16)) & VAR_8);
                                      VAR_19 = VAR_7[VAR_17]; if (VAR_19) if (1 ? VAR_21 != (int) (VAR_12-VAR_19) : 1) if ((VAR_13 = (int) FUNC_0(VAR_19, VAR_12, VAR_10)) > VAR_20) if ((((int) (VAR_12-(VAR_19))) <= VAR_9 && ((VAR_13) > 9 || FUNC_0(VAR_13,(int) (VAR_12-(VAR_19)))))) VAR_20 = VAR_13, VAR_21 = (int) (VAR_12 - (VAR_19));



      VAR_7[VAR_14] = VAR_7[VAR_15] = VAR_7[VAR_16] = VAR_7[VAR_17] = VAR_12;

      if (VAR_20 > 2)
         FUNC_2(VAR_21 > 0);


      if (VAR_20 < 3) {
         ++VAR_12;
      } else if (VAR_20 > 2 && VAR_20 <= 0x80 && VAR_21 <= 0x100) {
         FUNC_3(VAR_11, VAR_12-VAR_11); VAR_11 = (VAR_12 += VAR_20);
         FUNC_7(0x80 + VAR_20-1);
         FUNC_7(VAR_21-1);
      } else if (VAR_20 > 5 && VAR_20 <= 0x100 && VAR_21 <= 0x4000) {
         FUNC_3(VAR_11, VAR_12-VAR_11); VAR_11 = (VAR_12 += VAR_20);
         FUNC_8(0x4000 + VAR_21-1);
         FUNC_7(VAR_20-1);
      } else if (VAR_20 > 7 && VAR_20 <= 0x100 && VAR_21 <= 0x80000) {
         FUNC_3(VAR_11, VAR_12-VAR_11); VAR_11 = (VAR_12 += VAR_20);
         FUNC_9(0x180000 + VAR_21-1);
         FUNC_7(VAR_20-1);
      } else if (VAR_20 > 8 && VAR_20 <= 0x10000 && VAR_21 <= 0x80000) {
         FUNC_3(VAR_11, VAR_12-VAR_11); VAR_11 = (VAR_12 += VAR_20);
         FUNC_9(0x100000 + VAR_21-1);
         FUNC_8(VAR_20-1);
      } else if (VAR_20 > 9 && VAR_21 <= 0x1000000) {
         if (VAR_20 > 65536) VAR_20 = 65536;
         FUNC_3(VAR_11, VAR_12-VAR_11); VAR_11 = (VAR_12 += VAR_20);
         if (VAR_20 <= 0x100) {
            FUNC_7(0x06);
            FUNC_9(VAR_21-1);
            FUNC_7(VAR_20-1);
         } else {
            FUNC_7(0x04);
            FUNC_9(VAR_21-1);
            FUNC_8(VAR_20-1);
         }
      } else {
         ++VAR_12;
      }
   }


   if (VAR_12-VAR_3 < VAR_5)
      VAR_12 = VAR_3+VAR_5;


   *VAR_6 = (int) (VAR_12 - VAR_11);

   VAR_0 = FUNC_6(VAR_0, VAR_3, (int) (VAR_12 - VAR_3));
   return (int) (VAR_12 - VAR_3);
}
