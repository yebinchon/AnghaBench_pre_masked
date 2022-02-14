
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sproto {int type_n; int * type; } ;
struct protocol {int tag; int confirm; int * name; int ** p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int * FUNC_0 (struct sproto*,int const*) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static const uint8_t *
FUNC_4(struct sproto *VAR_5, struct protocol *VAR_6, const uint8_t * VAR_7) {
 const uint8_t * VAR_8;
 uint32_t VAR_9 = FUNC_2(VAR_7);
 int VAR_10;
 int VAR_11;
 int VAR_12;
 VAR_7 += VAR_2;
 VAR_8 = VAR_7 + VAR_9;
 VAR_10 = FUNC_1(VAR_7, VAR_9);
 VAR_7 += VAR_1;
 VAR_6->name = ((void*)0);
 VAR_6->tag = -1;
 VAR_6->p[VAR_3] = ((void*)0);
 VAR_6->p[VAR_4] = ((void*)0);
 VAR_6->confirm = 0;
 VAR_12 = 0;
 for (VAR_11=0;VAR_11<VAR_10;VAR_11++,VAR_12++) {
  int VAR_13 = FUNC_3(VAR_7 + VAR_0 * VAR_11);
  if (VAR_13 & 1) {
   VAR_12 += (VAR_13-1)/2;
   continue;
  }
  VAR_13 = VAR_13/2 - 1;
  switch (VAR_11) {
  case 0:
   if (VAR_13 != -1) {
    return ((void*)0);
   }
   VAR_6->name = FUNC_0(VAR_5, VAR_7 + VAR_0 *VAR_10);
   break;
  case 1:
   if (VAR_13 < 0) {
    return ((void*)0);
   }
   VAR_6->tag = VAR_13;
   break;
  case 2:
   if (VAR_13 < 0 || VAR_13>=VAR_5->type_n)
    return ((void*)0);
   VAR_6->p[VAR_3] = &VAR_5->type[VAR_13];
   break;
  case 3:
   if (VAR_13 < 0 || VAR_13>=VAR_5->type_n)
    return ((void*)0);
   VAR_6->p[VAR_4] = &VAR_5->type[VAR_13];
   break;
  case 4:
   VAR_6->confirm = VAR_13;
   break;
  default:
   return ((void*)0);
  }
 }

 if (VAR_6->name == ((void*)0) || VAR_6->tag<0) {
  return ((void*)0);
 }

 return VAR_8;
}
