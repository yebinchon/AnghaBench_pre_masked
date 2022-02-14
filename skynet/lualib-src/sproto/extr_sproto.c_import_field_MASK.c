
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sproto {int type_n; int * type; } ;
struct field {int tag; int type; int key; int extra; int * name; int * st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int * FUNC_1 (struct sproto*,int const*) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static const uint8_t *
FUNC_5(struct sproto *VAR_7, struct field *VAR_8, const uint8_t * VAR_9) {
 uint32_t VAR_10;
 const uint8_t * VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15 = -1;
 VAR_8->tag = -1;
 VAR_8->type = -1;
 VAR_8->name = ((void*)0);
 VAR_8->st = ((void*)0);
 VAR_8->key = -1;
 VAR_8->extra = 0;

 VAR_10 = FUNC_3(VAR_9);
 VAR_9 += VAR_2;
 VAR_11 = VAR_9 + VAR_10;
 VAR_12 = FUNC_2(VAR_9, VAR_10);
 if (VAR_12 < 0)
  return ((void*)0);
 VAR_9 += VAR_1;
 for (VAR_13=0;VAR_13<VAR_12;VAR_13++) {
  int VAR_16;
  ++VAR_15;
  VAR_16 = FUNC_4(VAR_9 + VAR_0 * VAR_13);
  if (VAR_16 & 1) {
   VAR_15+= VAR_16/2;
   continue;
  }
  if (VAR_15 == 0) {
   if (VAR_16 != 0)
    return ((void*)0);
   VAR_8->name = FUNC_1(VAR_7, VAR_9 + VAR_12 * VAR_0);
   continue;
  }
  if (VAR_16 == 0)
   return ((void*)0);
  VAR_16 = VAR_16/2 - 1;
  switch(VAR_15) {
  case 1:
   if (VAR_16 >= VAR_6)
    return ((void*)0);
   VAR_8->type = VAR_16;
   break;
  case 2:
   if (VAR_8->type == VAR_4) {
    VAR_8->extra = FUNC_0(10, VAR_16);
   } else if (VAR_8->type == VAR_5) {
    VAR_8->extra = VAR_16;
   } else {
    if (VAR_16 >= VAR_7->type_n)
     return ((void*)0);
    if (VAR_8->type >= 0)
     return ((void*)0);
    VAR_8->type = VAR_6;
    VAR_8->st = &VAR_7->type[VAR_16];
   }
   break;
  case 3:
   VAR_8->tag = VAR_16;
   break;
  case 4:
   if (VAR_16)
    VAR_14 = VAR_3;
   break;
  case 5:
   VAR_8->key = VAR_16;
   break;
  default:
   return ((void*)0);
  }
 }
 if (VAR_8->tag < 0 || VAR_8->type < 0 || VAR_8->name == ((void*)0))
  return ((void*)0);
 VAR_8->type |= VAR_14;

 return VAR_11;
}
