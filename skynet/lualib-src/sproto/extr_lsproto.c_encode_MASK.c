
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct sproto_arg {scalar_t__ tagname; scalar_t__ mainindex; int type; int extra; size_t length; scalar_t__ value; int subtype; int index; struct encode_ud* ud; } ;
struct encode_ud {scalar_t__ deep; scalar_t__ array_tag; int tbl_index; int array_index; int iter_func; int iter_table; int iter_key; int st; int * L; } ;
typedef int lua_State ;
typedef int lua_Number ;
typedef int lua_Integer ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,scalar_t__) ;
 int FUNC_5 (int *,int,int ) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int,int*) ;
 char* FUNC_19 (int *,int,size_t*) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (scalar_t__,char const*,size_t) ;
 int FUNC_24 (int *,struct encode_ud*) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int ,scalar_t__,size_t,int (*) (struct sproto_arg const*),struct encode_ud*) ;

__attribute__((used)) static int
FUNC_27(const struct sproto_arg *VAR_4) {
 struct encode_ud *VAR_5 = VAR_4->ud;
 lua_State *VAR_6 = VAR_5->L;
 FUNC_0(VAR_6, 12, ((void*)0));
 if (VAR_5->deep >= VAR_0)
  return FUNC_1(VAR_6, "The table is too deep");
 if (VAR_4->index > 0) {
  if (VAR_4->tagname != VAR_5->array_tag) {

   VAR_5->array_tag = VAR_4->tagname;
   FUNC_4(VAR_6, VAR_5->tbl_index, VAR_4->tagname);
   if (FUNC_9(VAR_6, -1)) {
    if (VAR_5->array_index) {
     FUNC_15(VAR_6, VAR_5->array_index);
    }
    VAR_5->array_index = 0;
    return VAR_3;
   }
   if (VAR_5->array_index) {
    FUNC_15(VAR_6, VAR_5->array_index);
   } else {
    VAR_5->array_index = FUNC_6(VAR_6);
   }

   if (FUNC_2(VAR_6, VAR_5->array_index, "__pairs")) {
    FUNC_14(VAR_6, VAR_5->array_index);
    FUNC_3(VAR_6, 1, 3);
    int VAR_7 = FUNC_6(VAR_6);
    VAR_5->iter_func = VAR_7 - 2;
    VAR_5->iter_table = VAR_7 - 1;
    VAR_5->iter_key = VAR_7;
   } else if (!FUNC_11(VAR_6,VAR_5->array_index)) {
    return FUNC_1(VAR_6, ".*%s(%d) should be a table or an userdata with metamethods (Is a %s)",
     VAR_4->tagname, VAR_4->index, FUNC_22(VAR_6, FUNC_21(VAR_6, -1)));
   } else {
    FUNC_13(VAR_6);
    VAR_5->iter_func = 0;
    VAR_5->iter_table = 0;
    VAR_5->iter_key = FUNC_6(VAR_6);
   }
  }
  if (VAR_4->mainindex >= 0) {
   if (!FUNC_24(VAR_6, VAR_5)) {

    FUNC_13(VAR_6);
    FUNC_15(VAR_6, VAR_5->iter_key);
    return VAR_2;
   }
   FUNC_7(VAR_6, -2);
   FUNC_15(VAR_6, VAR_5->iter_key);
  } else {
   FUNC_5(VAR_6, VAR_5->array_index, VAR_4->index);
  }
 } else {
  FUNC_4(VAR_6, VAR_5->tbl_index, VAR_4->tagname);
 }
 if (FUNC_9(VAR_6, -1)) {
  FUNC_12(VAR_6,1);
  return VAR_2;
 }
 switch (VAR_4->type) {
 case 130: {
  int64_t VAR_8;
  lua_Integer VAR_9;
  int VAR_10;
  if (VAR_4->extra) {

   lua_Number VAR_11 = FUNC_20(VAR_6, -1);

   VAR_8 = (int64_t)(FUNC_25(VAR_11 * VAR_4->extra));
  } else {
   VAR_8 = FUNC_18(VAR_6, -1, &VAR_10);
   if(!VAR_10) {
    return FUNC_1(VAR_6, ".%s[%d] is not an integer (Is a %s)",
     VAR_4->tagname, VAR_4->index, FUNC_22(VAR_6, FUNC_21(VAR_6, -1)));
   }
  }
  FUNC_12(VAR_6,1);

  VAR_9 = VAR_8 >> 31;
  if (VAR_9 == 0 || VAR_9 == -1) {
   *(uint32_t *)VAR_4->value = (uint32_t)VAR_8;
   return 4;
  }
  else {
   *(uint64_t *)VAR_4->value = (uint64_t)VAR_8;
   return 8;
  }
 }
 case 131: {
  int VAR_12 = FUNC_17(VAR_6, -1);
  if (!FUNC_8(VAR_6,-1)) {
   return FUNC_1(VAR_6, ".%s[%d] is not a boolean (Is a %s)",
    VAR_4->tagname, VAR_4->index, FUNC_22(VAR_6, FUNC_21(VAR_6, -1)));
  }
  *(int *)VAR_4->value = VAR_12;
  FUNC_12(VAR_6,1);
  return 4;
 }
 case 129: {
  size_t VAR_13 = 0;
  const char * VAR_14;
  if (!FUNC_10(VAR_6, -1)) {
   return FUNC_1(VAR_6, ".%s[%d] is not a string (Is a %s)",
    VAR_4->tagname, VAR_4->index, FUNC_22(VAR_6, FUNC_21(VAR_6, -1)));
  } else {
   VAR_14 = FUNC_19(VAR_6, -1, &VAR_13);
  }
  if (VAR_13 > VAR_4->length)
   return VAR_1;
  FUNC_23(VAR_4->value, VAR_14, VAR_13);
  FUNC_12(VAR_6,1);
  return VAR_13;
 }
 case 128: {
  struct encode_ud VAR_15;
  int VAR_16;
  int VAR_17 = FUNC_6(VAR_6);
  VAR_15.L = VAR_6;
  VAR_15.st = VAR_4->subtype;
  VAR_15.tbl_index = VAR_17;
  VAR_15.array_tag = ((void*)0);
  VAR_15.array_index = 0;
  VAR_15.deep = VAR_5->deep + 1;
  VAR_15.iter_func = 0;
  VAR_15.iter_table = 0;
  VAR_15.iter_key = 0;
  VAR_16 = FUNC_26(VAR_4->subtype, VAR_4->value, VAR_4->length, FUNC_27, &VAR_15);
  FUNC_16(VAR_6, VAR_17-1);
  if (VAR_16 < 0)
   return VAR_1;
  return VAR_16;
 }
 default:
  return FUNC_1(VAR_6, "Invalid field type %d", VAR_4->type);
 }
}
