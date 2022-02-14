
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sproto_arg {scalar_t__ tagname; int type; int length; int mainindex; scalar_t__ tagid; int index; scalar_t__ value; int subtype; int extra; struct decode_ud* ud; } ;
struct decode_ud {scalar_t__ deep; scalar_t__ array_tag; int result_index; int array_index; int mainindex_tag; int key_index; int * L; } ;
typedef int lua_State ;
typedef int lua_Number ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,char*,...) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,scalar_t__,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int,scalar_t__) ;
 int FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int ,scalar_t__,int,int (*) (struct sproto_arg const*),struct decode_ud*) ;

__attribute__((used)) static int
FUNC_17(const struct sproto_arg *VAR_2) {
 struct decode_ud * VAR_3 = VAR_2->ud;
 lua_State *VAR_4 = VAR_3->L;
 if (VAR_3->deep >= VAR_0)
  return FUNC_1(VAR_4, "The table is too deep");
 FUNC_0(VAR_4, 12, ((void*)0));
 if (VAR_2->index != 0) {

  if (VAR_2->tagname != VAR_3->array_tag) {
   VAR_3->array_tag = VAR_2->tagname;
   FUNC_4(VAR_4);
   FUNC_10(VAR_4, -1);
   FUNC_12(VAR_4, VAR_3->result_index, VAR_2->tagname);
   if (VAR_3->array_index) {
    FUNC_11(VAR_4, VAR_3->array_index);
   } else {
    VAR_3->array_index = FUNC_2(VAR_4);
   }
   if (VAR_2->index < 0) {

    return 0;
   }
  }
 }
 switch (VAR_2->type) {
 case 130: {

  if (VAR_2->extra) {

   int64_t VAR_5 = *(int64_t*)VAR_2->value;
   lua_Number VAR_6 = (lua_Number)VAR_5;
   VAR_6 /= VAR_2->extra;
   FUNC_9(VAR_4, VAR_6);
  } else {
   int64_t VAR_7 = *(int64_t*)VAR_2->value;
   FUNC_6(VAR_4, VAR_7);
  }
  break;
 }
 case 131: {
  int VAR_8 = *(uint64_t*)VAR_2->value;
  FUNC_5(VAR_4,VAR_8);
  break;
 }
 case 129: {
  FUNC_7(VAR_4, VAR_2->value, VAR_2->length);
  break;
 }
 case 128: {
  struct decode_ud VAR_9;
  int VAR_10;
  FUNC_4(VAR_4);
  VAR_9.L = VAR_4;
  VAR_9.result_index = FUNC_2(VAR_4);
  VAR_9.deep = VAR_3->deep + 1;
  VAR_9.array_index = 0;
  VAR_9.array_tag = ((void*)0);
  if (VAR_2->mainindex >= 0) {

   VAR_9.mainindex_tag = VAR_2->mainindex;
   FUNC_8(VAR_4);
   VAR_9.key_index = FUNC_2(VAR_4);

   VAR_10 = FUNC_16(VAR_2->subtype, VAR_2->value, VAR_2->length, FUNC_17, &VAR_9);
   if (VAR_10 < 0)
    return VAR_1;
   if (VAR_10 != VAR_2->length)
    return VAR_10;
   FUNC_10(VAR_4, VAR_9.key_index);
   if (FUNC_3(VAR_4, -1)) {
    FUNC_1(VAR_4, "Can't find main index (tag=%d) in [%s]", VAR_2->mainindex, VAR_2->tagname);
   }
   FUNC_10(VAR_4, VAR_9.result_index);
   FUNC_14(VAR_4, VAR_3->array_index);
   FUNC_15(VAR_4, VAR_9.result_index-1);
   return 0;
  } else {
   VAR_9.mainindex_tag = -1;
   VAR_9.key_index = 0;
   VAR_10 = FUNC_16(VAR_2->subtype, VAR_2->value, VAR_2->length, FUNC_17, &VAR_9);
   if (VAR_10 < 0)
    return VAR_1;
   if (VAR_10 != VAR_2->length)
    return VAR_10;
   FUNC_15(VAR_4, VAR_9.result_index);
   break;
  }
 }
 default:
  FUNC_1(VAR_4, "Invalid type");
 }
 if (VAR_2->index > 0) {
  FUNC_13(VAR_4, VAR_3->array_index, VAR_2->index);
 } else {
  if (VAR_3->mainindex_tag == VAR_2->tagid) {


   FUNC_10(VAR_4,-1);
   FUNC_11(VAR_4, VAR_3->key_index);
  }
  FUNC_12(VAR_4, VAR_3->result_index, VAR_2->tagname);
 }

 return 0;
}
