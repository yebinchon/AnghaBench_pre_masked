
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int*,size_t) ;
 int FUNC_1 (int*,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,char const*,size_t) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int,size_t*) ;
 void* FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int*,void*,size_t) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_3) {
 uint32_t VAR_4 = (uint32_t)FUNC_2(VAR_3,1);


 int VAR_5 = FUNC_6(VAR_3,2);
 void * VAR_6;
 size_t VAR_7;

 if (FUNC_9(VAR_3,3) == VAR_0) {
  VAR_6 = (void *)FUNC_7(VAR_3, 3, &VAR_7);
 } else {
  VAR_6 = FUNC_8(VAR_3,3);
  VAR_7 = (size_t)FUNC_2(VAR_3, 4);
 }

 if (!VAR_5) {
  if (VAR_7 > VAR_1) {

   VAR_7 = VAR_1;
  }
 } else {
  if (VAR_7 > VAR_1) {

   int VAR_8 = (VAR_7 - 1) / VAR_1 + 1;
   FUNC_3(VAR_3, VAR_8+1, 0);
   uint8_t VAR_9[VAR_2];


   FUNC_0(VAR_3, VAR_9, 9);
   FUNC_1(VAR_9+2, VAR_4);
   VAR_9[6] = 2;
   FUNC_1(VAR_9+7, (uint32_t)VAR_7);
   FUNC_4(VAR_3, (const char *)VAR_9, 11);
   FUNC_5(VAR_3, -2, 1);

   char * VAR_10 = VAR_6;
   int VAR_11;
   for (VAR_11=0;VAR_11<VAR_8;VAR_11++) {
    int VAR_12;
    if (VAR_7 > VAR_1) {
     VAR_12 = VAR_1;
     VAR_9[6] = 3;
    } else {
     VAR_12 = VAR_7;
     VAR_9[6] = 4;
    }
    FUNC_0(VAR_3, VAR_9, VAR_12+5);
    FUNC_1(VAR_9+2, VAR_4);
    FUNC_10(VAR_9+7,VAR_10,VAR_12);
    FUNC_4(VAR_3, (const char *)VAR_9, VAR_12+7);
    FUNC_5(VAR_3, -2, VAR_11+2);
    VAR_7 -= VAR_12;
    VAR_10 += VAR_12;
   }
   return 1;
  }
 }

 uint8_t VAR_13[VAR_2];
 FUNC_0(VAR_3, VAR_13, VAR_7+5);
 FUNC_1(VAR_13+2, VAR_4);
 VAR_13[6] = VAR_5;
 FUNC_10(VAR_13+7,VAR_6,VAR_7);

 FUNC_4(VAR_3, (const char *)VAR_13, VAR_7+7);

 return 1;
}
