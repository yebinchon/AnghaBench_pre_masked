
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_int ;
typedef int (* ltm_prime_callback ) (unsigned char*,int,void*) ;


 int FUNC_0 () ;
 unsigned char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int,int*) ;
 int FUNC_7 (int *,unsigned char*,int) ;
 int FUNC_8 (int *,int,int *) ;

int FUNC_9(mp_int *VAR_8, int VAR_9, int VAR_10, int VAR_11, ltm_prime_callback VAR_12, void *VAR_13)
{
   unsigned char *VAR_14, VAR_15, VAR_16, VAR_17;
   int VAR_18, VAR_19, VAR_20, VAR_21;


   if (VAR_10 <= 1 || VAR_9 <= 0) {
      return VAR_7;
   }


   if (VAR_11 & VAR_3) {
      VAR_11 |= VAR_2;
   }


   VAR_20 = (VAR_10>>3)+((VAR_10&7)?1:0);


   VAR_14 = FUNC_1(FUNC_0(), 0, VAR_20);
   if (VAR_14 == ((void*)0)) {
      return VAR_4;
   }


   VAR_15 = ((VAR_10&7) == 0) ? 0xFF : (0xFF >> (8 - (VAR_10 & 7)));


   VAR_16 = 0;
   VAR_21 = ((VAR_10 & 7) == 1) ? 1 : 0;
   if (VAR_11 & VAR_1) {
      VAR_16 |= 1 << ((VAR_10 - 2) & 7);
   } else if (VAR_11 & VAR_0) {
      VAR_15 &= ~(1 << ((VAR_10 - 2) & 7));
   }


   VAR_17 = 0;
   if (VAR_11 & VAR_2) {
      VAR_17 |= 3;
   }

   do {

      if (VAR_12(VAR_14, VAR_20, VAR_13) != VAR_20) {
         VAR_19 = VAR_7;
         goto error;
      }


      VAR_14[0] &= VAR_15;
      VAR_14[0] |= 1 << ((VAR_10 - 1) & 7);


      VAR_14[VAR_21] |= VAR_16;
      VAR_14[VAR_20-1] |= VAR_17;


      if ((VAR_19 = FUNC_7(VAR_8, VAR_14, VAR_20)) != VAR_6) { goto error; }


      if ((VAR_19 = FUNC_6(VAR_8, VAR_9, &VAR_18)) != VAR_6) { goto error; }
      if (VAR_18 == VAR_5) {
         continue;
      }

      if (VAR_11 & VAR_3) {

         if ((VAR_19 = FUNC_8(VAR_8, 1, VAR_8)) != VAR_6) { goto error; }
         if ((VAR_19 = FUNC_4(VAR_8, VAR_8)) != VAR_6) { goto error; }


         if ((VAR_19 = FUNC_6(VAR_8, VAR_9, &VAR_18)) != VAR_6) { goto error; }
      }
   } while (VAR_18 == VAR_5);

   if (VAR_11 & VAR_3) {

      if ((VAR_19 = FUNC_5(VAR_8, VAR_8)) != VAR_6) { goto error; }
      if ((VAR_19 = FUNC_3(VAR_8, 1, VAR_8)) != VAR_6) { goto error; }
   }

   VAR_19 = VAR_6;
error:
   FUNC_2(FUNC_0(), 0, VAR_14);
   return VAR_19;
}
