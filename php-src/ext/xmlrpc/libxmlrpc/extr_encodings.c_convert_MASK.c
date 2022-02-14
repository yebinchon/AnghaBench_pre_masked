
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ iconv_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ VAR_2 ;
 size_t FUNC_3 (scalar_t__,char**,size_t*,char**,size_t*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static char* FUNC_7(const char* VAR_3, int VAR_4, int *VAR_5, const char* VAR_6, const char* VAR_7) {
   char* VAR_8 = 0;

   if(VAR_3 && VAR_4 && VAR_6 && VAR_7) {
      size_t VAR_9 = VAR_4;
      size_t VAR_10 = VAR_4;
      int VAR_11 = VAR_4;
      iconv_t VAR_12;
      char* VAR_13 = 0;

      if(FUNC_6(VAR_7) >= VAR_1 || FUNC_6(VAR_6) >= VAR_1) {
         return ((void*)0);
      }
      VAR_12 = FUNC_5(VAR_7, VAR_6);
      if(VAR_12 != (iconv_t)-1) {
         size_t VAR_14;
         VAR_8 = (char*)FUNC_1(VAR_11 + 1);

         VAR_13 = (char*)VAR_8;
         while(VAR_10) {
            VAR_14 = FUNC_3(VAR_12, (char**)&VAR_3, &VAR_10, &VAR_13, &VAR_9);
            if(VAR_14 == -1) {
               if(VAR_2 == VAR_0) {
                  int VAR_15 = VAR_13 - VAR_8;
                  VAR_11 += VAR_10;
                  VAR_9 += VAR_10;
                  VAR_8 = (char*)FUNC_2(VAR_8, VAR_11 + 1);
                  VAR_13 = VAR_8 + VAR_15;
               }
               else {
                  FUNC_0(VAR_8);
                  VAR_8 = 0;
                  break;
               }
            }
         }
         FUNC_4(VAR_12);
      }
      VAR_11 -= VAR_9;

      if(VAR_5) {
         *VAR_5 = VAR_8 ? VAR_11 : 0;
      }
      if(VAR_8) {
         VAR_8[VAR_11] = 0;
      }
   }
   return VAR_8;
}
