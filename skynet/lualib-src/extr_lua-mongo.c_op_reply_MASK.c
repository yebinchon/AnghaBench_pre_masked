
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;
typedef scalar_t__ int32_t ;
typedef int document ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (int *,char const*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int,int) ;

__attribute__((used)) static int
FUNC_12(lua_State *VAR_1) {
 size_t VAR_2 = 0;
 const char * VAR_3 = FUNC_2(VAR_1,1,&VAR_2);
 struct {

  int32_t request_id;
  int32_t response_id;

  int32_t opcode;
  int32_t flags;
  int32_t cursor_id[2];
  int32_t starting;
  int32_t number;
 } const *VAR_4 = (const void *)VAR_3;

 if (VAR_2 < sizeof(*VAR_4)) {
  FUNC_5(VAR_1, 0);
  return 1;
 }

 int VAR_5 = FUNC_1(VAR_4->response_id);
 int VAR_6 = FUNC_1(VAR_4->flags);
 if (VAR_6 & VAR_0) {
  FUNC_5(VAR_1,0);
  FUNC_6(VAR_1, VAR_5);
  FUNC_7(VAR_1, (void *)(VAR_4+1));
  return 3;
 }

 int VAR_7 = FUNC_1(VAR_4->starting);
 int VAR_8 = FUNC_1(VAR_4->number);
 int VAR_9 = (int)VAR_2 - sizeof(*VAR_4);
 const uint8_t * VAR_10 = (const uint8_t *)(VAR_4+1);

 if (FUNC_4(VAR_1,2)) {
  int VAR_11 = 1;
  while (VAR_9 > 4) {
   FUNC_7(VAR_1, (void *)VAR_10);
   FUNC_11(VAR_1, 2, VAR_11);

   int32_t VAR_12 = FUNC_0((document)VAR_10);

   VAR_10 += VAR_12;
   VAR_9 -= VAR_12;

   ++VAR_11;
  }
  if (VAR_11 != VAR_8 + 1) {
   FUNC_5(VAR_1,0);
   FUNC_6(VAR_1, VAR_5);
   return 2;
  }
  int VAR_13 = FUNC_10(VAR_1, 2);
  for (;VAR_11<=VAR_13;VAR_11++) {
   FUNC_9(VAR_1);
   FUNC_11(VAR_1, 2, VAR_11);
  }
 } else {
  if (VAR_9 >= 4) {
   VAR_9 -= FUNC_0((document)VAR_10);
  }
 }
 if (VAR_9 != 0) {
  return FUNC_3(VAR_1, "Invalid result bson document");
 }
 FUNC_5(VAR_1,1);
 FUNC_6(VAR_1, VAR_5);
 if (VAR_8 == 0)
  FUNC_9(VAR_1);
 else
  FUNC_7(VAR_1, (void *)(VAR_4+1));
 if (VAR_4->cursor_id[0] == 0 && VAR_4->cursor_id[1]==0) {

  FUNC_9(VAR_1);
 } else {
  FUNC_8(VAR_1, (const char *)(VAR_4->cursor_id), 8);
 }
 FUNC_6(VAR_1, VAR_7);

 return 5;
}
