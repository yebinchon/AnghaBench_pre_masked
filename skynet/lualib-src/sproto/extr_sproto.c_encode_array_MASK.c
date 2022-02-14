
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int uint8_t ;
struct sproto_arg {int type; int index; int* value; int length; } ;
typedef int (* sproto_callback ) (struct sproto_arg*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int* FUNC_0 (int (*) (struct sproto_arg*),struct sproto_arg*,int*,int,int*) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static int
FUNC_2(sproto_callback VAR_3, struct sproto_arg *VAR_4, uint8_t *VAR_5, int VAR_6) {
 uint8_t * VAR_7;
 int VAR_8;
 if (VAR_6 < VAR_0)
  return -1;
 VAR_6 -= VAR_0;
 VAR_7 = VAR_5 + VAR_0;
 switch (VAR_4->type) {
 case 128: {
  int VAR_9;
  VAR_7 = FUNC_0(VAR_3,VAR_4,VAR_7,VAR_6, &VAR_9);
  if (VAR_7 == ((void*)0))
   return -1;

  if (VAR_9) {
   return 0;
  }
  break;
 }
 case 129:
  VAR_4->index = 1;
  for (;;) {
   int VAR_10 = 0;
   VAR_4->value = &VAR_10;
   VAR_4->length = sizeof(VAR_10);
   VAR_8 = VAR_3(VAR_4);
   if (VAR_8 < 0) {
    if (VAR_8 == VAR_1)
     break;
    if (VAR_8 == VAR_2)
     return 0;
    return -1;
   }
   if (VAR_6 < 1)
    return -1;
   VAR_7[0] = VAR_10 ? 1: 0;
   VAR_6 -= 1;
   VAR_7 += 1;
   ++VAR_4->index;
  }
  break;
 default:
  VAR_4->index = 1;
  for (;;) {
   if (VAR_6 < VAR_0)
    return -1;
   VAR_6 -= VAR_0;
   VAR_4->value = VAR_7+VAR_0;
   VAR_4->length = VAR_6;
   VAR_8 = VAR_3(VAR_4);
   if (VAR_8 < 0) {
    if (VAR_8 == VAR_1) {
     break;
    }
    if (VAR_8 == VAR_2)
     return 0;
    return -1;
   }
   FUNC_1(VAR_7, VAR_8);
   VAR_7 += VAR_0+VAR_8;
   VAR_6 -=VAR_8;
   ++VAR_4->index;
  }
  break;
 }
 VAR_8 = VAR_7 - (VAR_5 + VAR_0);
 return FUNC_1(VAR_5, VAR_8);
}
