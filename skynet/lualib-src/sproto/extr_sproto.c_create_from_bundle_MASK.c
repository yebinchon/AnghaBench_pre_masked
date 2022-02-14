
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sproto {int type_n; int protocol_n; int * proto; int * type; int memory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int * FUNC_1 (struct sproto*,int *,int const*) ;
 int * FUNC_2 (struct sproto*,int *,int const*) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int const*,size_t) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;

__attribute__((used)) static struct sproto *
FUNC_7(struct sproto *VAR_3, const uint8_t * VAR_4, size_t VAR_5) {
 const uint8_t * VAR_6;
 const uint8_t * VAR_7 = ((void*)0);
 const uint8_t * VAR_8 = ((void*)0);
 int VAR_9 = FUNC_4(VAR_4, VAR_5);
 int VAR_10;
 if (VAR_9 < 0 || VAR_9 > 2)
  return ((void*)0);

 VAR_4 += VAR_1;
 VAR_6 = VAR_4 + VAR_9*VAR_0;

 for (VAR_10=0;VAR_10<VAR_9;VAR_10++) {
  int VAR_11 = FUNC_6(VAR_4 + VAR_10*VAR_0);
  int VAR_12;
  if (VAR_11 != 0)
   return ((void*)0);
  VAR_12 = FUNC_0(VAR_6);
  if (VAR_12<0)
   return ((void*)0);
  if (VAR_10 == 0) {
   VAR_7 = VAR_6+VAR_2;
   VAR_3->type_n = VAR_12;
   VAR_3->type = FUNC_3(&VAR_3->memory, VAR_12 * sizeof(*VAR_3->type));
  } else {
   VAR_8 = VAR_6+VAR_2;
   VAR_3->protocol_n = VAR_12;
   VAR_3->proto = FUNC_3(&VAR_3->memory, VAR_12 * sizeof(*VAR_3->proto));
  }
  VAR_6 += FUNC_5(VAR_6) + VAR_2;
 }

 for (VAR_10=0;VAR_10<VAR_3->type_n;VAR_10++) {
  VAR_7 = FUNC_2(VAR_3, &VAR_3->type[VAR_10], VAR_7);
  if (VAR_7 == ((void*)0)) {
   return ((void*)0);
  }
 }
 for (VAR_10=0;VAR_10<VAR_3->protocol_n;VAR_10++) {
  VAR_8 = FUNC_1(VAR_3, &VAR_3->proto[VAR_10], VAR_8);
  if (VAR_8 == ((void*)0)) {
   return ((void*)0);
  }
 }

 return VAR_3;
}
