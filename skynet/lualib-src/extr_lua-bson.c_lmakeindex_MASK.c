
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bson_reader {scalar_t__ size; int const* ptr; int member_1; int const* member_0; } ;
typedef int lua_State ;
typedef int int32_t ;
 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int * FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*,size_t) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,struct bson_reader*) ;
 int FUNC_11 (int *,struct bson_reader*,int) ;
 char* FUNC_12 (int *,struct bson_reader*,size_t*) ;
 int FUNC_13 (int *,struct bson_reader*) ;

__attribute__((used)) static int
FUNC_14(lua_State *VAR_1) {
 int32_t *VAR_2 = FUNC_1(VAR_1,1,"bson");
 const uint8_t * VAR_3 = (const uint8_t *)VAR_2;
 struct bson_reader VAR_4 = { VAR_3+4, FUNC_0(VAR_3) - 5 };
 FUNC_3(VAR_1);

 for (;;) {
  if (VAR_4.size == 0)
   break;
  int VAR_5 = FUNC_10(VAR_1, &VAR_4);
  size_t VAR_6 = 0;
  const char * VAR_7 = FUNC_12(VAR_1, &VAR_4, &VAR_6);
  int VAR_8 = 0;
  switch (VAR_5) {
  case 138:
  case 128:
  case 142:
  case 132:
   VAR_8 = 8;
   break;
  case 144:
   VAR_8 = 1;
   break;
  case 137:
  case 129:
  case 130: {
   int VAR_9 = FUNC_13(VAR_1, &VAR_4);
   FUNC_11(VAR_1, &VAR_4, VAR_9);
   break;
  }
  case 143:
  case 146:
  case 140: {
   int VAR_10 = FUNC_13(VAR_1, &VAR_4);
   FUNC_11(VAR_1, &VAR_4, VAR_10-4);
   break;
  }
  case 145: {
   int VAR_11 = FUNC_13(VAR_1, &VAR_4);
   FUNC_11(VAR_1, &VAR_4, VAR_11+1);
   break;
  }
  case 133:
   VAR_8 = 12;
   break;
  case 135:
  case 136:
  case 134:
   break;
  case 131: {
   size_t VAR_12=0;
   size_t VAR_13=0;
   FUNC_12(VAR_1, &VAR_4, &VAR_12);
   FUNC_12(VAR_1, &VAR_4, &VAR_13);
   break;
  }
  case 139:
   VAR_8 = 4;
   break;
  case 141: {
   int VAR_14 = FUNC_13(VAR_1, &VAR_4);
   FUNC_11(VAR_1, &VAR_4, VAR_14+12);
   break;
  }
  default:

   FUNC_2(VAR_1, "Invalid bson type : %d", VAR_5);
   FUNC_4(VAR_1,1);
   continue;
  }
  if (VAR_8 > 0) {
   int VAR_15 = VAR_5 | (int)(VAR_4.ptr - VAR_3) << VAR_0;
   FUNC_11(VAR_1, &VAR_4, VAR_8);
   FUNC_6(VAR_1, VAR_7, VAR_6);
   FUNC_5(VAR_1,VAR_15);
   FUNC_7(VAR_1,-3);
  }
 }
 FUNC_9(VAR_1,1);
 FUNC_8(VAR_1,1);

 return 1;
}
