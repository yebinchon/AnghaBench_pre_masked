
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct sproto_arg {int type; int index; int* value; int length; } ;
typedef int (* sproto_callback ) (struct sproto_arg*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int (*) (struct sproto_arg*),struct sproto_arg*,int*,scalar_t__) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int*) ;

__attribute__((used)) static int
FUNC_3(sproto_callback VAR_3, struct sproto_arg *VAR_4, uint8_t * VAR_5) {
 uint32_t VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = VAR_4->type;
 int VAR_8;
 if (VAR_6 == 0) {

  VAR_4->index = -1;
  VAR_4->value = ((void*)0);
  VAR_4->length = 0;
  VAR_3(VAR_4);
  return 0;
 }
 VAR_5 += VAR_2;
 switch (VAR_7) {
 case 130: {
  int VAR_9 = *VAR_5;
  ++VAR_5;
  --VAR_6;
  if (VAR_9 == VAR_0) {
   if (VAR_6 % VAR_0 != 0)
    return -1;
   for (VAR_8=0;VAR_8<VAR_6/VAR_0;VAR_8++) {
    uint64_t VAR_10 = FUNC_1(FUNC_2(VAR_5 + VAR_8*VAR_0));
    VAR_4->index = VAR_8+1;
    VAR_4->value = &VAR_10;
    VAR_4->length = sizeof(VAR_10);
    VAR_3(VAR_4);
   }
  } else if (VAR_9 == VAR_1) {
   if (VAR_6 % VAR_1 != 0)
    return -1;
   for (VAR_8=0;VAR_8<VAR_6/VAR_1;VAR_8++) {
    uint64_t VAR_11 = FUNC_2(VAR_5 + VAR_8*VAR_1);
    uint64_t VAR_12 = FUNC_2(VAR_5 + VAR_8*VAR_1 + VAR_0);
    uint64_t VAR_13 = VAR_11 | VAR_12 << 32;
    VAR_4->index = VAR_8+1;
    VAR_4->value = &VAR_13;
    VAR_4->length = sizeof(VAR_13);
    VAR_3(VAR_4);
   }
  } else {
   return -1;
  }
  break;
 }
 case 131:
  for (VAR_8=0;VAR_8<VAR_6;VAR_8++) {
   uint64_t VAR_14 = VAR_5[VAR_8];
   VAR_4->index = VAR_8+1;
   VAR_4->value = &VAR_14;
   VAR_4->length = sizeof(VAR_14);
   VAR_3(VAR_4);
  }
  break;
 case 129:
 case 128:
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 default:
  return -1;
 }
 return 0;
}
