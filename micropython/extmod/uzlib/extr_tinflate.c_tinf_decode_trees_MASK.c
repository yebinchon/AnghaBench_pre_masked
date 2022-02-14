
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TINF_TREE ;
typedef int TINF_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned char*,unsigned int) ;
 size_t* VAR_2 ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int *,unsigned char*,unsigned int) ;
 int FUNC_3 (int *,int *) ;
 unsigned int FUNC_4 (int *,int,int) ;

__attribute__((used)) static int FUNC_5(TINF_DATA *VAR_3, TINF_TREE *VAR_4, TINF_TREE *VAR_5)
{

   unsigned char VAR_6[288+32];
   unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
   unsigned int VAR_11, VAR_12, VAR_13;


   VAR_7 = FUNC_4(VAR_3, 5, 257);


   VAR_8 = FUNC_4(VAR_3, 5, 1);


   VAR_9 = FUNC_4(VAR_3, 4, 4);

   for (VAR_11 = 0; VAR_11 < 19; ++VAR_11) VAR_6[VAR_11] = 0;


   for (VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11)
   {

      unsigned int VAR_14 = FUNC_4(VAR_3, 3, 0);

      VAR_6[VAR_2[VAR_11]] = VAR_14;
   }


   FUNC_2(VAR_4, VAR_6, 19);


   VAR_10 = VAR_7 + VAR_8;
   for (VAR_12 = 0; VAR_12 < VAR_10; )
   {
      int VAR_15 = FUNC_3(VAR_3, VAR_4);
      unsigned char VAR_16 = 0;
      int VAR_17, VAR_18 = 3;


      if (VAR_15 < 0) return VAR_15;

      switch (VAR_15)
      {
      case 16:

         if (VAR_12 == 0) return VAR_0;
         VAR_16 = VAR_6[VAR_12 - 1];
         VAR_17 = 2;
         break;
      case 17:

         VAR_17 = 3;
         break;
      case 18:

         VAR_17 = 7;
         VAR_18 = 11;
         break;
      default:

         VAR_6[VAR_12++] = VAR_15;

         continue;
      }


      VAR_13 = FUNC_4(VAR_3, VAR_17, VAR_18);
      if (VAR_12 + VAR_13 > VAR_10) return VAR_0;
      for (; VAR_13; --VAR_13)
      {
         VAR_6[VAR_12++] = VAR_16;
      }
   }
   FUNC_2(VAR_4, VAR_6, VAR_7);
   FUNC_2(VAR_5, VAR_6 + VAR_7, VAR_8);

   return VAR_1;
}
